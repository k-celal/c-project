#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int a[90],i,j,toplam=0;

    for (i = 0; i < 90; i++)
    {
        a[i] = 10+i;
        toplam+=a[i]/10+a[i]%10;
    }
    printf("10 dan 99 a kadar olan sayilarin basamaklari toplami = %d ",toplam);
    



    printf("\nDeveloped By MuyuX\n");
    system ("pause");
    return 0;
}
