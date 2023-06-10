/*
Nama Program  : JumBarKolMat
Deskripsi     : Menghitung dan menampilkan jumlah baris dan kolom suatu matriks
Nama Pembuat  : MUHAMMAD ANUGERAH RAMADHAN
NIM           : 24060122140180
Tanggal       : 21 Maret 2023
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //KAMUS
    int i;
    int j;
    int baris;
    int kolom;
    int jumlah = 0;
    int **matriks;

    //ALGORITMA
    printf("Masukkan ukuran baris: ");
    scanf("%d", &baris);

    printf("Masukkan ukuran kolom: ");
    scanf("%d", &kolom);

    matriks = (int**)malloc(baris * sizeof(int*));
    for (i = 0; i < baris; i++){
        matriks[i] = (int*)malloc(kolom * sizeof(int));
    }

    for (i = 0; i < baris; i++){
        for (j = 0; j < kolom; j++){
            printf("Masukkan elemen baris %d: ", i+1);
            scanf("%d", &matriks[i][j]);
        }
    }

    for (i = 0; i < baris; i++){
        for (j = 0; j < kolom; j++){
            printf("%d\t", matriks[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < baris; i++){
        jumlah = 0;
        for (j = 0; j < kolom; j++){
            jumlah+=matriks[i][j];
        }
        printf("Jumlah baris %d adalah: %d\n", i+1, jumlah);
    }

    for (j = 0; j < kolom; j++){
        jumlah = 0;
        for (i = 0; i < baris; i++){
            jumlah+=matriks[i][j];
        }
        printf("Jumlah kolom %d adalah: %d\n", j+1, jumlah);
    }

    return 0;
}
