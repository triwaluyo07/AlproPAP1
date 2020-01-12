#include "header.h"

int main()
{
    char kata[25];
    int pjg;

    printf(" Masukkan kata : ");
    gets(kata);

    pjg = len_text(kata);
    printf("Panjang kata : %d",pjg);
    return 0;
}
