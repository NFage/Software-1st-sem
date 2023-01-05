# IMPR-Lecture-8

## Gruppeopgaver
Opgave 8.1 er en forholdsvis ligefrem opgave om enumeration typer. 
I tillæg til denne opgave har vi også gang i afleveringsopgave 3. 
Så der er flere forskellige udfordringer, som I kan arbejde med.

### Opgave 8.1 (En tilfældig menu) 
Implementeres i [src/menu.c](src/menu.c)([KN Slides](https://homes.cs.aau.dk/~normark/impr-c/types-enumeration-typer-3-slide-exercise-1.html))



### Opgave 7.4 (Kom godt i gang med CTest).
I filerne [src/point_distance.c](src/point_distance.c) og [src/point_distance.h](src/point_distance.h) er der implementeret funktioner til at beregne
afstanden imellem to punkter. 
Bemærk også her hvordan dokumentationen af de to funktioner er skrevet.
Versionen `point_distance_2d` kan kun beregne afstanden i 2 dimensioner, imens `point_distance` kan beregne det for et
vilkårligt antal dimensioner.
`point_distance` er dog implementeret forkert, det kan vi se ved at køre de implementerede tests som du finder i [test](test) mappen.
Specifikt er vores testprogrammer implementeret i [test/test_point_distance_2d.c](test/test_point_distance_2d.c) og [test/test_point_distance_nd.c](test/test_point_distance_nd.c).
Testene bliver "orkestreret" fra vores [test/CMakeLists.txt](test/CMakeLists.txt) fil.

Du gøre testen ved at vælge "All CTest" og "kør" eller "debug".
![all_ctest.png](all_ctest.png)

Ret fejlene i `point_distance` så vores tests går igennem.

### Opgave 7.2 (Test af programmet der beregner timer, minutter og sekunder).
Implementeres i [src/time_calc.c](src/time_calc.c) og [src/time_calc.h](src/time_calc.h) filerne.
Husk at tilføje dem til [src/CMakeLists.txt](src/CMakeLists.txt) som et library, se hvordan det er gjort for den tidligere opgave.
Der er allerede implementeret en prototype i [src/time_calc.h](src/time_calc.h), men både implementation og dokumentation mangler.

Vi har i rigt mål beskæftiget os med et program, der beregner timer, minutter og sekunder af et antal sekunder. 
Senest har vi i Opgave 6.2 (Lektion 6) programmeret en funktion `hours_minutes_seconds`, som er et godt udgangspunkt for denne opgave.

Lav nu en systematisk test (black box unit testing) af følgende ønskede input og outputs til funktionen `hours_minutes_seconds`:

- Input: 4000 sekunder. Forventet output: 1 timer, 6 minutter og 40 sekunder
- Input: 75 sekunder. Forventet output: 0 timer, 1 minutter og 15 sekunder
- Input: 3700 sekunder. Forventet output: 1 timer, 1 minutter og 40 sekunder
- Input: 55 sekunder. Forventet output: 0 timer, 0 minutter og 55 sekunder
- Input: 3661 sekunder. Forventet output: 1 timer, 1 minutter og 1 sekunder

Programmer dine tests ved brug af CTest og asserts, præcist som det er gjort for den tidligere opgave.

Bemærk lige at vi i denne opgave ikke tester output formatet - kun beregningerne af normaliserede timer, minutter og sekunder.

## Hjemmeopgaver
[Opgave 15 side 332](src/exercise-PSPDC-391-7.c) i Problem Solving and Program Design in C, eighth edition. Vær sikker på at du skriver en funktion med passende parametre, som returnerer pi.

The value for pi can be determined by the series equation:
```
pi = 4* (1 - 1/3 + 1/5 - 1/7 + 1/9 - 1/11 + 1/13 ...)
```
Write a program that prompts the user to enter the number of iterations to be executed to determine the value of pi.

### Ekstra opgave
 Del din kode fra opgaven ovenfor op så du får et bibliotek (library) der indeholder funktionen `double calc_pi(int iterations)`.
 Tilføj en test på at den beregnede værdi for pi er et sted imellem 3 og 4.