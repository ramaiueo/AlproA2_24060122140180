/*
Nama Program  : Kasus6
Deskripsi     : Menunjukan nilai hasil operasi aritmatika sesuai dengan operasi yang dipilih
Nama Pembuat  : MUHAMMAD ANUGERAH RAMADHAN
NIM           : 24060122140180
Tanggal       : 4 Maret 2023
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //KAMUS
    int iA;
    int iB;
    char opsi;


    //ALGORITMA
    printf("Pilihan Operasi : ");
    scanf("%c", &opsi);
    printf("Masukkan nilai A : ");
    scanf("%d", &iA);
    printf("Masukkan nilai B : ");
    scanf("%d", &iB);


    switch(opsi){
        case 'a':
            printf("%d + %d = %d", iA, iB, iA + iB);
            break;
        case 'b':
            printf("%d - %d = %d", iA, iB, iA - iB);
            break;
        case 'c':
            printf("%d * %d = %d", iA, iB, iA * iB);
            break;
        case 'd':
            printf("%d / %d = %.3f", iA, iB, (float) iA / iB);
            break;
        case 'e':
            printf("%d / %d = %d", iA, iB, iA / iB);
            break;
        case 'f':
            printf("%d mod %d = %d", iA, iB, iA % iB);
            break;
        default:
            printf("Bukan pilihan menu yang benar");
            break;
    }
    return 0;
}
