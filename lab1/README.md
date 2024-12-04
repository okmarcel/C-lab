
# Zadania

### 1. (4) Proszę wstawić do poniższego programu w odpowiednim miejscu instrukcję `printf`

```c
#include <stdio.h>
int n; // jest inicjalizowana na 0 jako globalna

int main() {
    int zm_1 = 14;
    int zm_3 = 5;

    {
        int zm_2 = 8;
        int zm_3 = -31;

        int n = 11;
        zm_3 = zm_3 - 31;
        zm_1 = 6;
    }

    zm_3 = zm_3 + 1;
    return 0;
}
```

Tak, aby w wyniku znalazły się następujące linijki - kolejność nie jest obowiązkowa:
```
zmienna n = 0, zmienna zm_3 = 5
zmienna n = 11, zmienna zm_3 = -32
zmienna zm_1 = 6, zmienna zm_3 = -32, zmienna zm_2 = 8
zmienna zm_2 = 8
zmienna n = 0, zmienna zm_3 = 6
zmienna zm_1 = 14, zmienna zm_3 = -32
```

---

### 2. Proszę napisać program, który wypisze na ekranie wszystkie liczby podzielne przez 3 i niepodzielne przez 7 z przedziału od -15 do 131, a następnie napisze ich liczbę.

---

### 3. Proszę napisać program, który wylosuje 30 liczb pseudolosowych z przedziału `u` od -11 do 86, wypisze na ekran najmniejszą i największą oraz średnią arytmetyczną z wylosowanych liczb.

Losowanie liczb pseudolosowych można realizować wykorzystując funkcję `rand()`

```c
#include <time.h> // Konieczne dołożenie biblioteki time.h, aby móc korzystać z funkcji time
#include <stdlib.h> // dla funkcji srand i rand

time_t czas;

srand((unsigned int)time(&czas)); // Konieczna biblioteka stdlib.h
// Inicjalizacja ziarna dla generatora liczb pseudolosowych aktualnym czasem systemowym - różne
// ziarno pozwala generować różne ciągi liczb pseudolosowych

a + rand() % (b - a + 1); // Losowanie liczby całkowitej pseudolosowej z zakresu od a do b
```

---

### 4. Proszę napisać program, który wczyta kwotę podzielną przez 5 (wczytujemy nie więcej niż 3 razy - jeśli po trzech próbach nadal zła wartość → komunikat i wyjście z programu), a następnie wypisze jak "wypłacić" ją minimalną ilością banknotów. Mamy do dyspozycji banknoty o nominałach 20, 10 oraz 5.

---

### 5. Proszę napisać program wykorzystując pętlę while tablicujący zestawienie temperatur Celsjusza i Fahrenheita, wg. zależności C = (5/9) * (F – 32) dla zakresu temperatur -50.0 – 50.0 °C z krokiem 8 °C.
wynik:
```
             Celsjusz         Fahrenheit
             cel=-50.00       far=-58.00
             cel=-42.00       far=-43.60
             cel=-34.00       far=-29.20
             cel=-26.00       far=-14.80
             cel=-18.00       far=-0.40
             cel=-10.00       far=+14.00
             cel= -2.00       far=+28.40
             cel= +6.00       far=+42.80
             cel=+14.00       far=+57.20
             cel=+22.00       far=+71.60
             cel=+30.00       far=+86.00
             cel=+38.00       far=+100.40
             cel=+46.00       far=+114.80
```