/*
Nama Program  : JumDeret
Deskripsi     : Menghitung dan Menampilkan Jumlah Deret dari nilai N
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
    int total = 0;

    //ALGORITMA
    printf("Masukkan nilai n : ");
    scanf("%d", &N);

    for(i=1; N>0 && i<=N; i++){
        total += i;

    }
    printf("jumlah deret : %d", total);

    return 0;

}
