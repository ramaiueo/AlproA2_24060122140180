/*
Nama Program  : CekBilSemp
Deskripsi     : Menampilkan kebenaran bilangan sempurna dari nilai N
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
    int faktor = 0;

    //ALGORITMA
    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    if (N<0){
        printf("Bilangan Harus Positif");
    }else{
        for(i=1 ; N>0&& i<N ; i++){
            if(N%i == 0){
                faktor+=i;
            }
        }
        if (faktor == N){
            printf("Bilangan Sempurna");
        }else{
            printf("Bilangan Tidak Sempurna");
        }
    }
}
