#include <stdlib.h>
#include <stdio.h>
#define max 100
void selectionsort(int d[], int boyut)
{
    int eki;
    for (int i = 0; i < boyut;i++)
    {
        eki=i;
        for (int j = i; j < boyut; j++)
        {
            if (d[j]<d[eki])
            {
                eki=j;
            }
        }
        
        int temp=d[i];
        d[i]=d[eki];
        d[eki]=temp;
    }
    
}
int main(int argc, char const *argv[])
{
    int d[max] = {0}, boyut;
    printf("Kac elemanli bir dizi olusturacaksiniz\n");
    scanf("%d", &boyut);
    for (int i = 0; i < boyut; i++)
    {
        printf("%d. Elemani giriniz\n", i + 1);
        scanf("%d", &d[i]);
    }
    for (int i = 0; i < boyut; i++)
    {
        printf("%d   ", d[i]);
    }
    printf("\nSiralamadan Sonraki dizi\n");
    selectionsort(d, boyut);
    for (int i = 0; i < boyut; i++)
    {
        printf("%d   ", d[i]);
    }
    system("pause");
    return 0;
}
