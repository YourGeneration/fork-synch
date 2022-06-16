#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

using namespace std;

int main(int argc, char** argv) {
    printf("Wykonuję polecenie za pomocą funkcji system()\n");
    system("echo Pośpię sobie chwileczkę");
    system("sleep 10");
    printf("Polecenie wywołane za pomocą system() zakończyło się\n");
    int status;
    pid_t pid, pid_kolejny;
    pid = fork();

    if(pid == 0){
        printf("Wykonuję polecenie za pomocą funkcji execlp()\n");
        execlp("echo","echo","Pośpię sobie chwileczkę",NULL);
        exit(0);
    }       
    else if(pid == -1){
        printf("Błąd\n");
    }
    else{
        wait(&status);
        pid_kolejny = fork();
        
        if(pid_kolejny==0){
            execlp("sleep","sleep","10",NULL);
            exit(0);
        }
        else if(pid_kolejny == -1){
            printf("Błąd\n");
        }
        else{
            wait(&status);
            printf("Polecenie wywołane za pomocą execlp() zakończyło się\n");
            exit(0);
        }
        exit(0);
    }
    return 0;
}