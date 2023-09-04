#include <stdio.h>

double wartosc_z_chara(){
    char c;

    int czesc_calkowita=0;
    int mianownik=1;
    int licznik=0;

    while((c = getchar()) ==' ' || c == '\n' || c =='\t');

    int znak = c == '-' ? -1 : 1;
    if(znak!='-' && znak !='+') ungetc(c,stdin);

    while((c = getchar()) >= '0' && c<= '9') {
        czesc_calkowita= czesc_calkowita * 10 + (c - '0');
    }

    if(c == '.'){
        while((c = getchar()) >='0' && c<= '9'){
            mianownik*=10;
            licznik = licznik * 10 + (c - '0');
        }
    }

    return znak * (czesc_calkowita + (double)licznik/mianownik);
}

int main(){
    printf("%lf", wartosc_z_chara());
    // sprawdz_czy_identyfikator("while");
    //
    return 0;
}