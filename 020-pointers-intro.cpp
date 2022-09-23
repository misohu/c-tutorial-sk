#include <stdio.h>

int main() {
    int x = 10;
    printf("%p\n", &x); // reference operator ukazuje aka je adresa premennej, %p je specifier pre pointer

    int *p = &x;  // p je pointer ktory ukazuje na integer a je inicializovany na na adresu premennej x
    printf("%p\n", p); // pointer ma hodnotu adresy premennej x

    // dereferencia pointru
    printf("%d\n", *p); // takto vieme dostat hodnotu ktora sa nachadza na adrese kde ukazuje pointer p
    // pozor int *p je definicia pointru vsade inde *p znamena dereferencia

    x = 12; // aka bude adresa a hodnota pointru p ? 
    printf("pointer %p -> %d\n", p, *p);

    // pointer moze byt na akykolvek datovy typ
    double *d, *t;
    double val = 13.4;
    d = t = &val;

    printf("d -> %p -> %lf\n", d, *d);
    printf("t -> %p -> %lf\n", t, *t);

    // kde ukazuje definovany neinicializovany pointer ? 
    char *c;
    printf("%p\n", c); // niekedy compiler vypise 0x0 co nie je standardne spravanie. Standardne je toto velka chyba.
    // neinicializovany pointer moze odkazovat kdekolvek a je to nedeterministicke

    char *correct_pointer = NULL; // toto je spravna inicializacia nuloveho pointeru 
    printf("%p\n", correct_pointer); 

    // pointer vie aj menit hodnotu na adrese na ktoru ukazuje
    int age = 12;
    int *age_pointer = &age;

    *age_pointer = 15;
    printf("%d\n", *age_pointer);
    printf("%d\n", age);

    // pointer viem neskor ukazovat na nieco ine
    int second_age = 12;
    int *crazy_pointer = &age; 
    printf("%p\n", crazy_pointer);
    crazy_pointer = &second_age;
    printf("%p\n", crazy_pointer);

    // pointer to pointer
    int value = 23; 
    int *pointer, **pointer_to_pointer;

    pointer = &value;
    pointer_to_pointer = &pointer;

    printf("POinter to pointer\n");
    printf("%p\n", &value);
    printf("%p\n", pointer);
    printf("%p\n", *pointer_to_pointer);
}