/*Nama File: FaktorBil.c*/
/*Deskripsi: Menentukan faktor-faktor dari suatu bilangan integer positif*/
/*Pembuat: Prisca Della Budiman - 24060121140093*/
/*Tanggal pembuatan: Kamis, 17-03-2022 13:01 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    int N; //bilangan sembarang integer positif
    int i; //counter

    /*Algoritma*/
    printf("Masukkan input bilangan integer positif: ");
    scanf("%d", &N);

    if (N<=0){
        printf("Masukan input harus bernilai integer positif.");
    }
    else {
        printf("Faktor-faktor bilangan %d adalah \n", N);
        for (i=1; i <= N; i+=1){
            if ((N % i) == 0){
                printf("%d\n", i);
            }
        }
    }
    return 0;
}
