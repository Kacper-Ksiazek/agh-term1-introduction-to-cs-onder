#include <stdio.h>

/***
 * @Wejscie:
 * s1- string pierwszy
 * s2- string drugi
 * 
 * @Wyjscie:
 * -1 - jezeli s1 jest wczesniej leksyklanie niz s2
 * 1 - jezeli s1 jest pozniej leksykalnie niz s2
 * 0 - jezeli s1 jest rowny s2
*/
int spradzLeksykalnie(char *s1, char *s2){
    int i=0;
    // Tworzymy zmienne do przechowywania znakow, zeby nie zmodyfikowac wejsciowych danych!!!
    char c1;
    char c2;
    while(s1[i] && s2[i]){
        c1 = s1[i];
        c2 = s2[i];
        // Zamieniamy na male litery, zeby sie dalo porownac
        if(s1[i]>='A' && s1[i]<='Z') c1+=32;
        if(s2[i]>='A' && s2[i]<='Z') c2+=32;

        if(c1 == c2){
            i++;
            continue;
        }
        if(c1<c2) return -1;
        return 1;
    }
    // Nie znamy dlugosci obydwu stringow i tu 
    // zabezpieczamy sie przed tym, ze sa rozne
    if(!s1[i] && s2[i]) return -1; // W s1 skonczyly sie litery, a w s2 sa dalej
    if(!s2[i] && s1[i]) return 1; // W s2 skonczyly sie litery, a s1 sa dalej 

    return 0;
}

int main(){
    printf("%d", spradzLeksykalnie("ABCde", "ABCdd"));
    //
    return 0;
}