/*Nama File: CekPrima.c*/
/*Deskripsi: Mengecek apakah suatu bilangan termasuk bilangan prima atau bukan*/
/*Pembuat: Prisca Della Budiman - 24060121140093*/
/*Tanggal pembuatan: Kamis, 17-03-2022 13:31 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    int N; //bilangan sembarang integer positif
    int i;
    int a;

    /*Algoritma*/
    printf("Masukkan input bilangan integer positif: ");
    scanf("%d", &N);

    if (N<=2){
        switch (N){
            case 1 :
                printf("Bukan bilangan prima.");
                break;
            case 2 :
                printf("Bilangan prima.");
                break;
            default :
            printf("Masukan salah, harus berupa bilangan integer positif.");
        }
    } else {
        (i = 1);
        (a = 0);
        while (i<N){
            (i=i+1);
            if (N % i != 0){
                (a+=1);
            } else {
                (a+=0);
            }
        }
        if (a==(N-2)){ //N tidak dapat dibagi secara utuh kecuali bilangan 1 dan dirinya sendiri
            printf("Bilangan prima.");
        } else { //N dapat dibagi oleh bilangan lain secara utuh sehingga N bukan bilangan prima
            printf("Bukan bilangan prima.");
        }
    }

    return 0;
}
