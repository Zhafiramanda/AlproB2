// Nama File : CekHari.c
// Deskripsi : Menampilkan nama nama bulan dari nomor bulan ke layar
// Pembuat : Zhafira Amanda/ 24060121140100
// Tanggal : 11 Maret 2022

#include<stdio.h>

int main (){
	//Kamus
	int h;

	//Algoritma
	printf("Membuat Program Cek Bulan \n");
	printf("Masukan nomor Bulan : ");
	scanf("%d", &h);

	switch(h){
		case 1 :
			printf("Januari");
			break;
		case 2 :
			printf("Febuari");
			break;
		case 3 :
			printf("Maret");
			break;
		case 4 :
			printf("April");
			break;
		case 5 :
			printf("Mei");
			break;
		case 6 :
			printf("Juni");
			break;
		case 7 :
			printf("Juli");
			break;
		case 8 :
			printf("Agustus");
			break;
		case 9 :
			printf("September");
			break;
		case 10 :
			printf("Oktober");
			break;
		case 11 :
			printf("November");
			break;
		case 12 :
			printf("Desember");
			break;
		default :
			printf(" Masukan nomor bulan tidak tepat");
	}
	return 0;
}
