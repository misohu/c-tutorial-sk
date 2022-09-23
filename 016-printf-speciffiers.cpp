#include <stdio.h>

int main() {
    int i = 10;
    unsigned int ui = 10;
    short s = 10;
    unsigned short us = 10;
    long l = 10;
    unsigned long ul = 10;
    char c = 110;
    unsigned char uc = 10;
    float f = 10;
    double d = 10;
    long double ld = 10;
    char str[] = "10";


    printf("Character %%c -> %c\n", c);
    printf("Signed Integer %%d -> %d\n", i); // alebo short, long, char hodnoty
    printf("Scientific notations %%e -> %e\n", d); // alebo hoty s akymkolvek desatinnym rozvojom
    printf("Scientific notations %%g -> %g\n", d); // alebo hoty s akymkolvek desatinnym rozvojom
    printf("Floats %%f -> %f\n", f);
    printf("Long Double %%Lf -> %Lf\n", ld);
    printf("Octal %%o -> %o\n", i);
    printf("Hexadecimal %%x -> %x\n", i);
    printf("String %%s -> %s\n", str);

    printf("\n");

    // . specifikuje desatinny rozvoj kolko znakov ma mat 
    // cislo pred nou specifikuje zarovnanie z lava (-) alebo prava.
    printf("%-20.6f value\n", 10.); // left alignt 20 znakov spolu s obsahom
    printf("%20.6f value\n", 100.); // right alignt 20 znakov spolu s obsahom
    printf("%-20.6f value\n", 1000.); // . specifikuje pocet desatinnych miest

    printf("\n");

    printf("%16s %5d %5.2f 0x%08X\n", "hello", 42, 3.14, 0xABAB);
    printf("%16s %5d %5.2f 0x%08X\n", "Michal Hucko", 1134, 3.1434, 0xABAB);
    printf("%16s %5d %5.2f 0x%08X\n", "Katarina Huckova", 4, 3.1, 0xABAB);
}