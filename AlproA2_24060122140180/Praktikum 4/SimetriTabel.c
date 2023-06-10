/*
Nama Program  : SimetriTabel
Deskripsi     : Mengecek kesimetrisan suatu tabel
Nama Pembuat  : MUHAMMAD ANUGERAH RAMADHAN
NIM           : 24060122140180
Tanggal       : 21 Maret 2023
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //KAMUS
    int n1;
    int n2;
    int i;
    int j;
    int sama = 0;
    int *array_1;
    int *array_2;

    //ALGORITMA
    printf("Masukkan ukuran array 1: ");
    scanf("%d", &n1);

    printf("Masukkan ukuran array 2: ");
    scanf("%d", &n2);

    array_1 = (int*)malloc(n1 * sizeof(int));
    array_2 = (int*)malloc(n2 * sizeof(int));

    printf("Masukkan elemen array 1:\n");
    for (i = 0; i < n1; i++){
        scanf("%d", &array_1[i]);
    }

    printf("Masukkan elemen array 2:\n");
    for (i = 0; i < n2; i++){
        scanf("%d", &array_2[i]);
    }

    if (n1 != n2){
        printf("Tidak Simetris. ");
    }
    else{
        for (i = 0; i<n1; i++){
            if (array_1[i] != array_2[i]){
                printf("Masuk sini masbro");
                sama++;
            }
        }
    if (sama > 0){
        printf("Tidak Simetri. ");
    }
    else{
        printf("Simetri");
    }
    }

    return 0;
}
