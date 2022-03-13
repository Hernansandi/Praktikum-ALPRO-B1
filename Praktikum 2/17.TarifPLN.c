/*Nama File     : 17.TarifPLN */
/*Deskripsi     : Menghitung tarif biaya listrik berdasarkan golongan dan pemakaian daya listrik */
/*Nama          : Hernan Sandi Laksono */
/*NIM           : 24060121130078 */

#include <stdio.h>
int main()
{
    //Kamus
    int g,P,T;
    //Algoritma
    printf("Tarif PLN \n");
    printf("Masukkan golongan antara 1-2 : ");
    scanf("%d", &g);
    printf("Masukkan besar daya listrik dalam kWH : ");
    scanf("%d", &P);
    if ((g==1) && (P<100)) {
        T = 100000;
    }
    else if ((g==1) && (P>=100) && (P<1000)) {
        T = P*1000;
    }
    else if ((g==1) && (P>=1000)) {
        T = P*1000 + (P*1000)*0.1;
    }
    else if ((g==2) && (P<100)) {
        T = 200000;
    }
    else if ((g==2) && (P>=100) && (P<1000)) {
        T = P*2000;
    }
    else if ((g==2) && (P>=1000)) {
        T = P*2000 + (P*2000)*0.1;
    }
    printf("Tarif PLN sebesar Rp.%d", T);
    return 0;
}
