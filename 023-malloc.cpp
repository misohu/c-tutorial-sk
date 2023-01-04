#include <stdio.h>
#include <stdlib.h>

int main() {
    // Sometimes we want to dynamically set the size of array 
    // Ide o dynamicke allocovanie pamate. Funkcie su definovane v stdlib.h

    int *arr, *arr2;

    // Funkcia malloc ocokava na vstupe velkost v bytoch kolko pamate ma alokovat
    // Fukcia malloc vracia 
    arr = (int*)malloc(10 * sizeof(int));

    // Malloc nenuluje byty a spravanie je nepredvidatelne

    for (int i = 0; i < 10; i++) {
        printf("%d\n", arr[i]);
    }

    // Funkcia Calloc nastavi vsetky bity na 0 
    arr2 = (int*)calloc(10, sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr2[i]);
    }

    // Nezabudnite uvolnit pamat na konci. Predidete memory leakom

    // Priklad nacitania n cisel. Kde n je nacitane z klavesnice
    int *nums, count;

    printf("Zadajte pocet cisel: ");
    scanf("%d", &count);

    nums = (int*)malloc(count * sizeof(int));

    for (int i = 0; i < count; i++) {
        printf("Zadajce cislo %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < count; i++) {
        printf("%d\n", *(nums + i));
    }

    int size_nums = sizeof(nums)/sizeof(nums[0]);
    printf("Size is %d\n", size_nums);

    // nums[100] = 1000; // this could be dangerous

    nums = (int*)realloc(nums, 100);
    // Na pozadi sa c snazi allokovat nove bloky za uz alokovanymi blokmi. ak tam nie je dost miest C spusti malloc na novom mieste.

    free(nums);
    free(arr);
    free(arr2);

    return 0;
}