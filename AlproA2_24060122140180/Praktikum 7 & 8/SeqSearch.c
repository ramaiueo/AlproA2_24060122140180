#include <stdio.h>
#include <stdlib.h>

int main()
{
    //KAMUS LOKAL
    int nilai[8]= {1,3,5,-8,12,90,3,5};
    int i,N,X,IX;

    //ALGORITMA
    IX = 0;
    X = 5;
    i = 0;


    while( i<8 && nilai[i] != X){
        i++;
    }

    if(nilai[i] == X){
        IX = i;
        printf("IX = %d", IX);
    }else{
        IX = 0;
        printf("IX = %d", IX);
    }
}
