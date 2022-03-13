/*Nama File     : BiayaParkir */
/*Deskripsi 	: Menghitung besarnya biaya parkir */
/*Nama          : Hernan Sandi Laksono */
/*NIM           : 24060121130078 */

#include <stdio.h>

int main()
{
    //Kamus
    int t,b;
    //Algoritma
    printf("Harga Parkir \n");
    printf("Masukkan waktu parkir: ");
    scanf("%d",&t);
    if (t>2){
        b = 2000+((t-2)*500);
    }
    else {
        b = 2000;
    }
    printf("Biaya Parkir sebesar Rp.%d", b);
    return 0;
}
