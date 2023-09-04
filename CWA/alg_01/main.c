#include<stdlib.h>
#include<stdio.h>

int loadNumber(char variableIndex[]){
    int t;
    printf("Enter %s: ",variableIndex);
    scanf_s("%d",&t);
    printf("\n");
    return t;
}

// 1.	Algorytm mnożenia dwóch liczb nieujemnych całkowitych przy pomocy dodawania

void main(){
    int a = loadNumber("a");
    int b = loadNumber("b");
    int res = 0;

    for(int i=0;i<b;i++) res = res +a;    

    printf("%d * %d = %d",a,b,res);
}