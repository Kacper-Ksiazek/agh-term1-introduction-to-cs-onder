#include <stdio.h>
#include <math.h>

float wczytajWspolczynnik(char *id){
    float a;
    printf("Podaj wspolczynnik %s: ",id);
    scanf_s("%f", &a);
    return a;
}

float main(){
    float a = wczytajWspolczynnik("a");
    float b = wczytajWspolczynnik("b");
    float c = wczytajWspolczynnik("c");

    float delta = b*b - 4*a*c;
    if(delta>0){
        float root = sqrt(delta);
        printf("Delta jest wieksza od 0\n");
        float x1 = (-b + root) / (2*a);
        float x2 = (-b - root) / (2*a);
        printf("x1: %f\nx2: %f", x1,x2);
    }
    else if(delta == 0){
        printf("Delta rowna 0\n");
        float x1 = (-b) / (2*a);
        printf("x1: %f",x1);
    }
    else {
        printf("Delta ujemna => nie ma rownanie nie ma rozwiazan rzeczywistych");
    }
    // printf("Podany wspolczynnik a: %f", a);

    return 0;
}