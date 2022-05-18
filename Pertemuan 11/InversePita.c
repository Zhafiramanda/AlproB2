// Nama File : HitungKata.c
// Deskripsi : Mesin abstrak untuk menampilkan kalimat dalam sebuah pita dalam keadaan terbalik
// Pembuat : Zhafira Amanda/ 24060121140100
// Tanggal : 18 Mei 2022

#include <stdio.h>
#include <conio.h>
#include "Mesinkar.c"

int main(){
//Kamus
    int length_Pita;
    char str[50];
    int i;

//Algoritma
    length_Pita = HitungChar();

    printf("Mesin Inverse Pita\n");

    if (length_Pita >= 50)
    {
        printf("Karakter dalam pita maksimal 50 termasuk titik");
    }
    else{
        START();
        i = 0;
        while(!EOP()){
            str[i] = CC;
            ADV();
            i++;
        }

        printf("Pita dibaca : ");
        for (int i = 0; i < length_Pita; i++)
        {
            printf("%c", str[i]);
        }

        printf("\nPita inverse : ");
        // melakukan inverse kata
        for (int i = length_Pita-1; i >= 0; i--)
        {
            printf("%c", str[i]);
        }
    }

    getch();
    return 0;
}
