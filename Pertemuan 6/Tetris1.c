// Nama File : Tetris1.c
// Deskripsi : Menampilkan sebuah bilangan integer N > 0 yang dimasukan melalui keyboard, dengan susunan karakter ‘*’.
// Pembuat : Zhafira Amanda/ 24060121140100
// Tanggal : 3 April 2022

#include <stdio.h>

int main(){
    // Kamus
    int N,i,j;

    // Algoritma
    printf(" Masukan bilangan integer : ");
    scanf("%d", &N);

    if(N <= 0)
    {
        printf("N harus bilangan positif");
    }
    else
    {
        for(i = N; i > 0; i--)
        {
            for(j = 0; j < i; j++)
            {
               printf("*") ;
            }
            printf("--%d", i);
            printf("\n", N);
        }

    }
    return 0;
}
