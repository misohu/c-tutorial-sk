#include <stdio.h>

int main() {
    int my_age = 26; // REMINDER: snake_case pre viacslovne premenne

    // If podmienka ma podmienkovu cast vzdy v zatvorkach
    // if podmienka moze a nemusi mat else block ktory sa vykona ked podmienka neplati
    // telo podmienky alebo else blocku moze mat aj viac riadkov
    // Vsimnite si ako somotvaraciu zatvorku dal na ten isty riadok ako podmienka (alebo else), niektori ludia to davaju na novy riadok
    if (my_age < 30) {
        printf("You are young!\n");
    } else {
        printf("You are notyoung!\n");
    }

    // Else blok je nepovinny (ak podmienka neplati nevykona sa nic)
    int number = 101;
    if (number % 10 != 0) {
        printf("Cislo nie je delitelne 10timi. "); // teraz sa nevypise novy riadok !!!
        printf("Zvysok po deleni je %d\n", number % 10);
    }

    // Ak ma podmienka alebo else blok len jeden riadok nemusime specifikovat zatvorky
    // POZOR: takyto kod je menej citatelny
    if (my_age < 30)
        printf("You are young!\n");
    else
        printf("You are notyoung!\n");

    // Podmienky vieme aj retazit 
    int number_of_rooms = 1;
    if (number_of_rooms == 1) { // ked porovnavam rovnost pouzivam == nie = 
        printf("Jednoizbak\n");
    } else if (number_of_rooms == 2) {
        printf("Dvojizbak\n");
    } else if (number_of_rooms > 2) { 
        printf("Viacizbak\n");
    } else {
        printf("Pivnica\n");
    } // kedze su tam jednoriakdkove tela nemuseli by sme pouzit zatvorky

    // Kombinovanie podmienok 
    int num = 100;
    if (num > 50 && num % 2 == 0) {
        printf("Parne a mensie ako 100 \n");
    }
    else {
        // Co vieme povedat v tomto else ?
    }

    // cislo neni z intervalu <110; 150)
    if (num < 110 || num >= 150 ) { // mozme to aj znegovat ale pozor podmienka vzdy mus byt v zatvorke
        printf("cislo neni z intervalu <110; 150)\n");
    } 

    // DOMACA ULOHA
    // Napis program ktory vyhodnoti ci osoba s vekom v premennej age je dospela (vypise osoba je dospela alebo nie je dospela)
    int some_age = 19;
    if (some_age < 18) {
        printf("Osoba nie je dospela\n");
    } else {
        printf("Osoba je dospela\n");
    }
}