#include <stdio.h>
#include <stdlib.h>

int loadNumber(char *id){
    int res;
    printf("Podaj %s: ",id);
    scanf_s("%d",&res);
    
    return res;
}

int main(){
    int x = loadNumber("wartosc argumentu x");
    int n = loadNumber("stopien wielomianu");

    int result = 0;
    printf("\n");

    for(int i=n;i>=0;i--){
        int a;
        printf("Podaj wartosc przy x^%d: ", i);
        scanf_s("%d", &a);
        result*=x;
        result+=a;
    }

    printf("--------------------------------\n");
    printf("Wartosc takiego wielominau to: %d", result);
    printf("\n--------------------------------");

    return 0;
}