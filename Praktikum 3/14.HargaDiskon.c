/*Nama File     : 14.HargaDiskon */
/*Deskripsi     : Menghitung besar harga setelah didiskon berdasarkan jenisnya*/
/*Nama          : Hernan Sandi Laksono */
/*NIM           : 24060121130078 */

#include <stdio.h>
int main()
{
    //Kamus
    char j;
    float i;
    int b;
    //Algoritma
    printf("Harga Diskon \n");
    printf("Masukkan Jenis Benda : ");
    scanf("%c",&j);
    printf("Masukkan harga awal antara Rp.200-Rp.10.000 : ");
    scanf("%f",&i);
    if (j == 'A') {
        b = (i - (i*(0.1)));
    }
    else if (j == 'B') {
        b = (i - (i*(0.15)));
    }
    else if (j == 'C') {
        b = (i - (i*(0.2)));
    }
    printf("Biaya Benda setelah didiskon Rp.%d", b);
    return 0;
}
