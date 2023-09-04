#include <stdio.h>
#include <stdlib.h>

int n = 13;
int a[13] = {1,3,4,5,-10,-5,3,-20,10,30,40,50,60};

int main(){
    int ostatniElement = a[0];
    int naj = 0; // dlugosc najwiekszego podciagu do tej pory
    int obecny = 1; // dlugosc obecnego niemalejacego podciagu

    for(int i =1;i<n;i++){
        if(a[i] >= ostatniElement){
            obecny+=1;
        }
        else{
            if(obecny>naj) naj = obecny;
            obecny = 1;
        }
        ostatniElement = a[i];
   }
    if(obecny>naj) naj = obecny;

   printf("%d", naj);
}


