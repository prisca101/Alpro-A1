/*Nama File: CekHari.c*/
/*Deskripsi: Menuliskan nama hari sesuai nomor inputan*/
/*Pembuat: Prisca Della Budiman - 24060121140093*/
/*Tanggal pembuatan: Jumat, 11-03-2022 12:00 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    int i;

    /*Algoritma*/
    printf("Masukkan nomor input hari: ");
    scanf("%d", &i);
    if (i<1 || i>7 ){
            printf("Masukan nomor hari tidak tepat.");
    }
    else {
    switch (i){
    case 1:
        printf("Minggu");
        break;
    case 2:
        printf("Senin");
        break;
    case 3:
        printf("Selasa");
        break;
    case 4:
        printf("Rabu");
        break;
    case 5:
        printf("Kamis");
        break;
    case 6:
        printf("Jumat");
        break;
    case 7:
        printf("Sabtu");
        break;
    }
    }
    return 0;
}
