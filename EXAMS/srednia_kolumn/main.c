#include <stdio.h>
#include <stdlib.h>


double *sredniaKolumn(int iloscWierszy, int iloscKolumn, int tab[iloscWierszy][iloscKolumn]){
    double *wynik = malloc(sizeof(double) * iloscKolumn);
    
    for(int indexKolumny =0 ; indexKolumny<iloscKolumn ; indexKolumny++){
        wynik[indexKolumny]=0;
        for(int indexWiersza = 0;indexWiersza<iloscWierszy;indexWiersza++){
            wynik[indexKolumny]+= tab[indexWiersza][indexKolumny];
        }
        wynik[indexKolumny]/=iloscWierszy;
    }

    return wynik;
}

void print2DArray(int iloscWierszy, int iloscKolumn, int tab[iloscWierszy][iloscKolumn]){
    printf("[\n");
    for(int indexWiersza = 0;indexWiersza<iloscWierszy;indexWiersza++){
        printf("  [");
        for(int indexKolumny =0 ; indexKolumny<iloscKolumn ; indexKolumny++){
            printf("%d%s", tab[indexWiersza][indexKolumny], indexKolumny != iloscKolumn -1 ? ", " : "");
        }
        printf("],\n");
    }
    printf("]\n");
}

void printArray(int iloscElementow, double tab[iloscElementow]){
    printf("[");
    for(int i= 0;i<iloscElementow;i++){
        printf("%f%s", tab[i], i != iloscElementow -1 ? ", " : "");
    }
    printf("]");
}

int main(){
    int tab[4][4] = {
        {3,2,3,5},
        {3,2,3,5},
        {3,2,3,5},
        {3,2,3,5},
    };

    print2DArray(4,4,tab);
    //
    double *wynik = sredniaKolumn(4,4,tab);
    printArray(4,wynik);

    return 0;
}