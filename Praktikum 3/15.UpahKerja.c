/*Nama File     : 15.UpahKerja */
/*Deskripsi     : Menghitung besar Upah Kerja berdasarkan golongan dan jam kerja */
/*Nama          : Hernan Sandi Laksono */
/*NIM           : 24060121130078 */

#include <stdio.h>
int main()
{
    //Kamus
    int g,t,u;
    //Algoritma
    printf("Upah Kerja \n");
    printf("Masukkan golongan antara 1-4 : ");
    scanf("%d", &g);
    printf("Masukkan waktu kerja per minggu : ");
    scanf("%d", &t);
    if ((g==1) && (t>0) && (t<=40)) {
        u = 1000*t;
    }
    else if ((g==1) && (t>40)) {
        u = 1000*40 + (1.5)*1000*(t-40);
    }
    else if ((g==2) && (t>0) && (t<=40)) {
        u = 1500*t;
    }
    else if ((g==2) && (t>40)) {
        u = 1500*40 + (1.5)*1500*(t-40);
    }
    else if ((g==3) && (t>0) && (t<=40)) {
        u = 2000*t;
    }
    else if ((g==3) && (t>40)) {
        u = 2000*40 + 1.5*2000*(t-40);
    }
    else if ((g==4) && (t>0) && (t<=40)) {
        u = 2500*t;
    }
    else if ((g==4) && (t>40)) {
        u = 2500*40 + 1.5*2500*(t-40);
    }
    printf("Upah Kerja sebesar Rp.%d", u);
    return 0;
}
