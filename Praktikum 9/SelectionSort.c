// Nama File    : SelectionSort
// Deskripsi    : Mengurutkan sebuah Array menggunakan selection sort
// Nama         : Hernan Sandi Laksono
// NIM          : 24060121130078

#include <stdio.h>
#include "PrintArr.c"

void selectionSort(int arr[], int n)
{
//Kamus Lokal
    int i, j, min;

//Algoritma
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            min = i;
            if (arr[j] < arr[min]) {
                min = j;
            }
            swap(&arr[i], &arr[min]);
        }
    }
}

int main()
{
//Kamus
    int arr[] = {100,10,30,25,50,75,80,55,60,90,45,15,70,120,0,-10};
    int n;
    
//Algoritma
    n = sizeof(arr) / sizeof(arr[0]);
    printf("Array sebelum diurutkan = ");
    printArr(arr, n);
    printf("\n");
    printf("Array setelah diurutkan = ");
    selectionSort(arr, n);
    printArr(arr, n);
}