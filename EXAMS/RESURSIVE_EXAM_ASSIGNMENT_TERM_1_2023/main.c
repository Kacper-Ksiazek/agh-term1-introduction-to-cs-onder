#include <stdio.h>

//
void moje(int n){
    putchar((n%2) + '0');
    n/=2;
    if(n!=0) moje(n);
}

void kierunkowe(int liczba){
    putchar('0' + liczba %2);
    if(liczba>=2) kierunkowe(liczba>>1);
}

// Egzamin 27.01.2023- tak bylo na 1.8 / 2pkt

double funkcja(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;

    double sign = (n % 2 ) == 1?-1:1;
    return sign / n + funkcja(n-1);
}


int main(){
    printf("Moje: ");
    moje(49);
    printf("\nZ konfy: ");
    kierunkowe(49);
    // printf("%f", funkcja(3));
    return 0;
}