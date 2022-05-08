// Nama File : CountSort.c
// Deskripsi : Mnegurutkan data dengan counting sorting
// Pembuat : Zhafira Amanda
// Tanggal Pembuatan : Sabtu, 7 Mei 2022

#include <stdio.h>

void CountingSort(int arr[], int n)
{
    // Kamus Lokal
    int i;
    int j;
    int k;
    int count[10];

    // Algoritma
    for (i = 0; i < 10; i++)
    {
        count[i] = 0;
    }
    for (i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    for (i = 0, j = 0; i < 10; i++)
    {
        for (k = 0; k < count[i]; k++)
        {
            arr[j] = i;
            j++;
        }
    }
}

int main()
{
    //Kamus
    int L[20];
    int temp;
    int i;
    int j;
    int n=6;
    int idx;

    //Algoritma
    printf("Pengurutan berdasarkan Counting Sort \nmasukkan %d elements: \n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &L[i]);
    }

    printf("\nsebelum sorting: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", L[i]);
    }

    for(i = 0; i < (n-1); i++)
    {
        idx = i;
        for(j = i+1; j < n; j++)
        {
            if(L[j] < L[idx])
            {
                idx = j;
            }
        }
        temp = L[i];
        L[i] = L[idx];
        L[idx] = temp;
    }
    printf("\n setelah sorting: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", L[i]);
    }
    printf("\n");
}
