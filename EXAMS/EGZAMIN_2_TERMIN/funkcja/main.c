#include <stdio.h>

double funkcja(double x, double e){
    double wyraz = 5*x*x;
    double wynik = wyraz;

    int n =3;

    while(wyraz >= e || wyraz <=-e){
        // Dla n=7 przyblizenie to 0, wiec skipujemy obliczenia
        if(n!=7){
            // Dla n=8 mamy 0 w mianowniku, wiec musimy matematycznie obliczyc wyraz
            if(n == 8){           // 1   2   3   4   5   6   7   8
                wyraz = -(4 / 315) * x * x * x * x * x * x * x * x;
                wynik+= wyraz;
            }else {
                wyraz*= wyraz * (2 * x * (7 - n)) / ((n-1) * (8-n));
                if(n>8 && wyraz > 0) wyraz*=-1; // Dla n>8 wyrazy sa zawsze ujemne
                wynik+= wyraz;
            }
        }
        n++;
    }

    return 3 * x + wynik;
}

int main(){
    //
    return 0;
}