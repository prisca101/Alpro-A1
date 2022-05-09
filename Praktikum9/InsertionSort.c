/*Nama File: InsertionSort.c*/
/*Deskripsi: Menghasilkan isi array terurut dari array yang diberikan dengan cara penyisipan*/
/*Pembuat: Prisca Della Budiman - 24060121140093*/
/*Tanggal pembuatan: Kamis, 28-04-2022 17:06 WIB*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//Pembuatan SubProgram
void insertionSort(int T[], int N){
    //Kamus Lokal
    int i; //counter
    int temp; //penyimpanan sementara T[pass]
    int pass; //counter

    //Algoritma
    for (pass=1; pass<N; pass++){
        temp = T[pass];
        i = pass-1;
        while (temp < T[i] && i>0){
            T[i+1]=T[i];
            i-=1;
        }
        if (temp >= T[i]){
            T[i+1]=temp;
        } else {
            T[i+1]=T[i];
            T[i]=temp;
        }
    }
}

//Program Utama/Main
int main()
{
    /*Kamus*/
    int N; //banyak isi array
    int i; //counter
    int *arr; //array
    int array[]={1, 99, 7, 88, 3, 5, 2, 13, 17, 4}; //array yang telah ada
    char opsi; //pilih array T untuk true (ya) dan F untuk false (tidak)
    // 1 99 7 88 3 5 2 13 17 4
    // 1 5 2 10 14 13 17 20 22 7 8 4 70 15 77

    /*Algoritma*/
    printf("Array yang telah disediakan = {1, 99, 7, 88, 3, 5, 2, 13, 17, 4}\n");
    printf("Apa ingin mengurutkan array yang telah ada? (T / F) \nJika iya, masukkan karakter 'T' \nJika ingin membuat array baru, masukkan karakter 'F'\n");
    scanf("%cge", &opsi);

    if (opsi == 'T'){
        N = 10;
        arr = (int*)malloc(N * sizeof(int));
        arr = array;
    } else {
        printf("\nMasukkan banyaknya isi array: ");
        scanf("%d", &N);
        arr = (int*)malloc(N * sizeof(int));
        printf("\nMasukkan isi array: \n");
        for (i=0; i<N; i++){
            scanf("%d", &arr[i]);
        }
    }

    printf("\n\nOriginal array yang ingin diurutkan: ");
    for (i=0; i<N; i++){
        printf("%d, ", arr[i]);
    }
    insertionSort(arr, N); //Pemanggilan SubProgram
    printf("\nSorted array: ");
    for (i=0; i<N; i++){
        printf("%d, ", arr[i]);
    }
    free(arr);
    return 0;
}
