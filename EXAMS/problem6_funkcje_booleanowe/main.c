#include <stdio.h>
#include <stdbool.h>

char samogloskiMale[] = {'a', 'e','i','o','u','y'};
char samogloskiDuze[] = {'A','E','I','O','U','Y'};

int czySamogloska(char c){
    int i = 6;
    for(int i = 0;i<6;i++) {
        if(c == samogloskiMale[i] || c == samogloskiDuze[i]){
            return 1;
        }
    }
    return 0;
}

// Policz samogloski
int main(){
    char slowo[] = "Wydzial Geologii, Geofizyki i Ochrony Srodowiska Akademii Gorniczo-Hutniczej w Krakowie";

    int iloscSamoglosek = 0;
    int i = 0;

    while(slowo[i]) {
        if(czySamogloska(slowo[i])) iloscSamoglosek+=1;
        i++;
    }

    printf("WGGIOS ma w nazwie %d", iloscSamoglosek);
    
    return 0;
}
