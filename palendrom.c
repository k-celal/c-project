#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    
    char palindrom[20];
    char ters[20];
    printf("Lutfen palindrom oldugunu dusunugunuz kelimeyi giriniz...\n");
    gets(palindrom);
     
    strcpy(ters,palindrom);
    strrev(ters);
    if (strcmp(palindrom, ters) == 0)
    {
        printf("%s kelimesi bir palindrom dur \n", palindrom);
    }
    else
    {
        printf("Girdiginiz kelime palindrom degilir");
    }
    
    
    system("pause");
    return 0;
}
