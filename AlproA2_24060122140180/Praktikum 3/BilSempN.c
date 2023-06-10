/*
Nama Program  : BilSempN
Deskripsi     : Menampilkan Bilangan Sempurna sampai nilai N
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
    int K;
    int faktor;

    //ALGORITMA
    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    if (N<0){
        printf("Bilangan Harus positif");
    }else{
        for(i=1; N>0 && i<N; i++){
            faktor = 0;
            for(K=1; K<i;K++){
                if (i%K == 0){
                    faktor+=K;
                }
            }
            if (faktor == i){
                printf("%d ,",i);
            }
        }

    }
    return 0;
}
