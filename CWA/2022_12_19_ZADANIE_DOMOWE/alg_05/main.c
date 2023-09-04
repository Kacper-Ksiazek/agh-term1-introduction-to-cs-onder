#include <stdio.h>


int NWP_EUKLIDES(int a, int b){
    while(a % b != 0){
        int r = a % b;
        a = b;
        b = r;
    }

    return b;
}
// 5.	Algorytm znajdowania NWP(x,y) (dwa różne algorytmy + podstawa matematyczna)
int main(){
    int result = NWP_EUKLIDES(282,78);

    printf("NWP dla 278 i 78 to: %d", result);
    return 0;
}