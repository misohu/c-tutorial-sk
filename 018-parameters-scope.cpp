#include <stdio.h>

const int var = 10;

void scope_function() {
    int var = 22; 
    printf("%d\n", var);
}

int main() {
    int var = 11;

    printf("%d\n", var);

    // int var = 12; // nemozes predefinovat premennu 

    if (true) {
        int var = 12;
        printf("%d\n", var); // ale mozes ju predefunovat v novom scope ako napriklad if
    }

    for (int var = 1; var < 2; var++) { // alebo vo for cykle, uz samotna podmienkova cast for cyklu je novy scope
        printf("%d\n", var);
    }

    { // novy scope moze vytvorit len tak so zatvorkami (aj ked sa to malo kedy pouziva)
        int var = 14;
        printf("%d\n", var);
    }
    
    scope_function();
}