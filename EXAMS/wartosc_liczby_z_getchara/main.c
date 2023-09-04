#include <stdio.h>

// Napisac funkcje, ktora czyta znakowo z klawiatury (getchar()) liczbe rzeczywista w postaci np. 
// +/- 123.056 i oblicza jej wartosc, znaki liczby moga byc poprzedzone spacjami.

double wartoscZGetchara(){
    int czesc_calkowita=0;
    double licznik=0;
    double mianownik=1;

    char c;

    printf("Podaj stringa: ");
    while((c = getchar()) == ' ' || c == '\n' || c=='\t');

    // Sprawdzamy znak
    int znak=1;
    if(c=='-') znak=-1;
    // Jezeli nie ma na poczatku plusa, to znaczy, ze sie zaczelo od cyfry, 
    // wiec cofamy czytanie stringa o jedna pozycje
    else if(c!='+') ungetc(c,stdin); 
    // Sprawdzamy wszystko przed kropka
    while((c = getchar())<='9' && c>='0' ){
        czesc_calkowita*=10;
        czesc_calkowita+=c - 48;
    }
    // Sprawdzamy ulamek
    if(c == '.'){
        while((c= getchar())<='9' && c>'0'){
            mianownik*=10;
            licznik*=10;
            licznik+=c - 48;
        }
    }
    

    return znak * (czesc_calkowita + licznik / mianownik);
}

int main(){
    printf("%f", wartoscZGetchara());
    //


    return 0;
}