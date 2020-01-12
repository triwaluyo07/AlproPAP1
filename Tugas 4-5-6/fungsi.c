#include "header.h"

void print_nama(char nama[])
{
    printf ("Namanya adalah : %s ",nama);

}

int len_text(char text[])
{
    int panjang;

    panjang=strlen(text);
    return(panjang);
}

int max(int arr_num[],int n)
{

    int kotak;
    kotak =0;

    for(i=0;i<n;i++)
    {
        if(arr_num[i] > kotak)
        {
            kotak = arr_num[i];
        }

    }
    return(kotak);
}
