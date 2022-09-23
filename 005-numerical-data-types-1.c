#include <stdio.h>

int main() {
    int i;
    unsigned int ui;
    short s;
    unsigned short us;
    long l;
    unsigned long ul;
    char c;
    unsigned char uc;

    c = 127;
    printf("%d\n", c);
    c++; // integer overflow nekonci to ERROROM !!!!
    printf("%d\n", c);

    uc = 255 ;
    printf("%d\n", uc);
    uc++;
    printf("%d\n", uc);

    float f;
    double d;
    long double ld;

    f = 12.2121221221221212121221;
    // printf("%d\n", f); // %d nevieme pouzit s desatinnymi cislami (viac o speciffiers v dalsej casti)
    printf("%g\n", f); // Ked sa prekrocia desatinne miesta zvysok sa oreze
    f = 123456789101112.123;
    printf("%g\n", f); // vsimni si ako sa cislo spracovalo na zaklade moznych desatinnych cisel

    f = 0.00000000000000000000000123; // posuvat ciarku vieme aj opacnym smerom pomocou e-x ak cislo zacina 0
    printf("%g\n", f);

    f = -0.00000000000000000000000123; // tie iste pravidla platia pre zaporne desatinne cisla
    printf("%g\n", f);

    return 1;
}