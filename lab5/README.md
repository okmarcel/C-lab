# Zadania

### 1. Proszę napisać funkcje zgodne z prototypami:
   - (3) float min(float *first, int n);
     która zwraca numer najmniejszego z n kolejnych elementów tablicy od wskaźnika first.
   - (3) float* max(float *first, float *last);
     która zwraca adres wartości największej spośród elementów tablicy od wskaźnika
     first do wskaźnika last włącznie.

W funkcji main proszę zadeklarować 100-elementową tablicę liczb rzeczywistych i wypełnić ją liczbami wylosowanymi z przedziału od -3.0 do 3.0.\
Wykorzystując funkcje min oraz max proszę wypisać:
   - (1) Minimalną i maksymalną wartość z tablicy oraz dodatkowo adresy obu wartości.
   - (2) Minimalną i maksymalną wartość w kolejnych 10-tkach elementów oraz dodatkowo
      adresy obu wartości.

Przykład działania programu:

```
minimalny we wszystkich elementach = -2.9925 adres elementu: 000000000062FC50,
maksymalny we wszystkich elementach = 2.9982 adres elementu: 000000000062FD24
------------------------------------------------------------
elementy od  0 do  9  min = -2.9925 adres 000000000062FC50   max = 2.3758 adres 000000000062FC6C
elementy od 10 do 19  min = -2.9101 adres 000000000062FC8C   max = 2.1537 adres 000000000062FC7C
elementy od 20 do 29  min = -2.9720 adres 000000000062FCAC   max = 2.9312 adres 000000000062FCA0
elementy od 30 do 39  min = -2.6578 adres 000000000062FCDB   max = 1.8516 adres 000000000062FCE4
elementy od 40 do 49  min = -2.1460 adres 000000000062FD04   max = -2.7354 adres 000000000062FCF8
elementy od 50 do 59  min = -2.8575 adres 000000000062FD3C   max = 2.9982 adres 000000000062FD24
elementy od 60 do 69  min = -2.9473 adres 000000000062FD50   max = 2.5127 adres 000000000062FD54
elementy od 70 do 79  min = -2.3503 adres 000000000062FD84   max = -2.6949 adres 000000000062FDB4
elementy od 80 do 89  min = -2.0907 adres 000000000062FDAB   max = 1.8173 adres 000000000062FDB4
elementy od 90 do 99  min = -2.6188 adres 000000000062FDB4   max = 2.9399 adres 000000000062FDBC
```

---

### 2. ( 5 ) Proszę napisać funkcję fun, do której przekazywana jest tablica liczb całkowitych. Funkcja powinna zliczać ilość elementów parzystych, nieparzystych oraz wyliczyć średnią wartość  elementów w przekazanej tablicy .
W funkcji nie może być instrukcji wypisujących, a w programie nie wolno używać zmiennych globalnych.\
W funkcji main należy przetestować  funkcję fun dla tablic tab1 oraz tab_2 wypisując dla każdej z nich ilość elementów parzystych, nieparzystych oraz średnią.\
Uwaga: wypisywanie  wartości musi być zrealizowane w funkcji main.

int tab1[] = {64, -79, -5, 81, 22, [900]=86, 1, 46, -79, 19, 33, -90, -83, 61, -68, 31, 44, -53, -41, 65, 17, -49, -15, -97, 65, -28, -20, 20, -63, -72, 75, 77, -51, -53, 35, 47, -30, -47, 32, -97, -61, 48, 40, -52, -43, -16, -29, 15, -73, 87, 43, 11, 90, 8, 59, -53, -72, 72, -26, -97, 50, 22, -73, -38, -54, -41, -25, 15, -11, 84, -6, 27, 32, -65, 51, 65, 38, -19, 99, -44, 54, -9, 22, 50, 84, -95, 68, 14, 62, -22, 32, 3, -18, -45, 53, 20, 5, 69, -92, -99, 95, -84, -41, -77, -91, 17, 33, 47, 75, 33, 79, 6, -99, -22, -67, 61, -17};

int tab2[] = {64, -79, -5, 81, 22, 86, 1, 46, -79, 19, 33, -90, -83, 61, -68, 31, 44, -53, -41, 65, 17, -49, -15, -97, 65, -28, -20, 20, -63, 0, 75, 77, -51, -53, 35, 47, -30, -47, 32, -97, -61, 48, 40, -52, -43, -16, -29, 15, -73, 87, 43, 11, 90, 8, 59, -53, -72, 72, -26, -97, 50, 22, -73, -38, -54, -41, -25, 15, 0, 84, -6, 27, 32, -65, 51, 65, 38, -19, 99, -44, 54, -9, 22, 50, 84, -95, 68, 14, 62, -22, 32, 3, -18, -45, 53, 20, 5, 69, -92, -99, 95, -84, -41, -77, -91, 17, 33, 47, 75, 33, 79, 6, 0, -22, -67, 61, -17};

Wynik działania programu

    tablica tab1 ilosc parzytych 46, ilosc nieparzystych 71, wartosc srednia = -0.037
    tablica tab2  ilosc parzystych 45, ilosc nieparzystych 69, wartosc srednia = 1.239


---
### 3. ( 6 ) Program proszę zaimplementować w notacji wskaźnikowej, czyli bez operatora tablicowego [ ]
Proszę napisać funkcję ........ where(float *first, int len); , do której przekazujemy tablicę liczb rzeczywistych, która zwraca wskaźnik do najmniejszego elementu dodatniego w przekazanej tablicy -\
UWAGA w tablicy może nie być elementów dodatnich wtedy funkcja powinna zwrócić NULL.
W funkcji main(), proszę utworzyć  tablicę liczb rzeczywistych o rozmiarze wczytanym z klawiatury i wypełnić ją liczbami losowymi z zakresu <-10.0, 10.0>
W programie należy wypisać tablicę w formacie:

    tab[0] = -0.593706, adres elementu: 0x7ffd87595f20
    tab[1] = 0.127097, adres elementu: 0x7ffd87595f28

Wykorzystując funkcję where , proszę znaleźć najmniejszy element dodatni, wypisać jego adres, wartość oraz indeks. Jeżeli w tablicy nie ma elementów dodatnich należy wypisać stosowny komunikat.