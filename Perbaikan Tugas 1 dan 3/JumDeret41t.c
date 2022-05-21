// Nama File : JumDeret41t.c
// Deskripsi : Menghasilkan sebuah  deret bilangan sesuai skema pemrosesan
// Pembuat : Zhafira Amanda/ 24060121140100
// Tanggal : 21 mei 2022

#include <stdio.h>

int main (){
 //Kamus
 int N;
 int i;
 int j;
 int Sn;

 //Algoritma
 printf("Membuat Program susunan '*' \n");
 printf("Masukan nilai N (N > 0)  : ");
 scanf("%d", &N);
 j = 0;
 Sn = 0;

 if(N > 0)
 {
  for (i = 1; i <= N; i++)
  {
      Sn = Sn + (0.5)*i*(i+1);
      j = j + i;
   printf("%i,", j);
  }
 }
 else
 {
  printf("tidak ada Deret Bilangan, sehingga ");
 }
    printf("Sn= %i, ", Sn);

 return 0;
}
