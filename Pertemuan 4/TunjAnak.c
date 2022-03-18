// Nama File : TunjAnak.c
// Deskripsi : Menampilkan besarnya tunjangan anak dengan jumlah anak maksimal yang ditanggung adalah 3 anak
// Pembuat : Zhafira Amanda/ 24060121140100
// Tanggal : 18 Maret 2022


#include<stdio.h>

int main(){
    // Kamus
    int a,g,T;

    //Algoritma
    printf("Masukkan jumlah anak yang dimiliki : ");
    scanf("%d", &a);
    printf("Masukkan jumlah gaji : ");
    scanf("%d", &g);

    if(a>= 0 && g>0){
    }
        if(a < 3){
            T = a * 10 * g / 100;
            printf("%d",T);
        }
        else{
            printf("Angka yang dimasukkan tidak valid");
        }
    return 0;

}
