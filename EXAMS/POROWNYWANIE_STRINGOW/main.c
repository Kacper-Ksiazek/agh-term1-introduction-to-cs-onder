#include <stdio.h>

const char *literyDuze = "ABCDEFGHIJKLMNOPRSTUVWXYZ";
const char *literyMale = "abcdefghijklmnoprstuwxyz";

int indexLitery (char znak){
    int i = 0;
    while(literyDuze[i]){
        if(literyDuze[i] == znak || literyMale[i] == znak) return i;
        i++;
    }
    // Nigdy tu nie bedzie
    return -1;
}

int porownaj (char *s1, char *s2){
    int i =0;
    int indexZnakuZS1 = 0;
    int indexZnakuZS2 = 0;
    while (s1[i] && s2[i]){
        indexZnakuZS1 = indexLitery(s1[i]);
        indexZnakuZS2 = indexLitery(s2[i]);
        if(indexZnakuZS1 > indexZnakuZS2) return 1; // s1 jest pozniej leksykalnie niz s2
        i++;
    }

    if(s1[i] || s2[i]) return -1; // s1 jest dluzszy od s2 i jest pierwszy alfabetycznie
    return 0; // Lancuchy identyczne
}

int main(){
    char *a = "AbCdE";
    char *b = "AbccDe";

    printf("%d", porownaj(a,b));

    return 0;
}