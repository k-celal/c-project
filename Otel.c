#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 2
struct musteri
{
    char musteri_ismi[30];
    char musteri_soyismi[30];
    int kahvalti; //0 sa hayır 1 se evet
    int aksamyemegi;
    int oteltip; // 1 se otel yok 2 se 2 3 se 3
    int yanliz;  //1 sa arkadas // 0 yanliz
};
void musteriekle(struct musteri *a)
{
    fflush(stdin);
    printf("Musteri Adi : ");
    gets(a->musteri_ismi);
    printf("Musteri Soyadi : ");
    gets(a->musteri_soyismi);
    printf("kahvalti istiyor mu? : (evet 1 hayir 0)");
    scanf("%d", &a->kahvalti);
    printf("aksam yemegi istiyor mu? : (evet 1 hayir 0)");
    scanf("%d", &a->aksamyemegi);
    printf("otel tipi nedir? : (1 = otel yok 2 = 2 yildiz 3 = 3 yildiz)");
    scanf("%d", &a->oteltip);
    printf("yanliz mi arkadasi ile mi? : (0 yanliz 1 arkadas ile)");
    scanf("%d", &a->yanliz);
}
void musteriyazdir(struct musteri *b)
{
    /*printf("Musteri Adi : %s\n", b->musteri_ismi);
    printf("Musteri Soyadi : %s \n", b->musteri_soyismi);
    b->kahvalti == 1 ?  : printf("Kahvaltı durumu : istemiyor\n");
    b->aksamyemegi == 1 ? printf("Aksam Yemegi durumu : istiyor\n") : printf("Aksam yemegi durumu : istemiyor\n");
    if (b->oteltip == 1)*/
    if (b->kahvalti == 1)
    {
        printf("Kahvalti durumu : istiyor\n");
    }
    else
    {
        printf("Aksam yemegi durumu : istemiyor\n");
    }
    if (b->aksamyemegi == 1)
    {
        printf("Aksam Yemegi durumu : istiyor\n");
    }
    else
    {
        printf("Aksam yemegi durumu : istemiyor\n");
    }
    if(b->oteltip==1)
    {
        printf("Otel de konaklamiyor\n");
    }
    else if (b->oteltip == 2)
    {
        printf("2 yildizli otelde konakliyor\n");
    }
    else if (b->oteltip == 3)
    {
        printf("3 yildizli otelde konakliyor\n");
    }
    else
    {
        printf("Yanlis giris yapilmis...\n\n");
    }
    b->yanliz == 1 ? printf("arkadasi ile kaliyor\n") : printf("yanliz kaliyor\n");
}
int fatura(struct musteri *b)
{
    int toplam, yemek;
    if (b->kahvalti == 1)
    {
        yemek += 15;
    }
    if (b->aksamyemegi == 1)
    {
        yemek += 35;
    }
    if (b->oteltip == 3)
    {
        toplam += 100;
    }
    else if (b->oteltip == 2)
    {
        toplam += 75;
    }
    if (b->yanliz == 1)
    {
        yemek *= 2;
    }
    toplam += yemek;
    return toplam;
}
int main(int argc, char const *argv[])
{
    struct musteri m[N];
    for (int i = 0; i < N; i++)
    {
        printf("%d. Musteri\n", i + 1);
        musteriekle(&m[i]);
        musteriyazdir(&m[i]);
    }

    printf("iki yildizli secen musteriler\n");

    for (int i = 0; i < N; i++)
    {
        if (m[i].oteltip == 2)
        {
            printf("%d. Musteri = \n");
            musteriyazdir(&m[i]);
            
        }
    }

    printf("\nMusteri faturalari\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d.Musteri Fatura = %d\n",i+1,fatura(&m[i]));
        
    }

    printf("\nDeveloped By MuyuX\n");
    system("pause");
    return 0;
}
