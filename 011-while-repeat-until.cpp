#include <stdio.h>
#include <math.h>

int main() {
    int counter = 1;

    while (counter < 10) { // podmienka musi byt v zatvorkach a musi vratit hodnotu ktoru vieme reprezentovat ako bool
        printf("%d\n", counter);
        counter++; // counter++ vieme zavolat priamo z printu. Pamatate si preco?
    }

    // po dokonceni cyklu ma counter hodnotu 10 teraz pojdeme opacne
    while (counter) { // akakolvek numericka hodnota ktora sa nerovna 0 je true
        printf("%d\n", counter--);
    }

    if (-1) {
        printf("This is true too\n"); 
    }

    // telo while cyklu sa nevykona ani raz ak podmienka neplati !!
    int second_counter = 0;
    do {
        printf("%d\n", second_counter);
        second_counter++;
    } while (second_counter < 10); // skuste prepisat 10 za -1 uvidite ze telo cyklu sa vykona aspon raz

    // v podmienkach mozu by akekolvek zlozene podmienky
    int area=0, radius=1;
    while (area < 10 and radius != 10)
    {
        area = M_PI*pow(radius, 2);
        printf("Area is: %d\n", area);
        radius++;
    } // viete preco sa vypisala aj Area 12 ? 
    
    return 1;
}

// DOMACA ULOHA prepiste predchadzajucu ulohu s urcovanim prvocisla pomocou while cyklu.