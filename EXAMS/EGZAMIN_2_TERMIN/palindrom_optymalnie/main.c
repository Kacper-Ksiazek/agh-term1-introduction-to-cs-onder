#include <stdio.h>


int palindrom(char str[]){
    int iloscLiter = 0;
    while(str[iloscLiter]) iloscLiter++;

    // Korekta:
    if(iloscLiter == 0) return 0;
    if(iloscLiter == 1) return 1;
    //
    int i = 0;
    int j = iloscLiter-1;
    
    char c1, c2;

    while(i<j){
        // Cala zmiana indexow odbywa sie tutaj
        while((c1 = str[i++]) == ' '); 
        while((c2 = str[j--]) == ' ');

        c1 = (c1 >= 'A' && c1 <='Z') ? c1 + 32 : c1;
        c2 = (c2 >= 'A' && c2 <='Z') ? c2 + 32 : c2;
    
        if(c1 != c2) return 0;
    }

    return 1;
}

int main(){
    char str[] = "     Akta generala ma mala Renegatka";
    printf("%d", palindrom(str));
    return 0;
}