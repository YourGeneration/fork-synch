# fork-synch

Laboratorium - Wstęp do systemów operacyjnych

## Zadanie 7.6
Uwaga! W zadaniu 7.6 i 7.7 przed uruchomieniem należy dopisać deklaracje "int status" :)

* Zmodyfikuj program z poprzedniego ćwiczenia tak aby rodzic czekał bezczynnie na zakończenie procesu potomnego a następnie wyświetlał identyfikator zakończonego procesu.
* [Zadanie 7.6](https://github.com/YourGeneration/fork-synch/commit/ee0639019e7a1f1ca9f311de6cc20bd8a8f7d003)

	
## Zadanie 7.7
Uwaga! W zadaniu 7.6 i 7.7 przed uruchomieniem należy dopisać deklaracje "int status" :)

* Zmodyfikuj program z poprzedniego ćwiczenia tak aby rodzic podczas czekania na zakończenie procesu potomnego wyświetlał co sekundę komunikat o tym, że oczekuje na zakończenie potomka.
* [Zadanie 7.7](https://github.com/YourGeneration/fork-synch/commit/ab29a96ea11dea474f0ec60de26f1ff15337c8bf)

## Zadanie 7.9

* Przepisz i uruchom poniższy program a następnie zmodyfikuj fragment wykorzystujący
funkcję execlp() aby jego działanie było analogiczne do fragmentu korzystającego z
funkcji system()

```
1 #include <stdlib.h>
2 #include <stdio.h>
3 #include <unistd.h>
4 using namespace std;
5 int main(int argc, char** argv) {
6 printf("Wykonuję polecenie za pomocą funkcji system()\n");
7 system("echo Pośpię sobie chwileczkę");
8 system("sleep 10");
9 printf("Polecenie wywołane za pomocą system() zakończyło
się\n");
10 printf("Wykonuję polecenie za pomocą funkcji execlp()\n");
11 execlp("echo","echo","Pośpię sobie chwileczkę",NULL);
12 execlp("sleep","sleep","10",NULL);
13 printf("Polecenie wywołane za pomocą execlp() zakończyło
się\n");
14 return 0;
15 }
```

* [Przed Modyfikacją](https://github.com/YourGeneration/fork-synch/commit/66dc95121fb67088954f46939aa903df5018c913)
* [Po Modyfikacji](https://github.com/YourGeneration/fork-synch/commit/f5257e15614212cb145c075a7a6bd8d2a57e727e)


## Autor
Beata Podgórska
