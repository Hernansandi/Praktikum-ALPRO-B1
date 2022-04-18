/* Nama File : SequentialSearch.c */
/* Deskripsi : Mencari apakah X ada dalam array T secara sekuensial*/
/* Nama      : Hernan Sandi Laksono */
/* NIM       : 24060121130078 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//SubProgram
int SEQSearchX1(int T[], int N, int X, int *IX)
{
//Kamus Lokal
    int i;
//Algoritma
    i = 0;
    while ((i < N) && (T[i] != X)) {
           i = i + 1;
    }
    if (T[i] == X) {
        *IX = i;
    }
    else {
        *IX = -1;
    }
}

