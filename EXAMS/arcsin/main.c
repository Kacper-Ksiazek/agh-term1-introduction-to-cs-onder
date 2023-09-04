#include <stdio.h>

double przyblizenie_arcsin(double x, double e){
    if(x>=1 || x<=-1) return 1; // nie wiem ocb z tym 1.0^308

    int n=1;
    double podstawa = x;
    double wynik = x;
    // poprzedni wynik
    double delta = 1; // cokolwiek tak naprawde wiekszego od 1
    //
    // obliczamy delta wynik
    while((delta>=e || delta <=-e) && n<10){
        printf("%.20lf\n", delta);
        // Wyprowadzilismy na kartce wzor na n'ty wyraz ciagu rekurencyjnego
        podstawa = (podstawa * (2*n -1)*(2*n) * x * x) / (4 * n * n);
        delta= podstawa / (2*n + 1);
        wynik+= delta;
        n++;
    }

    return wynik;
}

int main(){
    printf("%.20lf", przyblizenie_arcsin(0.3,0.000000000001));
    //
    return 0;
}