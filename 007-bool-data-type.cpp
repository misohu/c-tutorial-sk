#include <stdio.h>

int main() {
    // TIP: Vsimnite si ako som zmenil koncouku suboru z .c na .cpp skuste spustit program s koncoukou .c
    bool is_old = false; // bool je datovy typ v c++ nie v c https://stackoverflow.com/questions/10636120/check-if-bool-is-defined-in-mixed-c-c
    int age;
    long lx;
    char cx;

    is_old = true;
    printf("%d\n", is_old); // Ked chcem vypisat bool musim pouzit %d vtedy sa mi bool vypise ako 1 pre true a 0 pre false
    printf("%d\n", false);

    printf("%ld\n", sizeof(is_old)); // pretoze sizeof funkcia vracia hodnotu typu unsigned long
    printf("%ld\n", sizeof(age));
    printf("%ld\n", sizeof(lx));
    printf("%ld\n", sizeof(cx)); // Preco je char 1 byte a moze mat 255 hodnot zatial co bool je tiz jeden byte a moze mat 2 hodnoty (kvoli praic s pamatou je efektivnejsie ukladat bool ako byte)

    double dx;
    printf("%ld\n", sizeof(dx));

    // int je integralny datovy typ pre jednoduchost rozmyslajme nad tym ze sa sprava v niektorych pripadoch ako cele cislo
    bool res = true + true; // hoci je true == 1 nevieme ho overflownut 1 + 1 pre bool bude vzdy 1
    printf("%d\n", res);
    res = false + false; // false == 0 preto 0 + 0 == 0
    printf("%d\n", res);

    // POZOR vsetko co co neni 0 je v skutocnosti TRUE ale o tom v dalsej casti
    return 1;
}