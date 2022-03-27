// Nama File : SiputNaik.c
// Deskripsi : menentukan berapa hari waktu dibutuhkan siput untuk mencapai ketinggian
// Pembuat : Zhafira Amanda/ 24060121140100
// Tanggal Pembuatan : 26 Maret 2022


#include <stdio.h>

int main(){
    // Kamus
    float N;
    float t;
    float h;

    //Algoritma
    printf("Masukan kedalaman lubang :");
    scanf("%f", &N);

    if(N <= 0){
        printf("Kedalama lubang harus positif");
    }
    else{
        h = 0;
        t = 0;
        while(t >= 0 && t < N){
            t = t + 0.3;
            if( t < N){
                t = t - 0.1;
            }
            h = h +1;
        }
        printf(" Waktu yang dibutuhkan oleh siput adalah %d hari", h);
    }
    return 0;
}
