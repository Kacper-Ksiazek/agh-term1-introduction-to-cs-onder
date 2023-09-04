#include <stdio.h>
#include <stdbool.h>

//
// 1.
//
void problem1(){
    int a,b,c;
}
//
// 2.
//
void problem2(){
    int d=5,e=-6,f=d;
}
//
// 3.
//
void problem3(){
    int array[3]= {0};
    int i = 0;
    array[i++]=5;
}
//
// 4.
//
void problem4(){
    int t = 50;
    bool doSomething = (t % 50) == 7;

    if(doSomething) printf("OK");
}
//
// 5.
//
void problem5(){
    const char* duzeLitery = "ABCDEFGHIJKLMNOPRSTUVWXYZ";
    const char* maleLitery = "abcdefghijklmnoprstuvwxyz";

    char string[] = "Kot ma kota";
    int i = 0;

    while(string[i]){
        for(int j =0;j<26;j++){
            if(string[i] == maleLitery[j]) {
                // printf("%c -> %c\n", maleLitery[j], duzeLitery[j]);
                string[i] = duzeLitery[j];
            }
        }
        i++;
    }
    printf("Koniec");
    printf("Po formatowaniu: %s", string);
}

int main(){
    problem5();
    

    return 0;
}