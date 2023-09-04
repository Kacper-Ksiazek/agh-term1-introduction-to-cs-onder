#include <stdio.h>

int convertBinFromIntToDec(int n);

int main(){
    int octan = 403132;
    int decimalCounterpart = convertOctFromIntToDec(octan);

    printf("RESULT: %d",decimalCounterpart);
}

int convertOctFromIntToDec(int n){
    int currentPower = 1;
    int res = 0;

    while(n>0){
        int a = n/10;
        int b = n- (a * 10);
        res += b * currentPower;
        currentPower*=8;
        n = a;    
    }

    return res;
}