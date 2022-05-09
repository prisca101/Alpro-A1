/*Nama File: SelectionSort.c*/
/*Deskripsi: Menghasilkan isi array terurut dari array yang diberikan dengan cara seleksi*/
/*Pembuat: Prisca Della Budiman - 24060121140093*/
/*Tanggal pembuatan: Kamis, 28-04-2022 17:28 WIB*/

#include <stdio.h>
#include <stdlib.h>

//Pembuatan SubProgram
void selectionSort(int T[], int N){
    //Kamus Lokal
    int i; //counter
    int temp; //penyimpanan sementara
    int pass; //counter
    int min; //indeks

    //Algoritma
    for (pass=0; pass<N-1; pass++){
        min = pass;
        for(i=pass+1; i<N; i++){
            if (T[i] < T[min]){
                min = i;
            }
        }
        temp = T[min];
        T[min] = T[pass];
        T[pass] = temp;
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
    selectionSort(arr, N); //Pemanggilan SubProgram
    printf("\nSorted array: ");
    for (i=0; i<N; i++){
        printf("%d, ", arr[i]);
    }
    free(arr);
    return 0;
}
