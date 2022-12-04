#include <stdio.h>

int convertHexToDec(char *p);

int main(){
    char *hex = "B0F3";
    int decimalCounterpart = convertHexToDec(hex);
    
    printf("RESULT: %d",decimalCounterpart);
}

int convertHexToDec(char *p){
    int result = 0;
    int currentPower = 1;

    int i = 0;
    while(p[i]){
        int proceed(int el){
            result*=16;
            result+=el;
            i+=1;

        }
        int el = p[i];
        printf("%d\n",el);

        if(el >=48 && el <=57){
            proceed(el-48);
            continue;
        }
        else if(el>=65 && el<=70){
            proceed(el-55);
            continue;
        }
        else {
            i+=1;
        }
    }

    return result;
}