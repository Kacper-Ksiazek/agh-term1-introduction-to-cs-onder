#include <stdio.h>
#include <math.h>

int convertBinFromIntToDec(int n);

int main(){
    int binary = 10101001;
    int decimalCounterpart = convertBinFromIntToDec(binary);

    printf("RESULT: %d",decimalCounterpart);
}

int convertBinFromIntToDec(int n){
    int res = 0;
    int currentPower = 1;

    while(n>0){
        int a = n / 10;
        int b = a * 10;
        b = n - b;
        res+= b * currentPower;
        n = a;
        currentPower *= 2;
    }

    return res;
}
