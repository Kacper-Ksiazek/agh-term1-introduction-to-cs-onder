#include <stdio.h>

// 6.	Algorytm obliczający NWW(x,y) (algorytm iteracyjny bez użycia wzoru (x*y)/NWP(x,y))
int NWW(const int a, const int b){
    int bigger = a, smaller = b;
    if(b> a){
        bigger = b;
        smaller = a;
    }
    if((bigger % smaller) == 0) return smaller;

    int result = smaller;
    while((result % bigger) != 0) result+=smaller;

    return result;

}
int main(){
    printf("NWD dla 6 i 8 to: %d", NWW(6,8));
    //
    return 0;
}