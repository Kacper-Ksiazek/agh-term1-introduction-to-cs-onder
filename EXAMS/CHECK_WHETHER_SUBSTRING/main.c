#include <stdio.h>

int czy_jest_podciagiem(char s1[], char s2[]){
    int i =0;
    while(s1[i]){
        int j = 0;
        int k =i;
        while(s1[k] == s2[j]){
            if(!s2[j+1]) return i;
            k++;
            j++;
        }
        i++;
    }
    return -1;
}

int main(){
    char s1[] = "Weronika";
    char s2[]= "onika";

    printf("%d", czy_jest_podciagiem(s1,s2));


    return 0;
}