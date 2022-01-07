#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int a, b, c, d, os;
    srand(time(NULL));
    a = rand() % 5 + 1;
    b = rand() % 5 + 1;
    printf("Zar atiliyor...\nUste gelenlerin toplami = %d\n", a + b);
    c = a + b;
    if (c == 7 || c == 11)
    {
        printf("Oyunu kazandiniz... Tebrikler\n");
        goto cikis;
    }
    else if (c == 2 || c == 3 || c == 12)
    {
        printf("Oyunu kaybettiniz... Gecmis olsun\n");
        goto cikis;
    }
    else
    {
        printf("oyuncu sayiniz = %d olarak belirlendi...\n",c);
    }
    
    os = c;
    while (os != d)
    {
       
        a = rand() % 5 + 1;
        b = rand() % 5 + 1;
        d = a + b;
        printf("Zarlar tekrar atiliyor...\nUste gelenlerin toplami = %d\n", d);

        if (d == 7)
        {
            printf("oyunu kaybettiniz\n");
            goto cikis;
        }
    }

    printf("Oyunu kazandiniz tebrikler \n");

cikis:

    printf("\nDeveloped By MuyuX\n");
    system("pause");
    return 0;
}
