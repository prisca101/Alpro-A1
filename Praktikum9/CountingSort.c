/*Nama File: CountingSort.c*/
/*Deskripsi: Menghasilkan isi array terurut dari array yang diberikan dengan pencacahan*/
/*Pembuat: Prisca Della Budiman - 24060121140093*/
/*Tanggal pembuatan: Selasa, 19-04-2022 12:23 WIB*/

#include <stdio.h>

//Pembuatan SubProgram
void countingSort(int arr1[], int n, int max, int min){
    //Kamus Lokal
    int i, j;
    int count[1000]={0};

    //Algoritma
    for(i=0; i<n; ++i)
        count[arr1[i]-min]=count[arr1[i]-min]+1;
    for(i=0; i<=max-min; i++)
        for(j=1; j<=count[i]; ++j)
            printf("%d, ", i+min);
    printf("\n==============================\n");
}

//Program Utama/Main
int main()
{
    /*Kamus*/
    int n; //banyak isi array
    int i; //counter
    int *arr;
    int array[]={1, 99, 7, 88, 3, 5, 2, 13, 17, 4}; //array yang telah ada
    int max, min; //nilai maksimal dan minimal array
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

    max = arr[0];
    min = arr[0];
    printf("\n\nOriginal array: ");
    for (i=0; i<n; i++){
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
        printf("%d, ", arr[i]);
    }

    printf("\nMax: %d\nMin: %d\n", max, min);

    printf("\nSorted array: \n");
    countingSort(arr, n, max, min); //Pemanggilan SubProgram
    free(arr);
    return 0;
}
