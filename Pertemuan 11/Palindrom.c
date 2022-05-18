// Nama File : Palindrom.c
// Deskripsi : Mesin abstrak untuk memeriksa apakah kata itu polindrom
// Pembuat : Zhafira Amanda/ 24060121140100
// Tanggal : 18 Mei 2022

#include <stdio.h>
#include <conio.h>
#include "Mesinkar.c"

int main(){
    //Kamus
    char str[50]; // variable str digunakan untuk menampung kalimat yang ingin di cek palindrom atau bukan
    int i, len, temp = 0;
    int flag = 0;
    len = strlen(str);

    //Algoritma
    len = HitungChar();

    printf("Mesin Palidrome\n");

    if (len >= 50 )
    {
        printf("\n karakter dalam pita maksimal 50 termasuk titik \n");
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
        for ( i = 0; i < len; i++)
        {
            printf("%c", str[i]);
        }

        for(i=0;i < len ;i++){ // looping kalimat yang diberikan
            if(str[i] != str[len-i-1]) { // melakukan penyesuaian setiap hurufnya
                temp = 1; // jika tidak cocok, maka variable temp diisi dengan nilai 1
                break;
            }
        }

        if (temp == 0) {
            printf("\nPALINDROME !\n");
        }
        else {
            printf("\nBUKAN PALINDROME !\n");
        }

    getch();
    return 0;
    }
}
