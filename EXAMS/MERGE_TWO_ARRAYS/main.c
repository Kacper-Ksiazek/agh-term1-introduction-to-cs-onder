#include <stdio.h>
#include <stdlib.h>

#define LENGTH_OF(a) sizeof(a) / sizeof(a[0])

struct Array{
    int data[30];
    int length;
    int index;
};

void printAnArrayOfInts(int *a, int n);
int currentElement(struct Array *a);
// void incrementIndex(struct Array *a);

int main(){
    struct Array a ={
        .data= {5,8,20,24,31,64},
        .index=0,
        .length= 6
    };

    struct Array b = {
        .data= {6,7,20,22,32,45,100},
        .index=0,
        .length=7
    };

    int n = a.length + b.length;
    int *c = malloc(n * sizeof(int));
    
    int elA, elB;
    for(int k = 0;k<n;k++){
        elA = currentElement(&a);
        elB = currentElement(&b);

        if(b.index == b.length || (a.index != a.length && elA<elB)){
            c[k] = elA;
            a.index+=1;
        }else {
            c[k]= elB;
            b.index+=1;
        }
    }

    printf("a: ");
    printAnArrayOfInts(a.data,a.length);

    printf("b: ");
    printAnArrayOfInts(b.data,b.length);

    printf("---\nc:");
    printAnArrayOfInts(c,n);
}

int currentElement(struct Array *a){
    return a->data[a->index];
}

void printAnArrayOfInts(int *a,int n){
    printf("[");
    for(int i= 0;i<n;i++){
        if(i+1 == n) printf("%d", a[i]);
        else printf("%d, ", a[i]);
    }
    printf("]\n");
}