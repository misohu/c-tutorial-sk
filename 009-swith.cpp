#include <stdio.h>

int main() {
    int option = 2;

    switch (option) {
        case 1:
            printf("Option 1\n");
            break;
        case 2:
            printf("Option 2\n");
            break;
        case 3:
            printf("Option 3\n");
            break;
        default:
            printf("Undeffined option\n");
    } 

    return 1;
}
// DOMACA ULOHA: Napiste program v ktorom budete mat premenu month s hodnotou od 1 po 12 vratane. 
// Program podla cisla vypise prislusny mesiac. Napr pre 1 Vypise januar pre 12 december.