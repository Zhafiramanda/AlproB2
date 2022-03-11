// Nama File : CekProsesBil.c
// Deskripsi : Menampilkan klasifikasi hasil proses akhir bilangan N pada layar
// Pembuat : Zhafira Amanda/ 24060121140100
// Tanggal : 11 Maret 2022

#include<stdio.h>

int main(){
    // kamus
    int N, h;

    //algoritma
    printf(" Program Cek proses bilangan \n");
    printf("masukkan nilai N =");
    scanf("%d", &N);
    if (N % 2 == 0){
        h = N + 3;
        if (h % 5 == 0){
            h = h + 5;
        printf("hasilnya adalah %d",h);
        }
        else {
            h = h + 2;
        printf("hasilnya adalah %d",h);
        }
    }
    else {
        h = N + 2;
        if (h % 3 == 0){
            h = h + 4;
        printf("hasilnya adalah %d",h);
        }
        else {
            h = h + 1;
        printf(" hasilnya adalah %d",h);
        }
    }
    return 0;
}
