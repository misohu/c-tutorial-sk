#include <stdio.h>

// niekedy funkcia nemusi mat return vtedy pouzijeme void namiesto int alebo cohokolvek
int sum_two_numbers(int num1, int num2) {
    int result = num1 + num2;
    return result;
}

double average_array(double arr[3], int arr_length) {
    double sum, result;
    for (int i = 0; i < arr_length; i++) {
        sum += arr[i];
    }
    return sum/arr_length;
}

char convert_character(char character) {
    char offset = 'a' - 'A';
    if (character >= 'a' && character <= 'z') {
        return character - offset;
    }
    if (character >= 'A' && character <= 'Z') {
        return character + offset;
    }
    return '0';
}

int main() {
    // run this example in the debugger
    int x = 3, y = 5;
    int res = sum_two_numbers(x, y);
    printf("%d\n", res);

    double arr[] = {1., 2., 3.}; // Takto inicializujeme pole celych cisel s nulovym desatinnym rozvojom
    double result = average_array(arr, 3);
    printf("%f\n", result);

    // DOMACA ULOHA napis funkciu ktora prijme char hodnotu a ak je to male pismeno tak vrati velke pimeno
    // ak je to velke pismeno vrati male pismeno a ak je to akykolvek iny znak vrati 0
    // vymysli vhodne meno pre funkciu a argumenty
    // nasledne pouzi tuto funkciu v cykle kde pomocou nej zmenis znaky stringu "Michal Hucko"
    char name[] = "Michal Hucko";
    int i = 0;
    while (name[i] != '\0') {
        name[i] = convert_character(name[i]);
        i++;
    }
    printf("%s\n", name);
    return 1;
}