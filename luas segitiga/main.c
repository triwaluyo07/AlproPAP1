#include "header.h"

///Nama : Tri Waluyo
///Kelas : A11.4203
///Nim : A11.2017.10097

int main()
{
    float alas,tinggi,hasil;

    printf("Alas : ");
    scanf("%f",&alas);

    printf("Tinggi : ");
    scanf("%f",&tinggi);

    hasil= hitung(alas,tinggi);

    printf("Luas segitiga : %.2f",hasil);
    return 0;
}
