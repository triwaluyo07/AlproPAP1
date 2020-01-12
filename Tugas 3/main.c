#include <stdio.h>
#include <stdlib.h>
///Nama : Tri Waluyo
///Kelas : A11.42013
///Nim : A11.2017.10097

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
