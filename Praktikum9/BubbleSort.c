/*Nama File: BubbleSort.c*/
/*Deskripsi: Menghasilkan isi array terurut dari array yang diberikan dengan cara pertukaran*/
/*Pembuat: Prisca Della Budiman - 24060121140093*/
/*Tanggal pembuatan: Selasa, 19-04-2022 13:01 WIB*/

#include <stdio.h>
#include <stdlib.h>

//Pembuatan SubProgram
void bubbleSort(int arr[], int n){
    //Kamus Lokal
    int i, j, temp;

    //Algoritma
    for (i=0; i<n-1; i++){
        for (j=0; j<n-i-1; j++){
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

//Program Utama/Main
int main()
{
    /*Kamus*/
    int n; //banyak isi array
    int i; //counter
    int *arr;
    int array[]={1, 99, 7, 88, 3, 5, 2, 13, 17, 4}; //array yang telah ada
    // 1 99 7 88 3 5 2 13 17 4
    char opsi; //pilih array T untuk true (ya) dan F untuk false (tidak)

    /*Algoritma*/
    printf("Array yang telah disediakan = {1, 99, 7, 88, 3, 5, 2, 13, 17, 4}\n");
    printf("Apa ingin mengurutkan array yang telah ada? (T / F) \nJika iya, masukkan karakter 'T' \nJika ingin membuat array baru, masukkan karakter 'F'\n");
    scanf("%cge", &opsi);

    if (opsi == 'T'){
        n = 10;
        arr = (int*)malloc(n * sizeof(int));
        arr = array;
    } else {
        printf("\nMasukkan banyaknya isi array: ");
        scanf("%d", &n);
        arr = (int*)malloc(n * sizeof(int));
        printf("\nMasukkan isi array: \n");
        for (i=0; i<n; i++){
            scanf("%d", &arr[i]);
        }
    }

    printf("\n\nOriginal array yang ingin diurutkan: ");
    for (i=0; i<n; i++){
        printf("%d, ", arr[i]);
    }
    bubbleSort(arr, n); //Pemanggilan SubProgram
    printf("\nSorted array: \n");
    for (i=0; i<n; i++){
        printf("%d, ", arr[i]);
    }
    free(arr);
    return 0;
}
