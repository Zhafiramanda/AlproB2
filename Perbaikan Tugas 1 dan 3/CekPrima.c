// Nama File : CekSPrima.c
// Deskripsi : mengecek bilangan integer sembarang N (N>0) merupakan bilangan prima atau bukan
// Pembuat : Zhafira Amanda/ 24060121140100
// Tanggal  : 21 Mei 2022

#include <stdio.h>

int main(){
    // Kamus
    int N,i,c;

    //Algoritma
    printf("Mengecek bilangan prima atau bukan \n");
    printf("Masukkan bilangan : ");
    scanf("%d", &N);

   for(i = 1; i <= N; i++){
    if(N % i == 0){
        c = 0;
        break;
    }
   }
   if(c == 2){
    printf("Bukan bilangan prima");
   }
   else{
    printf("Bilangan Prima");
   }
   return 0;
}
