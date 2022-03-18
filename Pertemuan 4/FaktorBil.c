// Nama File : FaktorBil.c
// Deskripsi : Menampilkan faktor dari angka inputan N
// Pembuat : Zhafira Amanda/ 24060121140100
// Tanggal : 18 Maret 2022

#include <stdio.h>

int main(){
    // Kamus
    int N,i;

    // Algoritma
    printf("menentukan faktor dari bilangan?");
    scanf("%d", &N);
    for(i = 1; i <= N; i++){
        if(N % i == 0){
            printf("%d", i);
        }
    }
    return 0;
}
