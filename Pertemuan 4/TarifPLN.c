// Nama File : TarifPLN.c
// Deskripsi : Menampilkan besarnya tarif listrik dari 2 golongan dengan ketentuan pemaikaian minimal 100 kwh dan untuk pemakaian 1000kwh dan diatasanya dikenakan tamabahan sebesar 10% dari total pembayaran
// Pembuat : Zhafira Amanda/ 24060121140100
// Tanggal : 18 Maret 2022

#include <stdio.h>

int main(){
    // Kamus
    int g, p;

    //Algoritma
    printf("Masukkan golongan tarif listrik : ");
    scanf("%d",&g);
    printf("Masukkan jumlah pemakaian dalam KWH : ");
    scanf("%d", &p);
    if(g == 1){
        if(p > 0 && p <= 100){
            printf("%d",100*1000);
        }
        else if (p > 100 && p < 1000){
            printf("%d",p*1000);
        }
        else if (p >=1000){
            printf("%d", p *1000 + (p *1000 *10 /100));
        }
        else{
            printf("Angka pemakaian harus diatas 0 KWH");
        }
    }
    else{
        if(p > 0 && p <= 100){
            printf("%d",100*2000);
        }
        else if (p > 100 && p < 1000){
            printf("%d",p*2000);
        }
        else if (p >=1000){
            printf("%d", p*2000 + (p*2000*10/100));
        }
        else{
            printf("Angka pemakaian harus diatas 0 KWH");
        }
    }
    return 0;
}
