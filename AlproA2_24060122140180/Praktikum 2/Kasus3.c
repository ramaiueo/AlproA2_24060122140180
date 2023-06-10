/*
Nama Program  : Kasus3
Deskripsi     : Menunjukan bulan melalui input i
Nama Pembuat  : MUHAMMAD ANUGERAH RAMADHAN
NIM           : 24060122140180
Tanggal       : 4 Maret 2023
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //KAMUS
    int i;

    //ALGORITMA
    printf("Masukkan nomor bulan : ");
    scanf("%d", &i);
    if (i>=1 &&i<=12){
        if (i == 1){
            printf("Bulan Januari");
        }else if (i == 2){
            printf("Bulan Februari");
        }else if (i == 3){
            printf("Bulan Maret");
        }else if (i == 4){
            printf("Bulan April");
        }else if (i == 5){
            printf("Bulan Mei");
        }else if (i == 6){
            printf("Bulan Juni");
        }else if (i == 7){
            printf("Bulan Juli");
        }else if (i == 8){
            printf("Bulan Agustus");
        }else if (i == 9){
            printf("Bulan September");
        }else if (i == 10){
            printf("Bulan Desember");
        }else if (i == 11){
            printf("Bulan November");
        }else{
            printf("Bulan Desember");
        }
    }else{
        printf("Masukkan nomor bulan tidak tepat");
    }
    return 0;
}
