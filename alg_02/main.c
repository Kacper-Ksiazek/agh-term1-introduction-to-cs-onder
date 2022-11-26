#include <stdio.h>

/**
 * A function with the purpose of loading a number from user.
*/
int loadNumber(char variableIndex[]){
    int t;
    printf("Enter %s: ",variableIndex);
    scanf_s("%d",&t);
    printf("\n");
    return t;
}



// 2.	Algorytm dzielenia z resztą dwóch liczb całkowitych (nieujemnej przez dodatnią) przy pomocy odejmowania
void main(){
    int a = loadNumber("a");
    int b = loadNumber("b");

    int res = a;
    int q = 0;

    while(res>b){
        q++;
        res = res - b;
    }
    

    printf("%d / %d = %d + %d",a,b,q,res);
}