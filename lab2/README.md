# Zadania

### 1. (6) Proszę napisać program, który wylosuje cyfrę **różną od zera** --> funkcja `rand()`, a następnie wyświetli na ekranie dwa trójkąty według poniższego schematu.

*Przykład działania programu dla cyfry 5:*

```
54321 0
 5432 10
  543 210
   54 3210
    5 43210
      543210
```

---

### 2. (4) Proszę napisać program, który wczyta liczbę całkowitą `scanf("%d",&n);` i sprawdzi czy to liczba pierwsza.
- Jeżeli liczba jest pierwsza wyświetli odpowiedni komunikat.
- Jeśli liczba nie jest pierwsza - wypisać jej wszystkie dzielniki nietrywialne.

Jeżeli chcemy wykorzystać pierwiastek - funkcja `double sqrt(double)` znajduje się w bibliotece `math.h`, czyli:
- należy dołączyć plik nagłówkowy `#include <math.h>`
- należy dołączyć bibliotekę matematyczną - komenda kompilacji:
  ```
  gcc nazwa_pliku.c -o nazwa_programu -lm
  ```

---

### 3. (6) Proszę napisać program, który wylosuje dużą literę i wypisze dla niej trójkąt zgodny z podanym przykładem.  
Losowanie dużej litery można zrealizować za pomocą funkcji `rand()` na dwa sposoby:
- wylosowanie liczby z zakresu od `a = 65` do `b = 90` - kody ASCII liter od `A` do `Z` → `a + rand()%(b-a+1)`
- wylosowanie liczby z zakresu od `0` do `25` i dodanie jej do znaku `'A'` → `'A' + rand()%26`

**Przykład działania programu dla litery F:**

```
     A
    BAB
   CBABC
  DCBABCD
 EDCBABCDE
FEDCBABCDEF
```

---

### 4. (4) Obliczanie sumy szeregu harmonicznego

Szeregiem harmonicznym pierwszego rzędu nazywamy następujący szereg liczbowy:
```
1 + 1/2 + 1/3 + ... + 1/n
```

Proszę napisać program, który wczyta liczbę typu `double` `scanf("%lf",&n);`, nie mniejszą niż `10.0` a następnie wypisze, ile elementów szeregu trzeba zsumować, aby suma przekroczyła wczytaną wartość `n`.

**Wypisać tę liczbę oraz sumę z dokładnością do 10 cyfr po przecinku.**

**Przykład:**  
Jeżeli wczytano `10.0` program powinien wypisać:
```
12367 elementów Suma = 10.0000430083
```