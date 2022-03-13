/*Nama File     : 16.TunjAnak */
/*Deskripsi     : Menghitung besar tunjangan anak dari 10% gaji pokok dan diberikan maks kepada 3 anak */
/*Nama          : Hernan Sandi Laksono */
/*NIM           : 24060121130078 */

#include <stdio.h>
int main()
{
    //Kamus
    int a,g,T;
    //Algoritma
    printf("Tunjangan Anak \n");
    printf("Masukkan jumlah anak : ");
    scanf("%d", &a);
    printf("Masukkan besar gaji pokok : ");
    scanf("%d", &g);
    if ((a>=0) && (a<=3)) {
        T = a*(0.1*g);
    }

    else {
        T = 3*(0.1*g);
    }
    printf("Besar Tunjangan anak sebesar Rp.%d", T);
    return 0;
}
