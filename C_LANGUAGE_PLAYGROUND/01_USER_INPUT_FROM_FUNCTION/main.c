#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define USER_INPUT_MAX_LENGTH 30

char* getStringFromUser(char* msg){
    char *str = malloc(sizeof(char) * USER_INPUT_MAX_LENGTH);
    printf("%s", msg);
    scanf("%s",str);
    return str;
}

const int main(){
    const char *stringReceivedFromUser = getStringFromUser("Enter your string: ");
    printf("Received string: %s", stringReceivedFromUser);
    return 0;
}