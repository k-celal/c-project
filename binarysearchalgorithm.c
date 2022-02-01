#include <stdlib.h>
#include <stdio.h>
void sıralama(int d[], int boyut)
{
    for (int i = 0; i < boyut; i++)
    {
        for (int j = 1; j < boyut - i; j++)
        {
            if (d[j - 1] > d[j])
            {
                int temp = d[j];
                d[j] = d[j - 1];
                d[j - 1] = temp;
            }
        }
    }
}
int binarysearch(int d[], int ek, int eb, int ae)
{

    while (ek <= eb)
    {
        int od = (ek + eb) / 2;
        if (d[od] == ae)
        {
            return od;
        }

        if (d[od] < ae)
        {
            ek = (od + 1);
        }
        else
        {
            eb = (od - 1);
        }
    }
return -1;
}

int main(int argc, char const *argv[])
{
    int a[100]={0}, b, ae;
    printf("Kac elemanli bir dizi olusturacaksiniz.\n");
    scanf("%d", &b);
    for (int i = 0; i < b; i++)
    {
        printf("%d. elemani giriniz : ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("\n-----diziniz-----\n");
    for (int i = 0; i < b; i++)
    {
        printf("%d   ", a[i]);
    }

    printf("\n-----Siralanmis diziniz-----\n");
    sıralama(a, b);

    for (int i = 0; i < b; i++)
    {
        printf("%d   ", a[i]);
    }

    while (1)
    {
        printf("\nLutfen aramak istediginiz elemani giriniz\n");
        scanf("%d", &ae);
        sıralama(a, b);
        int bulunansira = binarysearch(a, 0, b - 1, ae);
        if (bulunansira == -1)
        {
            printf("Aradiginiz Eleman Yoktur");
        }
        else
        {
            printf("Aradiginiz eleman %d. sirada \n", bulunansira + 1);
        }
    }

    system("pause");
    return 0;
}
