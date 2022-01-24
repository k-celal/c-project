#include <stdlib.h>
#include <stdio.h>
#define max 100
void insertionsort(int d[], int boyut)
{
    int e1,e2;
    
    for (int i = 1; i < boyut; i++)
    {
        e1=d[i];
        e2=i-1;
        while (e2>=0&&d[e2]>e1)
        {
            d[e2+1]=d[e2];
            e2--;
        }
        d[e2+1]=e1;
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
    insertionsort(d, boyut);
    for (int i = 0; i < boyut; i++)
    {
        printf("%d   ", d[i]);
    }
    system("pause");
    return 0;
}
