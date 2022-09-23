#include <stdio.h>

int main() {
    // polia su zoskupenia prvkov rovnakeho typu
    int ages[5] = {13, 15, 18, 10, 23}; // definicia pola a inicializacia. Staticke pole musi mat vzdy definovany typ a velkost
    // toto pole dokaze prijat 5 prvkov typu integer s hodnotami hore

    printf("%d\n", ages[0]); //pristup k prvemu prvku pola cez []
    printf("%d\n", ages[2]); // pristup k tretiemu prvku pola cez []

    // pole je indexovane od nuly. to znamena ze k prvkom pristupujeme v poradi od nuly
    // pole nevieme vypisat ako celok. musime pouzit cyklus !!!
    for (int i = 0; i < 5; i++) {
        printf("Index %d -> hodnota %d\n", i, ages[i]);
    } // POZOR nikdy nepristupujde k prvku ktory nebol deklarovany (prepis 5 za 6)
    // Pristupujeme do neznamej pamate a spravanie zalezi na kompilatore. Niekedy mozme poskodit pamat
    printf("\n");

    // Pole mozme naplnit aj v cykle
    int powers[10]; // definoval som 10 prvkove pole
    for (int i=0; i< 10; i++) { // musim  znovu definovat typ i lebo som to urobil hore nad tym (riadok 13) 
        powers[i] = i * i;  // hodnota je pozicia prvku v poli na druhu
    }
    printf("\n");

    // teraz vypis pola
    for (int i = 0; i < 10; i++){
        printf("Index %d -> hodnota %d\n", i, powers[i]);
    }
    printf("\n");

    // syntactic sugar 
    // ak inicializujeme pole pri definiccii (tak ako som to spravil v prvom priklae), tak mozme velkost pola vynechat
    double doubles[] = {.02, 1.4, 2.4 }; // ak cislo s desatinnym rozvojom zacina 0 mozem ju vynechat 
    for (int i = 0; i < 3; i++){
        printf("Index %d -> hodnota %f\n", i, doubles[i]); // %f je alternativny specifikator pree cisla s desatinnym rozvojom (viac v neskorsej casti)
    }
    printf("\n");

    // Zmena prvku poli 
    // pomocou pristupoveho indexu vieme zmenit prvok v poli
    int arr[] = {1, 2, -2, 3};
    for (int i = 0; i < 4; i++){
        printf("Index %d -> hodnota %d\n", i, arr[i]);
    }
    printf("\n");
    arr[2] = 5; // zmena prvku na tretej pozicii
    for (int i = 0; i < 4; i++) {
        printf("Index %d -> hodnota %d\n", i, arr[i]);
    }
    printf("\n");

    // DOMACA Napiste program ktoremu vy zadate 4 prvkove pole typu double a on vam vypise priemer tychto prvkov
    double doubles_example[] = {.02, 1.4, 2.4, 6.89}; // ak cislo s desatinnym rozvojom zacina 0 mozem ju vynechat
    double sum, result;

    for (int i = 0; i < 4; i++) {
        sum += doubles_example[i];
    }
    result = sum / 4.0; // musi to byt 4.0 aby bolo rozoznane ako double
    printf("Average is %f\n", result);
}