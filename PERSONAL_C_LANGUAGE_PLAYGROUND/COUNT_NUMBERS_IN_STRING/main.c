#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define USER_INPUT_MAX_LENGTH 30

void printString();

char* loadString(char* msg) {
    char *string = malloc(sizeof(char)* USER_INPUT_MAX_LENGTH);
    printf(msg);
    scanf("%s", string);

    return string;
}

int countAllNumbersInString(char *receivedString){
    unsigned int i = 0;
    unsigned int amountOfNumbers = 0;
    const int len = strlen(receivedString);

    for(int i = 0;i<len;i++){
        const int c = receivedString[i];
        if(c >= 48 && c <=57) amountOfNumbers++;
    }

    return amountOfNumbers;
}

void getSyntaxBasedOnQuantity(int quantity){
    char result[2][20];
    strcpy(result[0], "Essa");
    strcpy(result[1], "Jebac agh");
}

void printString(char *s){
    const int len = strlen(s);
    for(int i= 0; i<len;i++) printf("%c", s[i]);
}


const void main(){
    char *stringToModify = loadString("Enter your string: ");
    const int amount = countAllNumbersInString(stringToModify);
    getSyntaxBasedOnQuantity(amount);

    printf("There are %d numbers in passed string", amount);
}