#include <stdio.h>

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

int main(){
    int a = 5;
    int b = -10;
    int c = 1;

    if(a > b) swap(&a, &b);
    if(b > c) swap(&c, &b);
    if(a > c) swap(&a, &c);
    

    printf("%d,%d,%d",a,b,c);
    return 0;
}