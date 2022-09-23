#include <stdio.h>

int main() {
    int my_age;

    printf("%d\n", my_age);

    my_age = 26;

    printf("%d\n", my_age);

    int your_age = 29; // antipattern

    printf("%d\n", your_age);

    int our_age = my_age + your_age;

    printf("%d\n", our_age);
}

// DOMACA ULOHA oddebugujte poslednu domacu ulohu ktora ratal obsah z vysky a sirky