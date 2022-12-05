#include <stdio.h>

int convertDecimalToBinary(int n){
    int result = 0;
    int a,b;
    int currentPower = 1;
    int i=0;
    printf("\nDzielimy liczby: %d\n", n);
    while(n>0){
        a = n/2;
        b = n - (a*2);
        // printf("%d. Po dzieleniu przez 2 mamy: %d i reszty %d, wiec  do wyniku dodajemy %d\n", ++i,a,b,b* currentPower );
        printf("%d. %d | %d     => do wyniku dodajemy %d\n", ++i,a,b,b* currentPower );
        result = result + b * currentPower;
        currentPower*=10;
        n = a;
    }
    printf("\n");

    return result;
}

int main(){
    int n = 156;

    printf("Binary counterpart is: %d",convertDecimalToBinary(n)); //

    return 0;
}
