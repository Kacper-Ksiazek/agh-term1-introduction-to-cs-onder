#include <stdio.h>

// (-1)^n * n / (n - 1)

double jakasZjebanaRekurencja(int n){
    if( n == 0) return 0;
    if (n == 1) return 1;

    double res = (n % 2) == 1 ? -1 : 1;
    res*=n;
    res /= jakasZjebanaRekurencja(n-1);

    printf("Wartosc dla n=%d to : %f\n", n, res);
    return res;
}

int main(){
    
    printf("%f", jakasZjebanaRekurencja(5));


    return 0;
}