#include <stdlib.h>
#include <stdio.h>
int linearsearch(int a[],int b,int db)
{
    
    for (int i = 0; i < db; i++)
    {
        if (a[i]==b)
        {
            return i+1;
        } 
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    int a[100],b,ae;
    printf("Kac elemanli bir dizi olusturacaksiniz.\n");
    scanf("%d",&b);
    for (int i = 0; i < b; i++)
    {
        printf("%d. elemani giriniz : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n-----diziniz-----\n");
    for (int i = 0; i < b; i++)
    {
        printf("%d   ",a[i]);
    }
    printf("Lutfen aramak istediginiz elemani giriniz\n");
    scanf("%d",&ae);
    if (linearsearch(a,ae,b)== -1)
    {
        printf("Aradiginiz sayi dizi de bulunamiyor");
    }
    else
    {
        printf("Aradiginiz eleman %d. sirada bulunuyor\n",linearsearch(a,ae,b));
    }
    
    
    system("pause");
    return 0;
}
