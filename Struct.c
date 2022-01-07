#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct zaman 
{
    int saat;
    int dakika;
    int saniye;
};
void fark (struct zaman t1,struct zaman t2,struct zaman *fark)
{
    if (t2.saniye>t1.saniye)
    {
        --t1.dakika;
        t1.saniye+=60;
    }
    fark->saniye=t1.saniye-t2.saniye;
    if (t2.dakika>t1.dakika)
    {
        --t1.saat;
        t1.dakika+=60;
    }
    fark->dakika=t1.dakika-t2.dakika;
    fark->saat=t1.saat-t2.dakika;

    printf("Zamanlar arasi fark = %d %d %d",fark->saat,fark->dakika,fark->saniye);
    
    
}
int main(int argc, char const *argv[])
{
    struct zaman  t1,t2,frk;
    printf("Baslangic zamani giriniz(saat,dakika,saniye)\n");
    scanf("%d%d%d",&t1.saat,&t1.dakika,&t1.saniye);
    
    printf("bitis zamani giriniz(saat,dakika,saniye)\n");
    scanf("%d%d%d",&t1.saat,&t1.dakika,&t1.saniye);

    fark(t1,t2,&frk);
    printf("\nDeveloped By MuyuX\n");
    system ("pause");
    return 0;
}
