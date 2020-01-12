#include "header.h"

///Nama : Tri Waluyo
///Kelas : A11.42013
///Nim : A11.2017.10097

int main()
{
    printf("======================================\n");
    printf("\t\tTugas 4 \n");
    printf("======================================\n");

    print_nama("Anton Suryanto\n");
    print_nama("Muhammad Khamdan\n");
    print_nama("Habibah Sarawati\n");
    print_nama("Lhatifatun Nikmah\n");


    printf("======================================\n");
    printf("\t\tTugas 5 \n");
    printf("======================================\n");

    char kata[25];
    int pjg;

    printf(" Masukkan kata : ");
    gets(kata);

    pjg = len_text(kata);
    printf("Panjang kata : %d\n",pjg);

    printf("======================================\n");
    printf("\t\tTugas 6 \n");
    printf("======================================\n");

    int arr1[]={4,5,6,7,8};
    int arr2[]={8,7,6,5,4};
    int arr3[]={23,51,22,31,61,11,32,42};
    int arr4[]={67,23,55,87,12,40,22};

    printf("Nilai max arr1 adalah %d \n", max(arr1,5));
    printf("Nilai max arr2 adalah %d \n", max(arr2,5));
    printf("Nilai max arr3 adalah %d \n", max(arr3,5));
    printf("Nilai max arr4 adalah %d \n", max(arr4,5));
    return 0;
}
