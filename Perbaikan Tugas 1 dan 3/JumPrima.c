// Nama File : JumPrima.c
// Deskripsi : Menampilkan bilangan prima yang dapat dibentuk dari bilangan integer  N sembarang
// Pembuat : Zhafira Amanda/ 24060121140100
// Tanggal  : 21 Mei 2022

#include <stdio.h>

int main()
{
 //Kamus
    int i;
    int j;
    int b;
    int N;
    int S = 0;

 //Algoritma
 printf("Menampilkan Jumlah Bilangan Prima \n");
    printf("Masukkan Bilangan Integer :");
    scanf("%d", &N);
 if (N > 0)
 {
  for(i = 2; i <= N; i++)
 {
  b = 1;
  for(j = 2; j <= i/2 ; j++)
  {
   if(i % j == 0)
   {
    b = 0;
    break;
   }
  }
 if (b == 1)
 {
  S += i;
 }
 }
 printf("Jumlah deret bilangannya adalah Sn = %d", S);
 }
 else
 {
  printf("Tidak ada bilangan prima, sehingga jumlahannya Sn=0");
 }

    return 0;
}
