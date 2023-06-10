/*
Nama Program  : FaktorBil
Deskripsi     : Menampilkan Faktor Bilangan dari Nilai N
Nama Pembuat  : MUHAMMAD ANUGERAH RAMADHAN
NIM           : 24060122140180
Tanggal       : 8 MARET 2023
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //KAMUS
    int N;
    int i;

    //ALGORITMA
    printf("Masukkan N : ");
    scanf("%d", &N);

    for (i=1; i<=N && N>0; i++){
        if (N%i == 0){
            printf("%d ,", i);
        }
    }

    return 0;
}
