#include <stdio.h>

#define CONSTANT 1.7e-308

int hexToDec(char c){
    if(c >= '0' && c<= '9') return c - '0';
    if(c >= 'A' && c<='F') return c-'A' + 10;
    return c- 'a' + 10;
}

void byte2bin(int n, int bitsSoFar){
    if(n > 0) byte2bin(n/2, bitsSoFar + 1);
    // Zeby zawsze bylo 8 bitow w bajcie
    if(bitsSoFar< 8 && n == 0){
        while((bitsSoFar++)<8) putchar('0');
    }
    // Zeby nie wyswietlic zera za duzo 
    else if(n!=0) putchar(n%2 + '0');
}

void hex2bin(char *valueInHex, int n){
    putchar(n == 0 ? 'b' : ' ');
    byte2bin(hexToDec(valueInHex[n]) * 16 + hexToDec(valueInHex[n+1]), 0);

    if(n<6) hex2bin(valueInHex,n+2);
}

int main(){
    printf("%.1000lf" , CONSTANT * 5);
    // hex2bin("F1da146c",0);
    //
    return 0;
}