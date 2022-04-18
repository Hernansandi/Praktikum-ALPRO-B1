/* Nama File : main.c */
/* Deskripsi : Menjalankan subprogram SequentialSearch.c
               jika benar akan menghasilkan indeks dimana X dalam T
               jika tidak benar mengeluarkan pesan tidak ditemukan */
/* Nama      : Hernan Sandi Laksono */
/* NIM       : 24060121130078 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "SequentialSearch.h"

//Program Utama
int main()
{
//Kamus Umum
    int T[] = {1,-1,2,-2,3,-3,4,-4,5,-5,6,-6,7,-7,8,-8,9,-9,10,-10,11,-11,12,-12,13,-13,14,-14,15,-15};
    int N = sizeof(T)/sizeof(T[0]);
    int X;
    int IX;
//Algoritma
    printf("===== Sequential Search =====\n\n");
    printf("Masukkan elemen yang akan dicari di dalam Array : ");
    scanf("%d", &X);
    //Pemanggilan SubProgram
    SEQSearchX1(T, N, X, &IX);
    if (IX != -1) {
        printf("Elemen %d ditemukan pada index ke %d atau IX = %d", X, IX, IX);
    }
    else {
        printf("Elemen %d tidak ditemukan di dalam Array T", X);
    }
}
