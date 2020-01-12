#include "header.h"

int main()
{
    int arr1[]={4,5,6,7,8};
    int arr2[]={8,7,6,5,4};
    int arr3[]={4,5,6,7,4};
    int arr4[]={67,23,55,87,12,40,22};

    printf("Nilai max arr1 adalah %d \n", max(arr1,5));
    printf("Nilai max arr2 adalah %d \n", max(arr2,5));
    printf("Nilai max arr3 adalah %d \n", max(arr3,5));
    printf("Nilai max arr4 adalah %d \n", max(arr4,5));
    return 0;
}
