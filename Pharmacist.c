#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 3
typedef struct eczacı
{
    char ilac_adi[20];
    int adet;
    float fiyat;
}data;
void secici(struct eczacı ilac)
{
    if (ilac.adet>20)
    {
        printf("%s adli ilac adeti 20 den azdir dikkat ediniz guncel adet = %d\n",ilac.ilac_adi,ilac.adet);
    }
    
}

int main(int argc, char const *argv[])
{
    
    data veriler[N];
    for (int i = 0; i < N; i++)
    {
        printf("%d. ilac adini giriniz\n",i+1);
        gets(veriler[i].ilac_adi);
        printf("%d. ilac adetini giriniz\n",i+1);
        scanf("%d",&veriler[i].adet);
        printf("%d. ilac fiyatini giriniz\n",i+1);
        scanf("%d",&veriler[i].fiyat);
        fflush(stdin);
    }
    printf("ILAC ADI\n");
    printf("================\n");

    for (int i = 0; i < N; i++)
    {
        secici(veriler[i]);
    }
    


    printf("\nDeveloped By MuyuX\n");
    system ("pause");
    return 0;
}
