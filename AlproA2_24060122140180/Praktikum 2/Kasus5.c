/*
Nama Program  : Kasus5
Deskripsi     : Menunjukan sifat segitiga
Nama Pembuat  : MUHAMMAD ANUGERAH RAMADHAN
NIM           : 24060122140180
Tanggal       : 4 Maret 2023
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //KAMUS
    int a;
    int b;
    int c;

    //ALGORITMA
    printf("Masukkan sisi 1 : ");
    scanf("%d", &a);
    printf("Masukkan sisi 2 : ");
    scanf("%d", &b);
    printf("Masukkan sisi 3 : ");
    scanf("%d", &c);

    if (a == b && b== c){
        printf("Segitiga Sama Sisi");
    }else if ( a == b || a== c || b == c){
        printf("Segitiga Sama Kaki");
    }else if ( a != b && b != c){
        printf("Segitiga Sembarang");
    }else{
        printf("Terdapat nilai yang bukan segitiga");
    }
    return 0;
}
