#include <stdio.h>
#include <math.h>

int main() {
    int ix = 5, iy =3;
    float fx = 5, fy = 3;

    printf("%d\n", ix / iy);
    printf("%g\n", fx / fy);

    printf("%d\n", ix % iy); // Modulo operator vracia  zvysok po deleni
    // printf("%g\n", fx % fy);  // Modulo vieme pouzit iba s celociselnymi datovimi typmi

    // kniznica math.h
    double dx = 10.6, dy = 11.2;
    printf("%g\n", round(dx)); // toto je priklad retazenia funkcie funkcia round sa vyhodnoti ako prva a jej vystup sa posunie na vstup do funkcie prind
    printf("%g\n", round(dy)); // zaokruhlenie cila

    double result = round(dx); 
    printf("%g\n", result); // toto je to iste co hore len s pouzitim pomocnej premennje 

    long double ldx = 123.53;
    printf("%g\n", floor(ldx)); // toto je zaokruhlenie na dol na najblizsie cele cislo PODLAHA JE DOLE
    printf("%g\n", ceil(ldx));  // toto je zaokruhlenie na hor na najblizsie cele cislo STROP JE HORE
    printf("%g\n", trunc(ldx));   // tato funkcia extrahuje desatinne cisla z cisla
    printf("%g\n", sqrt(ldx)); // toto je odmocnina square root
    printf("%g\n", sin(ldx)); // toto je sinus
    printf("%g\n", cos(ldx)); // toto je sinus
    printf("%g\n", pow(2, 3)); // toto je 2 na tretiu
    printf("%g\n", log(100)); // logaritmus prirodzeny 
}