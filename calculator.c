#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int islem;
    float sayi1, sayi2, sonuc1, sonuc2, carpim = 1;
    int girilensayiadedi;
    int sayilar[100], toplam = 0;
    float ortalama;

menu:
    printf("Lutfen yapmak istediginiz islemi seciniz...\n");
    printf("1.Toplama\n2.Cikarma\n3.Carpma\n4.Bolme\n5.Karekok\n6.Ussu alma\n7.Faktoriyel Hesabi\n8.Ortalama Hesabi\n");
    printf("Cikmak icin -1 degerini giriniz\n");
    scanf("%d", &islem);
    printf("----------------------------------------------------------------\n");

    if (islem == -1)
    {
        goto cikis;
    }

    if (islem > 0 && islem < 8)
    {
        printf("Lutfen 2 tane sayi giriniz\n(isleminiz us alma ise 1.sayi taban 2. sayi us olacaktir!!!)\n(isleminiz faktoriyel ise ilk sayinizin faktoriyeli alinacaktir)\n");
        scanf("%f%f", &sayi1, &sayi2);
    }

    switch (islem)
    {
    case 1:
        printf("isleminizin sonucu = %.1f\n", sayi1 + sayi2);
        
        break;
    case 2:
        printf("isleminizin sonucu = %.1f\n", sayi1 - sayi2);

        
        break;
    case 3:
        
        printf("isleminizin sonucu = %.1f\n", sayi1 * sayi2);
        
        
        break;
    case 4:
        printf("isleminizin sonucu = %.1f\n", sayi1 / sayi2);
        
        
        break;
    case 5:
        sonuc1 = sqrt(sayi1);
        sonuc2 = sqrt(sayi2);
        printf("birinci sayi islem sonucu = %.1f\nikinci sayi islem sonucu = %.1f\n", sonuc1, sonuc2);
        
        
        break;
    case 6:
        sonuc1 = pow(sayi1, sayi2);
        printf("isleminizin sonucu = %.1f\n", sonuc1);
        
        
        break;
    case 7:
        sayi2 = sayi1;
        while (sayi1 > 0)
        {
            if (sayi1 == 0)
            {
                carpim = 1;
            }
            else
            {
                // printf("%d\n",sayi1);
                carpim = carpim * sayi1;
                sayi1--;
            }
        }
        printf("%f sayisinin faktoriyeli = %1.f \n", sayi2, carpim);
        
        
        break;
    case 8:
        printf("Lutfen kac tane sayinin ortalamasini hesaplamak istediginizi giriniz...\n");
        scanf("%d", &girilensayiadedi);
        while (girilensayiadedi > 100 || girilensayiadedi <= 0)
        {
            printf("Lutfen 1-100 arasinda bir deger giriniz\n");
            printf("Lutfen kac tane sayinin ortalamasini hesaplamak istediginizi tekrar giriniz...\n");
            scanf("%d", &girilensayiadedi);
        }
        int i;
        for (i = 0; i < girilensayiadedi; i++)
        {
            printf("Lutfen %d . sayiyi giriniz...\n", i + 1);
            scanf("%d", &sayilar[i]);
            toplam += sayilar[i];
        }
        ortalama = toplam / girilensayiadedi;
        printf("Girilen sayilarin toplami %d\n", toplam);
        printf("Girilen sayialrin ortalamasi %f\n", ortalama);
        
        
        break;
    default:
        printf("Lutfen 1-7 arasinda secim yapiniz...\n");
        

    }
    printf("\n\n");
    goto menu;
cikis:
    printf("Hesaplama islemleri tamamlandi...\n");
    system("pause");
    return 0;
}