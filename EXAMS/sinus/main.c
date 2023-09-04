#include <stdio.h>


#define PI 3.1415 // Ewentualnie

double sinusPrzyblizenie(double x, double epsilon){
    // Jakby trzeba bylo zamienic ze stopni na radiany
    // double katWRadianach = x * PI / 180; 

    double wynik = x; 
    double wyrazCiagu = x;
    int n = 2; // Zaczynamy od 2, bo dla n=1 jest policzone juz

    while(wyrazCiagu>= epsilon || wyrazCiagu<=-epsilon){
        // Trzeba policzyc matematycznie ILORAZ CIAGU GEOMETRYCZNEGO
        wyrazCiagu*= -x *x / ((n*2-1) * (n*2-2)); // to ten iloraz
        wynik+=wyrazCiagu;
        n++;
    }

    return wynik;
}

double sinZDysku( double x, double eps ){
    double t = x; // To jest moj wyrazCiagu
    double res = x; // to jest moj wynik
    double i = 3; // to jest moje n
    while ( t>= eps || t<=-eps )
    {
        t *= (-x * x) / (i*(i - 1));
        res += t;
        i += 2;
    }
    return res;
}

int main(){
    printf("%lf", sinusPrzyblizenie(5,0.04));
    printf("%lf", sinusPrzyblizenie(5,0.04));
    
    return 0;
}