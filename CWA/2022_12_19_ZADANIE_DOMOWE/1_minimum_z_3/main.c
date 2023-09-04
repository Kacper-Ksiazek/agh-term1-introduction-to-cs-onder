#include <stdio.h>

#define LENGTH_OF(a) sizeof(a) / sizeof(a[0])

struct ReceivedNumber {
    char* id;
    int value;
} ;

struct ReceivedNumber loadNumber(char *id){
    struct ReceivedNumber result = {.id=id};
    printf("Podaj %s: ",id);
    scanf_s("%d", &(result.value));

    return result;
}

int main(){
    struct ReceivedNumber numbers[3] = {loadNumber("a"), loadNumber("b"), loadNumber("c")};
    struct ReceivedNumber minimum = numbers[0];

    int amountOfNumbers = LENGTH_OF(numbers);

   
    for(int i = 1; i<amountOfNumbers; i++){
        if(numbers[i].value < minimum.value) minimum = numbers[i];
    }

    printf("--------------------------------\n");
    printf("Najmniejsze jest %s o wartosci: %d", minimum.id, minimum.value);
    printf("\n--------------------------------");

    return 0;
}
