#include <stdio.h>

// UWAGA OD PHD:
// W wyrazeniach pytajnikowych warunek musi byc w nawiasie!!!

void dec2hex(int n, int rozmiar){
    if(n<16){
        putchar('0');
        putchar((rozmiar == 0) ? 'x' : 'X');
    }
    else if(n>0) dec2hex(n/16, rozmiar); // Korekta PHD
    
    int resztaZDzielenia = n%16;

    if(resztaZDzielenia <=9) putchar(resztaZDzielenia + 48);
    else putchar((rozmiar == 0) ? (n % 16) + 87 : (n % 16) + 55 );
}

int main(){
    dec2hex(6989,0);

    return 0;
}