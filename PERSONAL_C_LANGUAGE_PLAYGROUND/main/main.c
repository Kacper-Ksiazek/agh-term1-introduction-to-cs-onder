#include <stdio.h>

#define SZUKANA 10
#define SIZE 8

int main(){
    //
    int tab[] = {6,3,1,7,3,2,10,20};
    //
    int WYNIK = 1;
    int t; 
    int indexMin;

    for(int i= 0; i< SIZE - 1;i++){
        indexMin = i;
        for(int j = i+1; j <SIZE;j++){
            if(tab[j] < tab[indexMin]) indexMin = j;
        }
        if(i!=indexMin){
            t = tab[indexMin];
            tab[indexMin] = tab[i];
            tab[i] = t;
            // if(tab[i] == SZUKANA){
            //     WYNIK = i+1;
            //     break;
            // }
        }
    }

    printf("Posortowana: ");
    printf("[");

    int i = SIZE /2;
    while(1){
        if(SZUKANA == tab[i]){
            WYNIK = i +1;
            break;
        }
        if(tab[i] < SZUKANA){
            i += i /2;
            continue;
        }
        if(tab[i] > SZUKANA){
            i -= i/2;
            continue;
        }
    }

   
    printf("\nPozycja szukanej liczby to: %d", WYNIK);

    return 0;
}