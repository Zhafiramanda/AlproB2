// Nama File : CekSeriPoistif.c
// Deskripsi : menerima 3 buah tahanan yang dimasukan menggunakan keyboard dan menghasilkan total tahanan jika dirangkai seri
// Pembuat : Zhafira Amanda/ 24060121140100
// Tanggal : 11 Maret 2022

#include<stdio.h>

int main(){
    // Kamus
    int t1,t2,t3,total;

    // Algoritma
    printf(" Membuat program cek seri positif \n");
    printf(" Masukan nomor tahanan 1 :");
    scanf("%d", &t1);
    printf(" Masukan nomor tahanan 2 :");
    scanf("%d", &t2);
    printf(" Masukan nomor tahanan 3 :");
    scanf("%d", &t3);

    if (t1 >= 0 & t2 >= 0 & t3 >= 0){
        total = t1 + t2 + t3;
        printf(" Maka total tahanan adalah : %.2d", total);
    }
    else{
        printf("Masukan tahanan tidak boleh negatif");
    }
    return 0;
}
