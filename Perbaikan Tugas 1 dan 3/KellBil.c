// Nama File : KellBill.c
// Deskripsi : Menentukan kelipatan bilangan terkecil, jika diberikan sebuah array integer A sembarang
// Pembuat : Zhafira Amanda/ 24060121140100
// Tanggal : 21 mei 2022


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

 //Kamus
    int i;
    int A;
    int j;
    int jum = 1;

    // Algoritma
    printf("Menentukan kelipatan bilangan terkecil \n");
    printf("Banyaknya data dalam array : ");
    scanf("%d",&A);

    if(A > 0){
        int T[A];
        for(i = 1; i <= A; i++)
  {
            printf("Masukkan data ke- %d  (urut dari terkecil ke terbesar)  :  ",i);
            scanf("%d", &T[i]);
        }
        for(j = 1; j <= A; j++)
  {
            if(T[j] % jum == 0)
   {
                jum = T[j];
            }
            else
   {
                jum = jum * T[j];
            }
        }
        printf("Kelipatan terkecil nya (KPK) adalah %d", jum);

    }
 else if (A < 0)
 {
        printf("Masukan harus bilangan positif");
    }
    else
    {
     printf("Tidak ada data dalam array");
    }
    return 0;
}
