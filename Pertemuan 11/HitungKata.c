// Nama File : HitungKata.c
// Deskripsi : Mesin abstrak untuk menghitung banyaknya kata yang ada pada pita
// Pembuat : Zhafira Amanda/ 24060121140100
// Tanggal : 18 Mei 2022

#include <stdio.h>
#include <conio.h>
#include "Mesinkar.c"

int main(){
    //Kamus
    char str[100];
  	int i, totalwords;

  	//Algoritma
    printf("Mesin Hitung Kata\n");

    if (totalwords >= 100)
    {
        printf("\nKarakter dalam pita maksimal 100 termasuk titik \n");
    }
    else{
        START();
        i = 0;
        while(!EOP()){
            str[i] = CC;
            ADV();
            i++;
        }

        printf("\nPita dibaca : ");
        for ( i = 0; i < totalwords; i++)
        {
            printf("%c", str[i]);
        }

        i = 0;
        totalwords = 1;

        while(str[i]!='\0')
        {
            //memeriksa apakah karakter saat ini adalah spasi atau baris baru atau karakter tab
            if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
            {
                totalwords++;
            }

            i++;
        }

        printf("\nTotal kata : %d\n", totalwords);
    }

    getch();
	return 0;
}
