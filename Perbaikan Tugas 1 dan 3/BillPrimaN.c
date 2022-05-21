// Nama File : BilPrimaN.c
// Deskripsi : Mencetak bilangan prima sampai dengan bilangan integer sembarang N
// Pembuat : Zhafira Amanda/ 24060121140100
// Tanggal  : 21 Mei 2022

#include <stdio.h>

int main(){
 //Kamus
 int  N;
 int  i;
 int  j;
 int  b;

 //Algoritma
 printf("Mencetak Bilangan Prima \n " );
 printf("Masukan nilai N : ");
 scanf("%d", &N);
 printf("Bilangan Primanya adalah ");

 for(i = 2; i <= N; ++i)
 {
  b = 0;
       for(j=2; j<=i/2; ++j)
       {
        if(i % j == 0){
         b = 1;
             break;
        }
       }
       if(b == 0)
         printf("%d,", i);
 }

 return 0;
}
