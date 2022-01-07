#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 1
struct isci
{
    char isci_ad[30];
    char isci_soyad[30];
    int isci_yas;
};
struct urun
{
    char referans[30];
    int fiyat;
};
struct magaza
{
    char magaza_adi[30];
    char magaza_sokagi[30];
    char magaza_mahalle[30];
    char magaza_telefon[15];
    int satıs_tutar;
    struct isci isci1;
    struct isci isci2;
    struct urun urun1;
    struct urun urun2;
    struct urun urun3;
    struct urun urun4;
    struct urun urun5;
};
void isci_ekle(struct isci *store)
{
    fflush(stdin);
    printf("Ad : ");
    gets(store->isci_ad);
    printf("Soyad : ");
    gets(store->isci_soyad);
    printf("Yas : ");
    scanf("%d",&store->isci_yas);
}
void urun_ekle(struct urun *store)
{
    fflush(stdin);
    printf("Referan kodu : \n");
    gets(store->referans);
    printf("Fiyat : ");
    scanf("%d", &store->fiyat);
}
void magaza_ekle(struct magaza *store)
{
    fflush(stdin);
    printf("Magazanin adini giriniz\n");
    gets(store->magaza_adi);
    printf("Magazanin sokagi giriniz\n");
    gets(store->magaza_sokagi);
    printf("Magazanin mahallesini giriniz\n");
    gets(store->magaza_mahalle);
    printf("Magazanin telefon numarasini giriniz\n");
    gets(store->magaza_telefon);
    printf("Magazanin satis tutarini giriniz\n");
    scanf("%d", &store->satıs_tutar);
    printf("1.iscinin bilgisini giriniz :\n");
    isci_ekle(&store->isci1);
    printf("2.iscinin bilgisini giriniz :\n");
    isci_ekle(&store->isci2);
    printf("1.Urun bilgisi giriniz : \n");
    urun_ekle(&store->urun1);
    printf("2.Urun bilgisi giriniz : \n");
    urun_ekle(&store->urun2);
    printf("3.Urun bilgisi giriniz : \n");
    urun_ekle(&store->urun3);
    printf("4.Urun bilgisi giriniz : \n");
    urun_ekle(&store->urun4);
    printf("5.Urun bilgisi giriniz : \n");
    urun_ekle(&store->urun5);
}
void urun_yazdir(struct urun *store)
{
    printf("Urun Referans Kodu : %s\n",store->referans);
    printf("Fiyat : %d\n",store->fiyat);
}
void isci_yazdir(struct isci *store)
{
    printf("Ad : %s\n",store->isci_ad);
    printf("Soyad : %s\n",store->isci_soyad);
    printf("Yas : %d\n",store->isci_yas);
}
void yasli_isci(struct isci *i1,struct isci *i2)
{
    if (i1->isci_yas>i2->isci_yas)
    {
        printf("%s adli isci daha yasli\n",i1->isci_ad);
    }
    else
    {
        printf("%s adli isci daha yasli\n",i2->isci_ad);
    }
    
}
void magaza_yazdir(struct magaza *store)
{
    printf("Magaza Adi : %s\n",store->magaza_adi);
    printf("Magaza Sokagi : %s\n",store->magaza_sokagi);
    printf("Magaza Mahalle : %s\n",store->magaza_mahalle);
    printf("Magaza Telefon : %s\n",store->magaza_telefon);
    printf("Magaza satis tutari : %d\n",store->satıs_tutar);
    printf("\n------isci bilgileri------\n");
    printf("\n1. isci bilgileri\n");
    isci_yazdir(&store->isci1);
    printf("\n2. isci bilgileri\n");
    isci_yazdir(&store->isci2);
    printf("\n------urun bilgileri------\n");
    printf("\n1.Urun Bilgileri\n");
    urun_yazdir(&store->urun1);
    printf("\n2.Urun Bilgileri\n");
    urun_yazdir(&store->urun2);
    printf("\n3.Urun Bilgileri\n");
    urun_yazdir(&store->urun3);
    printf("\n4.Urun Bilgileri\n");
    urun_yazdir(&store->urun4);
    printf("\n5.Urun Bilgileri\n");
    urun_yazdir(&store->urun5);
    printf("yasli isci : ");
    yasli_isci(&store->isci1,&store->isci2);
}
void karsilastir(struct magaza *m1,struct magaza *m2)
{
    if (m1->satıs_tutar>m2->satıs_tutar)
    {
        printf("%s magazasinin satis tutari daha buyuktur",m1->magaza_adi);
    }
    else
    {
        printf("%s magazasinin satis tutari daha buyuktur",m2->magaza_adi);
    }
    
}

int main(int argc, char const *argv[])
{
    struct magaza store[N];
    int i;
    for (i = 0; i < N; i++)
    {
        printf("Magaza-%d : \n", i + 1);
        magaza_ekle(&store[i]);
    }
    system("cls");
    for (i = 0; i < N; i++)
    {
        printf("Magaza-%d : \n", i + 1);
        magaza_yazdir(&store[i]);
        
    }
    i=0;
    karsilastir(&store[i],&store[i+1]);
    
    printf("\nDeveloped By MuyuX\n");
    system("pause");
    return 0;
}
