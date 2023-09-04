#include <stdio.h>

// tab musi byc posortowane rosnaco!!!
int polowkowe( int x, int *tab, int l, int p ){ 
    int s = ( l+p )/2; 
    if(l<=p){ 
        if( tab[s] > x ) return polowkowe(x,tab,l,s-1); 
        else if ( tab[s] < x ) return polowkowe(x,tab,s+1,p); 
        return s; 
    } 
    return -1; 
} 


int main(){
    int tab[] = {1,4,5,6,7,8,9,10,19,20};

    printf("%d\n", polowkowe(6,tab,0,9));
    printf("%d\n", polowkowe(16,tab,0,9));
    printf("%d\n", polowkowe(9,tab,0,9));
    return 0;
}