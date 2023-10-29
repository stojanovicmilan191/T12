#include <stdio.h>
//Program koji racuna podniz sukcesivnih elemenata sa najvecom sumom
#define MAX_SIZE 20

int main()
{
    int n, a[MAX_SIZE], max = 0, p = 0, i1, i2;
    do
    {
        printf("Unesite n: ");
        scanf("%d", &n);
    } while (!(n <= 20 && n > 0));
    for (int i = 0; i < n; i++)
    {
        printf("Unesite niz[%d]: ", i);
        scanf("%d", &a[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            p = 0;
            for (int k = i; k < j; k++)
            {
                p+=a[k];
            }
            if (i == 0 && j == n)
            {
                max = p;
                i1 = 0;
                i2 = n;
            }
            else if (p > max)
            {
                max = p;
                i1 = i;
                i2 = j - 1;
            }
        }
    }
    printf("Najveci zbir elemenata sukcesivnog podniza je %d, pocetak niza je na indeksu %d a kraj na indeksu %d\n", max, i1, i2);
}