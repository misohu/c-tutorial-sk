#include <stdio.h>
#include <string.h>

struct Student {
    char name[10];
    int age;
};

void print_menu() {
    printf("'l' for listing students\n");
    printf("'a' for adding students\n");
    printf("'q' for quitting program\n");
    printf("Your option: ");
}

void print_students(Student students[10], int student_count) {
    for (int i = 0; i < student_count; i ++) {
        printf("Student %d\n", i+1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n\n", students[i].age);
    }
}

int add_student(Student students[10], int student_count) {
    Student s;
    printf("Student's Name: ");
    scanf("%s", s.name);
    printf("Student's Age: ");
    scanf("%d", &s.age);
    students[student_count] = s;
    return ++student_count;
}

    int main()
{
    Student students[10];
    int student_count = 0;
    char option;

    while (true) {
        print_menu();
        scanf("%c", &option);
        switch (option)
        {
        case 'l':
            printf("\n*****************************************************");
            printf("\n****************LISTING******************************\n");
            print_students(students, student_count); 
            break;
        
        case 'a':
            printf("\n*****************************************************");
            printf("\n****************ADDING*******************************\n");
            student_count = add_student(students, student_count);
            break;

        default:
            return 0;
            break;
        }
        getchar();
    }
}