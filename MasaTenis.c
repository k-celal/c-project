#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 1
struct oyuncu 
{
    char oyuncu_adi[30];
    char oyuncu_soyadi[30];
    int oyuncu_yasi;
    int seviye;

};
 struct ekip
{
    char ekip_adi[30];
    struct oyuncu oyuncu1;
    struct oyuncu oyuncu2;
};
void oyuncuyaz(struct oyuncu o)
{
    printf("oyuncu adi: %s\n",o.oyuncu_adi);
    printf("oyuncu soyadi: %s\n",o.oyuncu_soyadi);
    printf("oyuncu yasi: %d\n",o.oyuncu_yasi);
    printf("oyuncu seviye: %d\n",o.seviye);

}
void ekipyaz(struct ekip e)
{
    printf("ekibin adi : %s \n",e.ekip_adi);
    printf("Oyuncu 1: \n");
    oyuncuyaz(e.oyuncu1);
    printf("Oyuncu 2: \n");
    oyuncuyaz(e.oyuncu2);

}
void oyuncutanim(struct oyuncu *o)
{
    fflush(stdin);
    printf("Oyuncu adini giriniz\n");
    gets(o->oyuncu_adi);
    printf("Oyuncu Soyadini giriniz\n");
    gets(o->oyuncu_soyadi);
    printf("Oyuncu yasini giriniz\n");
    scanf("%d",&o->oyuncu_yasi);
    printf("Oyuncu seviye giriniz\n");
    scanf("%d",&o->seviye);


}
void ekiptanim(struct ekip *e)
{
    fflush(stdin);
    printf("Ekibin adini giriniz : \n");
    gets(e->ekip_adi);
    printf("Oyuncu 1 : \n");
    oyuncutanim(&e->oyuncu1);
    printf("Oyuncu 2 : \n");
    oyuncutanim(&e->oyuncu2);
}

int main(int argc, char const *argv[])
{
    struct ekip tab[N];
    for (int i = 0; i < N; i++)
    {
        printf("Ekip %d : \n",i+1);
        ekiptanim(&tab[i]);

    }
    printf("\n----------Ekiplerimiz----------\n");
    for (int i = 0; i < N; i++)
    {
        printf("Ekip %d : \n",i+1);
        ekipyaz(tab[i]);
    }


    
    


    printf("\nDeveloped By MuyuX\n");
    system ("pause");
    return 0;
}

