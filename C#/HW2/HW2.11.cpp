#include <stdio.h>
/*mukemmel say�=kendisi haric pozitif bolenleri tolam�na esit olan say�*/
int main ()
{
    int sayi,n,top=0;
    printf("sayi giriniz");
    scanf("%d",&sayi);
    n=sayi;
    for(int i=1;i<sayi;i++)
    {
        if(sayi%i==0)
            top+=i;

    }
    if(top==n)
        printf("mukemmel sayi");
    else
        printf("mukemmel sayi degil");
    return 0;
}


