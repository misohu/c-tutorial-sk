#include <stdio.h>

int custom_sum(int num1, int num2) {
    return num1 + num2;
}

// co ked nechceme nic vratit ale chcem zmenit priamo premennu res z mainu
void custom_sum_pointer(int num1, int num2, int res) {
    res = num1 + num2;
} // toto nebude fungovat lebo do funkcie posielame kopie hodnot premennych

void custom_sum_pointer_better(int num1, int num2, int *res) {
    *res = num1 + num2;
} // toto nebude fungovat lebo do funkcie posielame kopie hodnot premennych

int main() {
    int a = 4, b = 10;
    int res, res2;

    res = custom_sum(a,b);
    printf("%d\n", res);
    custom_sum_pointer(a, b, res2);
    printf("%d\n", res2); // res2 bude mat divnu hodnotu nepredvidate
    custom_sum_pointer_better(a, b, &res2);
    printf("%d\n", res2);
}