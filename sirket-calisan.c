#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define  sirkettekisi 3
struct sirketbilgi
{
    char makam[30];
    char birim[30];
    float maas;
    int senesi;
};
struct kisibilgi
{
    char ad[15];
    char soyad[15];
    int yas;
    struct sirketbilgi bilgi;
};

 
int main(int argc, char const *argv[])
{
    int kisi;
    
    struct kisibilgi calisanlar[sirkettekisi];
    for (int i = 0; i < kisi; i++)
    {
        fflush(stdin);
        printf("%d. calisanin bilgilerini giriniz...\n",i+1);
        printf("Ad : ");
        scanf("%s",&calisanlar[i].ad);
        printf("Soyad : ");
        scanf("%s",&calisanlar[i].soyad);
        printf("Yas : ");
        scanf("%d",&calisanlar[i].yas);
        printf("Makam : ");
        scanf("%s",&calisanlar[i].bilgi.makam);
        printf("Birim : ");
        scanf("%s",&calisanlar[i].bilgi.birim);
        printf("Maas : ");
        scanf("%f",&calisanlar[i].bilgi.maas);
        printf("Kacinci Senesi : ");
        scanf("%d",&calisanlar[i].bilgi.senesi);
    }
    printf("Girdiginiz Calisanlar Ve bilgileri...\n");
    for (int i = 0; i < kisi; i++)
    {
        printf("Ad : %s\n",calisanlar[i].ad);
        printf("Soyad : %s\n",calisanlar[i].soyad);
        printf("Yas : %d\n",calisanlar[i].yas);
        printf("Makam : %s\n",calisanlar[i].bilgi.makam);
        printf("Birim : %s\n",calisanlar[i].bilgi.birim);
        printf("Maas : %.2f\n",calisanlar[i].bilgi.maas);
        printf("Kacinci Senesi: %d\n",calisanlar[i].bilgi.senesi);
    }
    
    system ("pause");
    return 0;
}
