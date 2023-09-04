#include <stdio.h>


int czy_identyfikator(char s[]){
    char c = s[0];  // Zeby nie odwolywac sie milion razy 
                    // przez s[i], bo to jest zle pod wzgledem optymalizacji
    if(
        (c >='A') && (c <='Z') || // sprawdzamy, czy pierwszy znak to duza litera
        (c >='a' && (c <='z')) || // sprawdzamy, czy pierwszy znak to mala litera
        c == '_'                  // sprawdzamy, czy pierwszy znak to podloga
     ){
        // Sprawdzamy wszystkie nastepne litery
        int i = 0;
        while(c=s[i++]){
            if(
                (c >='A') && (c <='Z') || 
                (c >='a' && (c <='z')) || 
                (c >='0' && (c <='9')) || // na kazdej pozucji oprocz pierwszzej w 
                c == '_'                  //    identyfikatorze moga byc rowniez cyfry
            ) continue;
            return 0; // Jezeli warunek nie zostanie spelniony
        }
        // Jezeli kazdy znak w stringu przejdzie walidacje 
        return 1;
     }
     // w przeciwnym wypadku
     return 0;
}

int main(){
    //
    printf("%d", czy_identyfikator("dasdasd"));
    return 0;
}