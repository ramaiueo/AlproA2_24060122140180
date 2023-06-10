/*
Nama Program  : CekBilPrima
Deskripsi     : Menampilkan kebenaran bilangan prima pada nilai N
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
    printf("Masukkan nilai: ");
    scanf("%d", &N);

    if (N<0){
        printf("Bilangan harus positif");
    }else{
        for (i=1; N>0 && i<=N ;i++){
            if(N%i == 0){
                faktor++;
            }
        }
        if (faktor == 2){
            printf("Bilangan Prima");
        }else{
            printf("Bukan Bilangan Prima");
        }
    }
    return 0;
}
