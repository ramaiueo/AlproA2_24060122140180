/*
Nama Program  : FrekNilTabel
Deskripsi     : Mencari nilai yang frekuensinya muncul lebih dari 2 kali
Nama Pembuat  : MUHAMMAD ANUGERAH RAMADHAN
NIM           : 24060122140180
Tanggal       : 19 Maret 2023
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //KAMUS
    int n;
    int i;
    int j;
    int sama;
    int *tabel;

    //ALGORITMA
    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    tabel = (int*)malloc(n * sizeof(int));

    for (i = 0; i<n; i++){
        scanf("%d", &tabel[i]);
    }

    for (i = 0; i<n; i++){
        sama = 0;
        for (j = 0; j < n; j++){
            if (i == j){
                break;
            }
            else{
                if (tabel[i] == tabel[j]){
                sama += 1;
                }
            }
        }
        if (sama == 1){
            printf("Frekuensi yang muncul lebih dari dua kali : %d\t", tabel[i]);
        }
    }
    return 0;
}
