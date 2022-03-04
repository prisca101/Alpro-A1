/*Nama File: LuasBjsk.c*/
/*Deskripsi: Menghitung luas bujursangkar*/
/*Pembuat: Prisca Della Budiman - 24060121140093*/
/*Tanggal pembuatan: Rabu, 02-03-2022 12:22 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    int s; //variable sisi
    float l; //variable luas

    /*Algoritma*/
    printf("Masukkan nilai variabel sisi dari bujursangkar = ");
    scanf("%d", &s);
    l=s*s;

    printf("Luas Bujursangkar = %.2f", l);
    return 0;
}
