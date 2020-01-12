#include <stdio.h>
#include <stdlib.h>
///Nama : Tri Waluyo
///Kelas : A11.42013
///Nim : A11.2017.10097

void print_identitas()
{
    char nim[15];
    char nama[25];
    char alamat[20];

    strcpy(nama, "Tri Waluyo");
    strcpy(nim, "A11.2017.10097");
    strcpy (alamat, "Karangejo,Semarang");

    printf("NIM\t : %s \n",nim);
    printf("Nama\t : %s \n",nama);
    printf("Alamat\t : %s \n",alamat);
}
int main()
{
    printf("================\n");
    print_identitas();
    printf("================\n");

    return 0;
}
