/*Nama File: CekBulan.c*/
/*Deskripsi: menampilkan nama bulan sesuai nomor inputan*/
/*Pembuat: Prisca Della Budiman - 24060121140093*/
/*Tanggal pembuatan: Jumat, 11-03-2022 12:16 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    int i;

    /*Algoritma*/
    printf("Masukkan nomor input bulan: ");
    scanf("%d", &i);
    if (i<1 || i>12 ){
            printf("Masukan nomor bulan tidak tepat.");
    }
    else {
    switch (i){
    case 1:
        printf("Januari");
        break;
    case 2:
        printf("Februari");
        break;
    case 3:
        printf("Maret");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("Mei");
        break;
    case 6:
        printf("Juni");
        break;
    case 7:
        printf("Juli");
        break;
    case 8:
        printf("Agustus");
        break;
    case 9:
        printf("September");
        break;
    case 10:
        printf("Oktober");
        break;
    case 11:
        printf("November");
        break;
    case 12:
        printf("Desember");
        break;
    }
    }
    return 0;
}
