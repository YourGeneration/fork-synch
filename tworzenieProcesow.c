#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    pid_t pid_potomka,pid_moj,pid_rodzica;
    char *komunikat;
    int powtorzen;
    printf("Na razie działa jeden proces\n");

    pid_potomka = fork();
    pid_rodzica = getpid();
    pid_moj = getpid();

    switch (pid_potomka){
        case -1:
            printf("rozwidlenie procesu nie powiodło się\n");
            exit(1);
        case 0:
            sleep(10);
            exit(1);
            break;
        default:
            printf("Jestem rodzicem PID potomka, moj PID =%d a PID rodzica=%d\n",pid_moj,pid_rodzica);
            do{
                if((pid_potomka=wait(&status))>0){
            		printf("PID zakończonego procesu %d\n",pid_potomka);
            	}
            }while(pid_potomka==0)
            break;
    }
}