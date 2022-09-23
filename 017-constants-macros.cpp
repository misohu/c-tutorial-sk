#include <stdio.h>

// Tato konstanta je vyhodnotena preprocessorom pred kompilaciou (preprocessor directive)
// Pri define konstante neusim specifikovat typ
// Toto vie setrit miesto a zrychlit kompilaciu 
#define X 30
#define NEWLINE '\n'
// za define nepiseme bodkociarku

// Toto je konstanta ktora je vyhodnotena pri kompilacii
// Musi mat typ. Typ moze byt niekedy vyhoda
const int Y = 40;

// vseobecne preferujeme const pre define 
// avsak define Makro vie prijat parametre
#define sumation(x,y) x+y // toto sa vola function-like macro 

int main() {
    printf("%d, %d, %c", X, Y, NEWLINE);
    printf("%d, %d, %d\n", X, Y, NEWLINE); // NEWLINE sa sprava ako cele cislo

    printf("%d\n", sumation(10, 22));

    #undef X
    #define X 1000
    printf("%d\n", X);
    return 1;
}