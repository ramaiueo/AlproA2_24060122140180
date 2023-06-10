/*
Nama Program  : luasKellLayang
Deskripsi     : Menghitung dan menampilkan Luas Layang - layang dan Keliling Layang - Layang
Nama Pembuat  : MUHAMMAD ANUGERAH RAMADHAN
NIM           : 24060122140180
Tanggal       : 27 Februari 2023
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //KAMUS
    float s1,s2,d1,d2;
    float Luas;
    float Kell;

    //ALGORITMA
    printf("Masukkan nilai s1: ");
    scanf("%f", &s1);
    printf("Masukkan nilai s2: ");
    scanf("%f", &s2);
    printf("Masukkan nilai d1: ");
    scanf("%f", &d1);
    printf("Masukkan nilai d2: ");
    scanf("%f", &d2);

    Luas = 0.5 * d1 *d2;
    Kell = 2 * (s1+s2);

    printf("Luas : %.1f\n", Luas);
    printf("Keliling : %.1f", Kell);
    return 0;

}
