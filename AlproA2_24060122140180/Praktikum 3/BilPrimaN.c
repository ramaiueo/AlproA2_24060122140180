/*
Nama Program  : BilPrimaN
Deskripsi     : Menampilkan Bilangan Prima sampai nilai N
Nama Pembuat  : MUHAMMAD ANUGERAH RAMADHAN
NIM           : 24060122140180
Tanggal       : 13 MARET 2023
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //KAMUS
    int N;
    int i;
    int faktor;
    int K;

    //ALGORITMA
    printf("Masukkan nilai: ");
    scanf("%d", &N);

    if(N<0){
        printf("Bilangan Harus Positif");
    }else{
        for (i = 1; i<=N && N>0 ; i++){
        faktor = 0;
        for (K = 1; K<=i; K++){
            if (i % K == 0){
                faktor++;
            }
        }
        if (faktor == 2){
            printf("%d,", i);
        }
    }
    }

   return 0;
}
