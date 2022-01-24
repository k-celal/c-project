#include <stdlib.h>
#include <stdio.h>
#define max 100
void bubblesort(int d[], int boyut)
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
    bubblesort(d, boyut);
    for (int i = 0; i < boyut; i++)
    {
        printf("%d   ", d[i]);
    }
    system("pause");
    return 0;
}
