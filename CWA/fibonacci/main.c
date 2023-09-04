#include <stdio.h>


int fibo(int n);


int main(){
    printf("%d", fibo(7));    
    // [0,1,2,3,4,5,6,7]
    // [0,1,1,2,3,5,8,13]
    return 0;
}

int fibo(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    
    int latest = 1;
    int penultimate = 0;    
    int t;
    
    while(--n!=0){
        int t = latest;
        latest = latest + penultimate;
        penultimate = t;
    }

    return latest;
}
