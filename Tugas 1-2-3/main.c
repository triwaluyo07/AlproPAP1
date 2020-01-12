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

void print_jumlah(int num1,int num2)
{
    int tambah = num1+num2;
    printf("%d + %d = %d \n",num1,num2,tambah);
}

float hitung(int num1,int num2,char operasi)
{
    float hasil;

    if(operasi=='+')
    {
        hasil = num1+num2;
    }
    else if(operasi=='-')
        {
            hasil = num1-num2;
        }
        else if(operasi=='x')
            {
            hasil = num1*num2;
            }
            else if(operasi=='/')
                {
                    hasil = num1/num2;
                }
    return(hasil);
}

int main()
{
    printf("===============================\n");
    printf("TUGAS 1 \n");
    printf("===============================\n");
    print_identitas();
    printf("===============================\n");

    printf("TUGAS 2 \n");
    print_jumlah(3,12);
    print_jumlah(13,19);

    printf("===============================\n");
    printf("TUGAS 3 \n");

    float hasil;

    hasil= hitung(12,15,'+');
    printf("%d %c %d = %.2f \n", 12, '+', 15 ,hasil );
    hasil= hitung(12,15,'-');
    printf("%d %c %d = %.2f \n", 12, '-', 15 ,hasil );
    hasil= hitung(12,15,'x');
    printf("%d %c %d = %.2f \n", 12, 'x', 15 ,hasil );
    hasil= hitung(12,15,'/');
    printf("%d %c %d = %.2f \n", 12, '/', 15 ,hasil );
    return 0;
}
