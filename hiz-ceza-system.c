#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float orthizz(float yol, float zaman)
{
    float orthiz;
    orthiz = yol / zaman;
    return orthiz;
}

int main(int argc, char const *argv[])
{
    int gidilenyol;
    float yol, zaman, asim;
    bas:

    printf("Lutfen aldiginiz yolu km cinsinden giriniz\n");
    scanf("%f", &yol);
    printf("Lutfen aldiginiz yolu kac saatte aldiginizi giriniz(Lutfen saat cinsinden giriniz)\n");
    scanf("%f", &zaman);
    if (yol > 0 && zaman > 0)
    {
        printf("Ortalama hiziniz = %f km/h 'dir\n", orthizz(yol, zaman));
        printf("Lutfen hangi otoyoldan gittiginizi seciniz\n1-)E5 2-)E4\n");
        scanf("%d", &gidilenyol);
        switch (gidilenyol)
        {
        case 1:
        {
            printf("Gittiginiz yoldaki hiz siniri 110 km/h\n");
            if (orthizz(yol, zaman) > (110 * (130 / 100)))
            {
                asim = orthizz(yol, zaman) - (110 * (130 / 100));

                printf("Hiz sinirini %.1f kadar astiginiz icin odemeniz gereken ceza tutari = 314 Tl\n", asim);
            }
            else if (orthizz(yol, zaman) > (110 * (150 / 100)))
            {
                asim = orthizz(yol, zaman) - (110 * (150 / 100));

                printf("Hiz sinirini %.1f km/h kadar astiginiz icin odemeniz gereken ceza tutari = 1339 Tl\n", asim);
            }
            else
            {
                printf("Hiz sinrini asmamissniz asmadiginiz icin tesekkur ederizz...\n");
            }
            break;
        }
        case 2:
        {
            printf("Gittiginiz yoldaki hiz siniri 90 km/h\n");
            if (orthizz(yol, zaman) > (90 * (130 / 100)))
            {
                asim = orthizz(yol, zaman) - (90 * (130 / 100));

                printf("Hiz sinirini %.1f kadar astiginiz icin odemeniz gereken ceza tutari = 314 Tl\n", asim);
            }
            else if (orthizz(yol, zaman) > (90 * (150 / 100)))
            {
                asim = orthizz(yol, zaman) - (90 * (150 / 100));

                printf("Hiz sinirini %.1f km/h kadar astiginiz icin odemeniz gereken ceza tutari = 1339 Tl\n", asim);
            }
            else
            {
                printf("Hiz sinrini asmamissniz asmadiginiz icin tesekkur ederizz...\n");
            }
            break;
        }
        default:
        {
            printf("Lutfen tanimli degerlerden giriniz.\n");
        }
        }
    }
    else
    {
        printf("Lutfen degerlerinizi kontrol ediniz\n");
        goto bas;
    }

    system("pause");
    return 0;
}
