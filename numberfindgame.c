#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    static int sayi = 1, RANDOM, sayac;
    printf("Sayiyi bulma oyununa hos geldiniz\n");

    printf("1.oyuncu bulunacak sayiyi girsin\n");
    scanf("%d", &RANDOM);

    system("cls");
    printf("ikinci oyuncu bilgisayar basina gecsin ve oyun baslasin\n");

bas:
    printf("Lutfen tahmin ettiginiz sayiyi giriniz\n");
    scanf("%d", &sayi);

    if (sayi < 150 && sayi > 0)
    {
        while (sayi > 0 && sayi < 150)
        {

            if (sayi > RANDOM)
            {
                sayac++;
                printf("Buyuk sayi girdiniz Lutfen biraz kucultun\n");
                scanf("%d", &sayi);
            }
            else if (sayi < RANDOM)
            {
                sayac++;
                printf("Kucuk sayi girdiniz Lutfen biraz buyultun\n");
                scanf("%d", &sayi);
            }
            else if (sayi == RANDOM)
            {
                sayac++;
                printf("Bingooo aklimizdaki sayiyi %d. denemede buldunuz Tebrikler\n", sayac);
                break;
            }
        }
    }
    else
    {
        printf("Lutfen 0-150 arasinda bir deger giriniz\n");
        goto bas;
    }
    printf("Oyunumuz bitmistir oynadiginiz icin tesekkurler\n");
    system("pause");
    return 0;
}
