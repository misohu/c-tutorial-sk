#include <stdio.h>

int main() {
    int x = 4, y = 2, sum;   // deklarujem a inicializujem v jednom riadku sum nie je inicializovana
    int subs, mult, div;

    // zakladne INFIX matematicke operacie
    sum = x+y; 
    subs = x-y;
    mult = x*y;
    div = x/y;

    printf("%d %d %d %d\n", sum, subs, mult, div);

    // POZOR / v tomto pripade je celociselne delenie lebo delim 2 cele cisla (viac o desatinnych cislach v dalsej casti)

    // specialny prefix/suffix operator ++ -- 
    int counter = 1;
    counter++;
    printf("%d\n", counter);
    ++counter;
    printf("%d\n", counter);
    counter--;
    printf("%d\n", counter);
    --counter;
    printf("%d\n", counter);

    // Prefix vs suffix 
    int tmp = 10;
    printf("%d\n", tmp++); // tmp najprv vrati hodnotu 10 a az potom ju incrementuje na 11
    printf("%d\n", tmp);

    // Pozuitie zatvoriek je rovnake ko v matematike 
    int res = (1+2)*(3/(1+2))-15;
    printf("%d", res);

    // velmi casto chceme pripocitat nejaku hodnotu k existujucej premennej
    // napr zvasit pocitadlo o dva
    int counter = 0;
    counter = counter + 2; // nudny sposob
    counter += 2; // cool sposob
    counter -= 2;  // odcitanie
    counter *= 2; // vynasobenie atd

    return 1;
}

// Domaca uloha: specifikujte premennu radius a nasledne naprogramujte kod ktory vyrata objem gule.