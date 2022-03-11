// Nama File : CekBilSemb.c
// Deskripsi : Melakukan klasifikasi proses dan menampilkan output i dilayar
// Pembuat : Zhafira Amanda/ 24060121140100
// Tanggal : 11 Maret 2022

#include <stdio.h>

int main() {
	//Kamus
	int i;

	//Algoritma
	printf("Membuat Program Cek Bilangan Sembarang \n");
	printf("Masukkan angka : ");
	scanf("%d",&i);

	if (i < 0) {
		printf("Bilangan bulat negatif \n");
	}
	else if (i == 0) {
		printf("Bilangan nol \n");
	}
	else if (i > 0){
		printf("Bilangan bulat positif \n");
	}
	else {
		printf("Bukan termasuk sebuah bilangan \n");
	}
	return 0;
}
