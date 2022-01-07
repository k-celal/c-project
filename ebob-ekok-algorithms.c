#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int sayi1, sayi2, buyuk, kucuk, kalan;

    do
    {
        printf("Lutfen ebobunu bulmak istediginiz sayilari sirasi ile giriniz...\n");
        scanf("%d%d", &sayi1, &sayi2);

    } while (sayi1 <= 0 || sayi2 <= 0);

    if (sayi1 > sayi2)
    {
        buyuk = sayi1;
        kucuk = sayi2;
    }
    else
    {
        buyuk = sayi2;
        kucuk = sayi1;
    }
    kalan = buyuk % kucuk;

    while (kalan != 0)
    {
        buyuk = kucuk;
        kucuk = kalan;
        kalan = buyuk % kucuk;
    }

    printf("Ebob(%d,%d) = %d\n", sayi1, sayi2, kucuk);

    system("pause");
    return 0;
}
