/*
Nama Program  : Descending.c
Deskripsi     : Mengurutkan bilangan secara terurut dari terbesar ke terkecil
Nama Pembuat  : MUHAMMAD ANUGERAH RAMADHAN
NIM           : 24060122140180
Tanggal       : 14 Mei 2023
*/
#include <stdio.h>
#include <stdbool.h>

void bubbleSort(int arr[], int n) {

  //KAMUS LOKAL
  int pass;
  int i;
  int temp;
  bool tukar;

  //ALGORITMA
  tukar = true;
  pass=0;
  while (pass < n  && tukar) {
    tukar = false;
    for(i=0; i<n-1; i++) {
      if (arr[i] < arr[i + 1]) {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;

        tukar = true;
      }

    }
    i++;
  }
}

int main() {

    //KAMUS LOKAL
    int arr[] = {10,34,22,5,4,19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;

    //ALGORITMA
    bubbleSort(arr, n);
    printf("Data terurut: \n");
    for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
    }
    return 0;
}

