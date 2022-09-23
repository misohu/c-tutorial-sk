// Napiste program ktory vypise nasledujuci utvar pre n=3
// *
// **
// ***
// Pocet hviezdiciek v riadku rastie o + 1 s kazdym riadkom

#include <stdio.h>


void draw_triangel(int n); // Ak chceme tak vieme telo funkcie specifikovat aj pod funkciou main. Musime vsak uviest jej deklaracnu cast nad nou. 

int main() {
    int row, column, n = 10;

    for (row = 1; row <= n; row++) {
        for (column = 1; column <= row; column++) {
            printf("*");
        }
        printf("\n");
    }

    draw_triangel(3);
    return 1;
}

// Domaca Uloha 
// Spravte iste s tym ze cely program bude vo funkcii drav triangle. Tato funkcia bude mat vstupny parameter cislo n
// Vystupom tejto funkcie nebude nic. Funkcia len vypise trojuholnik
void draw_triangel(int n) {
    int row, column;

    for (row = 1; row <= n; row++) {
        for (column = 1; column <= row; column++) {
            printf("*");
        }
        printf("\n");
    }
}

// DOMACA Uloha napiste kod ktory bude pisat taku istu piramidu ale namiesto hviezdiciek tam budu cisla, ktore budu postupne stupat
// napr pre n=4
// 1
// 1 2 
// 1 2 3 
// 1 2 3 4