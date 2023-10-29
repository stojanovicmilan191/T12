#include <stdio.h>
#include <math.h>

// Zbir sume aritmeticke progresije clanova niza sa parnim indeksima i sume geometrijske progresije clanova niza sa neparnim indeksima

int main()
{
    int gp = 0, ap = 0, n, a , k;
    printf("Unesite n: ");
    scanf("%d", &n);
    printf("Unesite a: ");
    scanf("%d", &a);
    printf("Unesite k: ");
    scanf("%d", &k);
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            ap += a + k * (i - 1);
        }
        else
        {
            gp += a*pow(k, i - 1);
        }
    }
    printf("Suma aritmeticke progresije za parne brojeve: %d\n", ap);
    printf("Suma geometrijske progresije za neparne brojeve: %d\n", gp);
    printf("Ukupno: %d\n", ap + gp);
    return 0;
}