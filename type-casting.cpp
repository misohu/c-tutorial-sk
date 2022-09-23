#include <stdio.h>

int main() {
    int val1 = 10, val_int = 11;
    double val_double = 5.;
    int result_int;
    double result_double;

    // implicitne castovanie integer sa sprava ako double 
    result_int = val1/val_double;
    result_double = val1/val_double; // tu to nie je uplne jasne pre citatela 2 typy a operacia medzi nimi zmenia typ vysledku

    printf("%d\n", result_int); // toto je v pohode spravnie
    printf("%lf\n", result_double); // toto je v pohode spravnie

    result_int = val1/val_int;
    result_double = val1/val_double;

    printf("%d\n", result_int);     // toto je v pohode spravnie
    printf("%lf\n", result_double); // toto je v pohode spravnie

    val_double = val_int;
    printf("%lf\n", val_double);

    /// explicitne castovanie
    val_double = (double)val_int; // pomocou zatvoriek mozme povedat compilatoru aby precastoval hodnotu jedneho typu na iny typ
    printf("%lf\n", val_double);
}