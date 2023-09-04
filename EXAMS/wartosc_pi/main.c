#include <stdio.h>

double PI (){
    double eps = 0.000000000001;
    double poprzednie_przyblizenie = 0; // zerowy wyraz szeregu (podstawiamy n=0)
    double nowe_przyblizenie = 1; // pierwszy wyraz szeregu (podstawiamy n=1)
    int i=1;

    // Petla leci tak dlugo dopoki roznica przyblizen nie bedzie mniejsza niz
    // 10^(-12)
    while( (nowe_przyblizenie - poprzednie_przyblizenie) > eps  ){
        poprzednie_przyblizenie = nowe_przyblizenie;
        nowe_przyblizenie *= (double)( 4*i*i )/( (2*i-1) * (2*i+1) );
        i++;
    }

    return nowe_przyblizenie*2;
}



int main(){
    // PI();
    printf("%lf", PI());
    
    return 0;
}