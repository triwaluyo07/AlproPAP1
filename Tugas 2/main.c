#include <stdio.h>
#include <stdlib.h>
///Nama : Tri Waluyo
///Kelas : A11.42013
///Nim : A11.2017.10097

void print_jumlah(int num1,int num2)
{
    int tambah = num1+num2;
    printf("%d + %d = %d \n",num1,num2,tambah);
}
int main()
{
    print_jumlah(15,12);
    print_jumlah(44,29);

    return 0;
}
