#include <stdio.h>

int main() {
    // stringy su len polia tvorene char znakmi
    // kazdy string je zakonceny specialnym znakom \0
    // Nevravl si ze char je vlastne cislo
    // je to specialne cislo kde kazde cislo je spojene s danym znakom z ASCII tabulky
    // https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html
    int i;
    char my_name[] = "Miso";

    for (i = 0; i < 5; i++) {
        printf("%d -> %c\n", i, my_name[i]); // %c znamena ze chcem vypisat char ako prislusny znak 
    }
    printf("\n");

    // ked chceme mozme a pozriet na ascii hodnotu znaku
    for (i = 0; i < 5; i++) {
        printf("%c -> %d\n", my_name[i], my_name[i]); // raz char vypisem ako cislo raz ako znak
    }

    // pomocou stringu pristupujeme k znaku tak isto ako v poli 
    my_name[0] = 'm'; // pozor na uvodzovky v jednoduchych uvodzovkach specifikujem znaky ale v dvojitych specifikujem cele stringy

    printf("%s\n", my_name); // Takto vieme vypisat cely string 

    // Definicia stringu ako sady znakov
    char my_wife[100] = { 'K', 'a', 't', 'k', 'a' }; // zbytocne som deklaroval prilis velke pole znakov
    printf("%s\n", my_wife);

    // DOMACA napiste kod ktory premeni male pismna na velke v retazci z premennej name. Nezabudnite premenu vypisat na konci
    // Pomocka: musite pouzit asi tabulku a podmienku v cykle
    // uloha je pokrocila
    char name[] = "Michal";
    char offset = 'a' - 'A';

    for (int i =0; i<6; i++) {
        if (name[i] < 123 && name[i] > 96) {
            name[i] -= offset;
        }
    }
    printf("%s\n", name);


    // DOMACA 2 napiste ten isty program ale v tomto pripade sa male pismena vymenia za velke a velke za male
    char name2[] = "abcdezABCDEZ";
    char offset2 = 'a' - 'A';

    for (int i =0; i<13; i++) {
        if (name2[i] <= 'z' && name2[i] >= 'a')
        {
            name2[i] -= offset2;
        }
        else if (name2[i] <= 'Z' && name2[i] >= 'A')
        {
            name2[i] += offset2;
        }
    }
    printf("%s\n", name2);

    return 1;
}