// Nama File : Pangkat.c
// Deskripsi : Menuliskan nilai hasil pemangkatan kedua bilangan i dan j
// Pembuat : Zhafira Amanda/ 24060121140100
// Tanggal  : 21 Mei 2022

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

 //Kamus
 int  i, j, a, b, x, y, p;

 //Algoritma
 printf("Menghitung hasil pangkat (i,j) \n " );
 printf("Masukan nilai i : ");
 scanf("%d", &i);
 printf("Masukan nilai j : ");
 scanf("%d", &j);
 Pangkat(i,j);
 return 0;
}
 //Function
void Pangkat(int a,int b){
 int x, y;
    float p = 1;
    if(b > 0){
  for(x = b; x >= 1; x--){
      p = p * a;
     }
 }
 else if (b < 0){
     for(y = b; y <= -1; y++){
         p = p / a;
     }
 }
 else{
     p = 1;
 }
 printf("Hasil pangkatnya adalah %.2f", p);
}
