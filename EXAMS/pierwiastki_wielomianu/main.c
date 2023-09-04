#include <stdio.h>

void wypisz_pierwiastki_wielomianu(int wspolczynniki[], int ilosc_wspolczynnikow){
    // 1. Szukamy dzielnikow p:
    int ilosc_dzielnikow_wyrazu_wolnego=1; // Zaczynamy od 2, bo 1 mamy juz wpisane jako dzielnik
    int dzielniki_wyrazu_wolnego[100] = {1}; // glupio sie deklaruje pusta tablice
    int t = wspolczynniki[ilosc_wspolczynnikow-1]; // wartosc wyrazu wolnego
    if(t<0) t = t*-1;
    //
    for(int j =2; j<=t;j++){
        if(!(t % j)) dzielniki_wyrazu_wolnego[ilosc_dzielnikow_wyrazu_wolnego++] = j;
    };

    // 2. Szukamy dzielnikow q
    // Zaczynamy od 2, bo 1 mamy juz wpisane jako dzielnik
    int ilosc_dzielnikow_wspolczynnika_przy_najwyzszej_potedze=1;
    int dzielniki_wspolczynnika_przy_najwyzszej_potedze[100] = {1}; 
    t = wspolczynniki[0];
    if(t<0) t = t*-1;
    //
    for(int j =2; j<=t;j++){
        if(!(t % j)) dzielniki_wspolczynnika_przy_najwyzszej_potedze[ilosc_dzielnikow_wspolczynnika_przy_najwyzszej_potedze++] = j;
    };

    // 3. Obliczamy wartosx wielomianu dla kazdego mozliwego x=p/q
    double x=0;
    double wartoscWielomianu = 0; // w(x)
    // 

    for(int i =0;i<ilosc_dzielnikow_wyrazu_wolnego;i++){
        for(int j=0;j<ilosc_dzielnikow_wspolczynnika_przy_najwyzszej_potedze;j++){
            // pierwszy scenariusz: dla x = p/q
            x = (double)dzielniki_wyrazu_wolnego[i] / dzielniki_wspolczynnika_przy_najwyzszej_potedze[j];
            wartoscWielomianu = 0;
            for(int k=0;k<ilosc_wspolczynnikow; k++){
                wartoscWielomianu = wartoscWielomianu * x + wspolczynniki[k];
            }
            if(wartoscWielomianu == 0) printf("%lf", x);
            // drugi scenariusz: dla x = -p/q
            x*=-1;
            wartoscWielomianu = 0;
            for(int k=0;k<ilosc_wspolczynnikow; k++){
                wartoscWielomianu = wartoscWielomianu * x + wspolczynniki[k];
            }
            if(wartoscWielomianu == 0) printf("%lf", x);
        }
    }

}

int main(){
    int tab[] = {3,-4,9,-12};
    wypisz_pierwiastki_wielomianu(tab,4);

    return 0;
}