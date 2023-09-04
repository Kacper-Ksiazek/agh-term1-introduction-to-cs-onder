#include <stdio.h>
#include <stdbool.h>

int getTriangleSide(char *sideID, int *longestSide){
    int result;

    printf("Podaj %s: ",sideID);
    scanf_s("%d", &result);

    if(result > *longestSide) *longestSide = result;  
    return result;
}

int main(){
    unsigned int longestSide = 0;

    int a =getTriangleSide("a", &longestSide);
    int b =getTriangleSide("b", &longestSide);
    int c =getTriangleSide("c", &longestSide);

    bool result = (a + b + c) - longestSide > longestSide;

    if(result) printf("Mozna zbudowac trojkat");
    else printf("Nie mozna zbudowac trojkata"); 

    return 0;
}