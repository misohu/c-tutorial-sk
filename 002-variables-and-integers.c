#include <stdio.h>

int main() {
    // TIP: na nazvy premennych pouzivame deskriptivne a hlavne Anglicke nazvy!!!
    // TIP: ak je nazov tvoreny viaceymi slovami pouzivame snake_case ( kazdne slovo je oddelene podtrznikom)
    int age = 26;
    int num = 5;
    int number_of_rooms = 3;
    
    printf("%d\n", age); // %d je speciffier pre integerove hodnoty \n pouzivame na odriadkovanie vystupu (viac o stringoch neskor)
    // print(age); /// ked %d nespecifikujem dostanem chybu
    printf("%d\n", age*num);
    return 1;
}

// Domaca napiste program v ktorom specifikujete premennu vyska a sirka (pouzite spravne anglicke nazvy) a program vypise na obrazovku obsah plochy s danou vyskou a sirkou.