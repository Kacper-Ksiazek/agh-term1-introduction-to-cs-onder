#include <stdio.h>

// Funkcja sprawdzajaca, czy 2 slowa tworza anagram (bez znaczenia wielkosc liter)
// Nie obsluguje zdan! czyli jak sie gdzies pojawi spacja, to lipa!!!

int czy_anagram(char str1[], char str2[]){
    // Deklarujac rozmiar tablicy, kompilator 
    // automatycznie wstawi zera w adresy bez okreslonej wartosci
    int litery_stringa_1[26]= {0}; 
    int litery_stringa_2[26]= {0};

    int n = 0; // Dlugosc stringa 1
    int m = 0; // Dlugosc stringa 2
    
    char c;
    while((c = str1[n++])) litery_stringa_1[(c>'A' && c<'Z') ? c - 'A' : c - 'a']++;
    while((c = str2[m++])) litery_stringa_2[(c>'A' && c<'Z') ? c - 'A' : c - 'a']++;

    if(n!=m) return 0; // String'i maja rozne dlugosci wiec nie sa anagramem

    for(int i = 0; i<26; i++){
        if(litery_stringa_1[i] != litery_stringa_2[i]){
            return 0;
        }
    }

    return 1;
}

int main(){
    printf("%d", czy_anagram("Essa", "szEa"));
    //
    return 0;
}