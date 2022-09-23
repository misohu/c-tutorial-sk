#include <stdio.h>
#include <math.h>

int main() {
    // Cykly nam sluzia na opakovanie bloku kodu
    // PR chceme vypisat moje meno 10x 
    // Mohli by sme napisat 10x printf ale co keby sme ho chceli vypisat 1000x alebo nekonecne vela krat
    int counter;
    for (counter=0; counter < 10; counter++) {
        printf("Michal Hucko\n");
    }

    // riadiacu premennu mozme prepouzit v tele cyklu
    for (counter = 0; counter < 10; counter++){
        printf("%d -> Michal Hucko\n", counter);
    }

    // Update premennej moze byt cokolvek. POZOR SU TAM BODKOCIARKY nie ciarky
    for (counter = 1; counter <= 10000; counter*=10) {
        printf("%d\n", counter);
    }

    // for cyklus s dvomi riadiacimi premenami deklaracia priamo v zatvorke
    for (int radius = 1, area = 0; area < 70 || radius < 10; radius++)
    {
        // PI je konstanta o ktorych si povieme nieco neskor (viete ich rozlisit velkymi pismenami)
        area = M_PI*pow(radius,2); // ak menim riadiavu premennu v tele cyklu prejavy sa to pri testovani podmienky
        printf("area -> %d, radius -> %d\n", area, radius); // cislo je vzdy cele viete preco ? 
    }
}

// DEMO Uloha. Napiste program, ktory urci ci je cislo prvocislom