#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int array[3] = {1, 2, 0}; // toto je staticky pointer alebo premenna a je typu pola o velkosti 10 integerov
    int value = 3;

    ptr = array;

    for (int i = 0; i < 3; i++)
    {
        printf("ptr address is %p array address %p and the value is %d and array value is %d \n", ptr + i, &array[i], *(ptr + i), array[i]);
    }

    // pointer je cislo to znamena ze k nemu mozme veci pripocitavat a odpocitavat

    char *ptr2;
    int value2 = 0;
    ptr2 = (char *)&value2;
    ptr2++;
    *ptr2 = 255;

    printf("%b\n", value2);
    return 0;
}