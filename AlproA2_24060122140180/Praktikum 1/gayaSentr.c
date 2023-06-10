/*
Nama Program  : gayaSentr
Deskripsi     : Menghitung dan menampilkan gaya sentripetal
Nama Pembuat  : MUHAMMAD ANUGERAH RAMADHAN
NIM           : 24060122140180
Tanggal       : 27 Februari 2023
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kamus
    float m ;
    float v ;
    float r ;
    float F ;

    //algoritma
    printf("Masukin Nilai m :");
    scanf("%f", &m);
    printf("Masukin Nilai v :");
    scanf("%f", &v);
    printf("Masukin Nilai r :");
    scanf("%f", &r);

    F = m*((v*v)/r);

    printf("gaya Sentr : %f", F) ;
    return 0;

}
