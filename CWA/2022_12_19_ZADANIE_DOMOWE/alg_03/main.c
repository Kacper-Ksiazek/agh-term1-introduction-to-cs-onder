#include <stdio.h>

// 3.	Zsumować 1000 kolejnych liczb nieparzystych zaczynając od 7 (ogólnie zsumować N kolejnych liczb nieparzystych zaczynając od K)
int sumOnlyOddNumbers(const int beginWith, const int amount){
    int result= 0;
    int a = beginWith;
    
    for(int i=0;i<amount;i++){
        result+=a;
        a+=2;
    }
    return result;
}

int main(){
    int expectation = sumOnlyOddNumbers(7,1000);
    printf("Wynik: %d", expectation);
    
    return 0;
}