#include <stdio.h>

int main() {
    // definicia premennych
    int age;                // definicia premennej vek. Hovorim kompilatoru ze vzdy ked vidim age bude to int
    int length, width;      // mozem definicia viac peremennych
    int x,      y   ;       // mozem pouzit kolko kolvek medzier chcem a kdekolvek

    printf("%d\n", age);    // toto je chyba snazim sa vypisat hodnotu premennej ktoru som nikdy neinicializoval hodnota tejto premennej je nepredikovatelna
    
    length = 2;             // toto je inicializacia
    width = 10;
    x, y = 2, 4;            // viem inicializovat aj x premennych naraz

    printf("%d %d %d %d\n", length, width, x, y); // vypisat viem aj x premennych naraz

    int my_height = 187;    // deklarovat vieme kdekolvek v kode ale odporuca sa na zaciatku funkcie (main je funkcia)
    printf("%d\n", my_height);

    return 1;
}