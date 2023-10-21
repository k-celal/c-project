#include <stdio.h>
#include <math.h>

// Fonksiyonu tanımlayın, bu fonksiyonun kökünü bulmak istiyoruz.
double f(double x) {
    return x*x-3*x-5;
}

int main() {
    double a, b, epsilon;

    // Başlangıç aralığını ve epsilon değerini girin
    printf("Başlangıç aralığını girin (a, b): ");
    scanf("%lf %lf", &a, &b);
    printf("Epsilon değeri girin: ");
    scanf("%lf", &epsilon);

    // Kök bulma işlemi
    if (f(a) * f(b) >= 0) {
        printf("Bu aralıkta bir kök yok veya kökler aynı işaretli.\n");
        return 1;
    }

    double c;

    while ((b - a) >= epsilon) {
        // Aralığı ortala
        c = (a + b) / 2;

        // Eğer c bir kökse, sonucu yazdır ve döngüyü sonlandır
        if (fabs(f(c)) < epsilon) {
            printf("Kök bulundu: %lf\n", c);
            break;
        }

        // Kök c'nin hangi tarafında bulunuyor?
        if (f(c) * f(a) < 0) {
            b = c;
        } else {
            a = c;
        }
    }

    printf("Yaklaşık kök: %lf\n", (a + b) / 2);
    return 0;
}
