#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int yuzlerb(int m)
{
    int yuz;
    yuz = (m / 100) % 10;
    if (yuz == 3 || yuz == 5)
    {
        return m;
    }
    else
    {
        return 0;
    }
    
}
int main(int argc, char const *argv[])
{
    time_t time;
    srand(time);
    int *d1 = malloc(30 * (sizeof(int))), i, toplam=0;
    for (i = 0; i < 30; i++)
    {

        *(d1 + i) = rand() % 1001 + 1000;
    }
    for (i = 0; i < 30; i++)
    {
        
        printf("%d\n", *(d1 + i));
    }
    for ( i = 0; i < 30; i++)
    {
        if (yuzlerb(*(d1+i))!=0)
        {
            printf("yuzler basamaginda 3 ve 5 olan sayilar %d\n",yuzlerb(*(d1+i)));
        }
        
        toplam+=yuzlerb(*(d1+i));
    }
    printf("yuzler basamagında 3 ve 5 olan sayilarin toplami = %d\n",toplam);

    printf("\nDeveloped By MuyuX\n");
    system("pause");
    return 0;
}
