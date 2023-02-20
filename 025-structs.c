#include <stdio.h>
#include <string.h>

struct person {
    int age;
    char name[20];
};

int main() {
    struct person p1, p3;
    printf("Name: ");
    scanf("%s", p1.name);
    printf("Age: ");
    scanf("%d", &p1.age);

    struct person p2 = {24, "Andrej"};

    strcpy(p3.name, "Eva");
    p3.age = 24;

    printf("\nFirst Person is\nName: %s\nage: %d\n", p1.name, p1.age);
    printf("\nSecond Person is\nName: %s\nage: %d\n", p2.name, p2.age);
    printf("\nSecond Person is\nName: %s\nage: %d\n", p3.name, p3.age);
    return 0;
}