/*
Nama Program  : volBolaKerct
Deskripsi     : Menghitung dan menampilkan Volume bola dan Volume Kerucut
Nama Pembuat  : MUHAMMAD ANUGERAH RAMADHAN
NIM           : 24060122140180
Tanggal       : 27 Februari 2023
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //KAMUS
    float r;
    float Vb;
    float Vk;
    const float phi = 3.145;

    //ALGORITMA
    printf("Masukkan nilai r :");
    scanf("%f", &r);

    Vb = 1.3 * (phi *r *r *r);
    Vk = 0.5 * Vb;

    printf("Volume Bola : %.1f\n", Vb);
    printf("Volume Kerucut : %.1f", Vk);
    return 0 ;
}
