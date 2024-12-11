# Zadania

### 1. ( 6 ) Proszę zaimplementować operację dodawania liczb całkowitych zapisanych w systemie U1. Długość liczby wczytywana jest z klawiatury. Zakładamy, że  liczby mają tę samą długość - w razie przekroczenia zakresu wypisać komunikat. Poprawność wyniku należy sprawdzić wyliczając wartości dziesiętne liczb

*Przykład dla liczb 10-cyfrowych*

```
    0101100100
  + 0000011111
   -----------
    0110000011

   Dziesietnie: 356 + 31 = 387
```

---

### 2. ( 3 ) Proszę napisać program, w którym zostanie stworzona n-elementowa tablica liczb całkowitych (n<200 generowane losowo). Należy wypełnić ją liczbami losowymi różnowartościowymi przedziału [-100, 100] i wypisać  zawartość tak, aby wszystkie wartości były wyrównane do prawej strony, ze znakiem. Następnie znajdź indeks największgo  elementu i go wypisz wraz z wartością elementu 

**NIE KORZYSTAMY Z DODATKOWEJ TABLICY**

*Przykład działania programu dla 10-elementowej tablicy*
```
    element[0] = +20
    element[1] = -24
    element[2] =  +1
    element[3] = -13
    element[4] =  +4
    element[5] = +10
    element[6] = +12
    element[7] = -23
    element[8] = -42
    element[9] = +93

    Maksymalny element to 93, wystepuje pod indeksem 9
```
---

### 3. ( 3 ) Proszę napisać program, w którym zostanie stworzona n-elementowa tablica liczb rzeczywistych (n<200 generowane losowo). Należy
- wypełnić ją liczbami losowymi z przedziału [-100.0, 100.0]
- wypisać zawartość używając specyfikatora formatu %*.*f tak, aby wszystkie wartości były wyrównane do prawej strony i wypisane z dwiema cyframi po przecinku
- przy pomocy pętli cyklicznie przesunąć wartości w prawo (wartość każdego elementu do następnego tak, aby po przesunięciu w elemencie o indeksie i znajdowała się wartość, która wcześniej była w elemencie o indeksie i-1)
- wypisać używając specyfikatora formatu %*.*f tak, aby zawartość z dwiema cyframi po przecinku wyrównane do prawego brzegu wraz ze znakiem.

**NIE KORZYSTAMY Z DODATKOWEJ TABLICY**

*Przykład działania programu dla 10-elementowej tablicy*

```
A[0] =  51.60
A[1] = -27.80
A[2] =  19.82
A[3] = -94.53
A[4] =  -6.66
A[5] =  90.28
A[6] =  75.05
A[7] = -13.61
A[8] = -18.31
A[9] =  27.91

Po zamianie:
A[0] =  27.91
A[1] =  51.60
A[2] = -27.80
A[3] =  19.82
A[4] = -94.53
A[5] =  -6.66
A[6] =  90.28
A[7] =  75.05
A[8] = -13.61
A[9] = -18.31
```
---
### 4. ( 4 ) Proszę napisać program bez użycia tablicy, który będzie generował liczby całkowite  z zakresu [0, 150],  aż do momentu, gdy zostanie wylosowane 0 lub 150. Program ma wypisywać losowane liczby, ich ilość oraz  długość najdłuższego ciągu niemalejącego we wczytanych liczbach

*Przykład działania programu*

```
    ciag wylosowanych liczb: 1 56 34 56 78 2 7 9 9 10 45 3 6 0
    wylosowano 14 liczb, najdluzszy ciag niemalejacy ma 6 elementow
```
---
### 5. ( 4 ) Proszę napisać program, który losuje `n>10000` liczb zmiennoprzecinkowych z przedziału [10.000, 19.9999] (liczba n ma być wczytana z klawiatury). W tablicy `tab` liczb całkowitych o dziesięciu elementach proszę zliczyć, ile wartości wylosowano z poszczególnych przedziałów: tak, aby w elemencie
#### `tab[0]` znajdowała się ilość wylosowanych wartości z przedziału [10.0, 11.0), 
#### `tab[1]` znajdowała się ilość wylosowanych wartości  przedziału [11.0, 12.0), itd.
### Premiowane jest rozwiązanie bez instrukcji if oraz tylko z jedną tablicą
### Na koniec proszę wypisać tablicę tab, np.:
*Przykład działania programu*

```
Podaj liczbe losowan: 10000000
   Przedzial [10, 11): 1000612 punktow.
   Przedzial [11, 12): 1000644 punktow.
   Przedzial [12, 13): 998615 punktow.
   Przedzial [13, 14): 999910 punktow.
   Przedzial [14, 15): 999098 punktow.
   Przedzial [15, 16): 998455 punktow.
   Przedzial [16, 17): 1000212 punktow.
   Przedzial [17, 18): 1000842 punktow.
   Przedzial [18, 19): 1001497 punktow.
   Przedzial [19, 20): 1000115 punktow.
```