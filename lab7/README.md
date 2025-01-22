# Zadania

### 1. ( 6 )
Proszę napisać i przetestować procedurę zgodna z prototypem void razem(int *f_1, int *l_1, int *f_2, int *l_2, int *f); , która dwie dowolnie długie posortowane rosnąco tablice przekazane odpowiednio pierwsza tablica  przez wskaźniki (początek i koniec) int *f_1, int *l_1 , druga tablica przez wskaźniki (początek i koniec) int *f_2, int *l_2 połączy w jedną tablicę posortowaną rosnąco (bez sortowania) do której wskaźnik jest ostatnim argumentem funkcji int *f.\
Procedura razem  ma być napisana w wersji wskaźnikowej, czyli bez użycia operatora tablicowego [ ].\
Tablica wynikowa ma być zadeklarowana  i wypisana w funkcji main, wypełnienie wartościami realizuje procedura razem\
W programie nie korzystamy z dynamicznej alokacji pamięci oraz ze zmiennych globalnych.

Wynik działania programu dla testowych tablic\
int tab1[] = {1,12,13,14,22};\
int tab2[] = {3,4,13,45,54,55,56,66};

```
    tablica result → 1,3,4,12,13,13,14,22,45,54,55,56,66
```

---

### 2. ( 4 ) 
Proszę napisać funkcję zgodną z prototypem:\
       void up_2(char* tekst_1, char *tekst_2);\
która wykorzystując funkcje strstr z biblioteki string.h, oraz   int toupper(int c); z biblioteki  ctype.h zamieni litery w parzystych wystąpieniach napisu przekazanego przez wskaźnik tekst_2 w napisie przekazanym przez wskaźnik tekst_1 na duże litery - funkcja nie ma ograniczenia na długość napisów.

        //dzialanie toupper
        char var = 'b';
        printf ("toupper(%c) = %c \n", var, toupper(var));
W funkcji main należy wygenerować łańcuch znaków S_1 (małe litery z zakresu od 'a' do 'j') o długości podanej przez użytkownika.\
Następnie należy wylosować dodatkową małą literę z tego samego zakresu i zbudować napis S_2 złożony z trzech takich liter.\
Wykorzystując funkcję up_2 należy zamienić litery na duże w parzystych wystąpieniach napisu S_2  w napisie S_1\
Przyklad:\
S_1 --> "aaagjbaaaahjhhedgacaajebfdadciaaaaaa"\
S_2 --> "aaa"\
wywołanie up_2(S_1, S_2) powinno spowodować zmianę w łańcuchu S_1\
S_1 --> "aaagjbAAAahjhhedgacaajebfdadciaaaAAA"

---

### 3. ( 4 )
Proszę napisać program, który zostanie wywołany z trzema argumentami napisami. Program ma je wypisać w porządku alfabetycznym, należy wykorzystać funkcję\
int strcmp(char *S1, char *S2);, która porównuje stringi leksykalnie i zwraca:
> 0 gdy S1 jest większe leksykalnie od S2\
< 0 gdy S1 jest mniejsze leksykalnie od S2\
== 0 gdy S1 jest równe leksykalnie S2

  Przykład wywołania
```  
./a.out Ala Tola Alala  Wynik    Ala Alala Tola
./a.out Ala Ola   Wynik blad - za malo argumentow
```

---
### 4. ( 6 )
W funkcji main(), korzystając z funkcji scanf() proszę pobrać liczbę, dla której zostanie obliczony n-ty wyraz ciągu Fibonacciego.Proszę napisać **funkcję rekurencyjną**, która pozwoli wypisać drzewo wywołań rekurencyjnych.\
**Nie korzystamy ze zmiennych globalnych.**\
*Wynik dla wartości wczytanej **6***
```
Głębokość_wywołania, Działanie, l=numer wywołania

0, Obliczam f(6)=f(5)+f(4), l=1
1, Obliczam f(5)=f(4)+f(3), l=2
2, Obliczam f(4)=f(3)+f(2), l=3
3, Obliczam f(3)=f(2)+f(1), l=4
4, Obliczam f(2)=f(1)+f(0), l=5
5, Zwracam f(1), l=6
5, Zwracam f(0), l=7
4, Zwracam f(1), l=8
3, Obliczam f(2)=f(1)+f(0), l=9
4, Zwracam f(1), l=10
4, Zwracam f(0), l=11
2, Obliczam f(3)=f(2)+f(1), l=12
3, Obliczam f(2)=f(1)+f(0), l=13
4, Zwracam f(1), l=14
4, Zwracam f(0), l=15
3, Zwracam f(1), l=16
1, Obliczam f(4)=f(3)+f(2), l=17
2, Obliczam f(3)=f(2)+f(1), l=18
3, Obliczam f(2)=f(1)+f(0), l=19
4, Zwracam f(1), l=20
4, Zwracam f(0), l=21
3, Zwracam f(1), l=22
2, Obliczam f(2)=f(1)+f(0), l=23
3, Zwracam f(1), l=24
3, Zwracam f(0), l=25

rFibonacci (6) = 8
```