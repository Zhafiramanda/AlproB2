// Nama File : Faktorial.c
// Deskripsi : Mennghitung nilai faktorial dari sebuah bilangan integer N sembarang
// Pembuat : Zhafira Amanda/ 24060121140100
// Tanggal  : 21 Mei 2022


#include <stdio.h>

int main(){
 //Kamus
 int  N;
 int  i;
 int fact = 1;

 //Algoritma
 printf("Menghitung Nilai Faktorial \n " );
 printf("Masukan nilai N : ");
 scanf("%d", &N);

 for(i = 1; i <= N; i++){
     fact = fact * i;
 }
 printf("Hasil faktorial dari %d adalah %d", N, fact);
}
