/*
Nama Program  : NilMax2Tabel
Deskripsi     : Mencari Nilai Maximum kedua dari suatu array
Nama Pembuat  : MUHAMMAD ANUGERAH RAMADHAN
NIM           : 24060122140180
Tanggal       : 19 Maret 2023
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //KAMUS
    int i;
    int n;
    int max1 = 0;
    int max2 = 0;
    int *tabel;

    //ALGORITMA
    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    tabel = (int*)malloc(n * sizeof(int));

    if (n < 1){
        printf("Masukan harus positif. ");
    }
    else{
        printf("Masukkan nilai array: \n");
        for (i = 0; i < n; i++){
            scanf("%d", &tabel[i]);
            if (tabel[i] < 1){
                printf("Elemen harus positif. ");
                break;
            }
        }

        for (i = 0; i < n; i++){
            if (tabel[i] > max1){
                max2 = max1;
                max1 = tabel[i];
            }
            else if(tabel[i]>max2 && tabel[i] != max1){
                max2 = tabel[i];
            }
        }
        printf("Nilai kedua terbesar adalah: %d", max2);
    }
    return 0;
}

