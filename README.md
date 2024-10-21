# Laboratorium 1: Ala ma kota

## Opis zadania

Celem tego laboratorium jest napisanie programu w C, który wypisuje zdanie: 

`Ala ma X kot...`

gdzie:
- `X` to liczby od 0 do 99, które będą dynamicznie zmieniały się w trakcie działania programu.
- Słowo „kota/koty/kotów” powinno być poprawnie odmienione w zależności od liczby (`X`):
  - `Ala ma 1 kota`
  - `Ala ma 2, 3, 4 koty`
  - `Ala ma 5-99 kotów`
  - Dla liczby `0`, zdanie powinno brzmieć: `Ala nie ma kotów`.

## Zasady gramatyki:
- `kota` dla liczby `1`
- `koty` dla liczb `2, 3, 4` (z wyjątkiem wartości z końcówką `12, 13, 14`)
- `kotów` dla liczb `5-99` oraz liczb zakończonych na `0`, `12-14`.

## Przykładowy wynik działania programu

Program powinien wyświetlić wyniki dla każdej liczby od `0` do `99` w poprawnej formie gramatycznej, np.:
`Ala nie ma kotów Ala ma 1 kota Ala ma 2 koty Ala ma 5 kotów Ala ma 21 kotów ...`
