#include <stdio.h>

int main() {
    // single character operacie
    int c;
    printf("Zadaj znak: ");
    c = getchar(); // pozor toto neodriadkuje vystup. getchar cita zo standardneho vstupu 
    // nemylit si s getc(stdin) funkcia ktora cita z input streamu akehokolvek
    // POZOR existuje este funkcia getch z conio.h ktora okamzite precita znak zo vstupu bez buffru 
    // POZOR v conio h existuje este getche to iste co getch ale tiez okamzite vrati do stdout

    printf("\nZnak je: "); // musim manualne odriadkovat na prvom znaku 
    putchar(c);
    getchar(); /// ak bezite nasledujuci kod dokopy musite pridat druhy getc na precitanie noveho riadku !!!
    printf("\n");

    // praca s celym riadkom. Mozme nacitat aj cely riadok do retazcovej premennej
    // UISTITE SA ZE PREMEMNNA MA DOSTATTOCNU VELKOST 
    // funkcia gets bola velky omyl a posobila vela problemov "Internetworm"
    char row[100];

    printf("Zadaj riadok: ");
    gets(row); // gets nacita cely string az po znak konca riadku
    printf("Riadok je: ");
    puts(row); // string neobsahuje koniec riadku. ten tam prida funkcia puts. Skuste vypis cez printf("%s", row); a uvidite ze tam ten novy riadok nie je 

    printf("'\n");

    // Co ked chceme citat konkretne datove typy napr desatinne cisla alebo vacsie integery
    // scanf je cesta
    double value;
    printf("Zadaj cislo: ");
    scanf("%lf", &value); // scanf ocakava adressu premenej kde sa nacita hodnota (viac o pointeroch a adresach v nasledujucej casti)
    printf("Cislo je %lf\n", value);

    // DOMACA ULOHA: napiste program ktory nacita meno zo standardneho vstupu nasledne nacita vek zo standardneho vstupu 
    // Nasledne vypise: Ahoj <meno> si/niesi dospely. (v zavislosti od toho ci je vek nad 18)

    // DOMACA ULOHA2: napiste program, ktory nacita meno zo standardneho vstupu a nasledne vypise pismena mena riadok po riadku
}