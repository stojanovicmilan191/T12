#include <stdio.h>
// Napisati program koji odredjuje najveci negativan element u nizu
#define MAX_SIZE 50

int main()
{
    int niz[MAX_SIZE], n;
    printf("Unesite n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Unesite niz[%d]: ", i);
        scanf("%d", &niz[i]);
    }
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (!max && niz[i] < 0)
        {
            max = niz[i];
        }
        else if (niz[i] < 0 && niz[i] > max)
        {
            max = niz[i];
        }
    }
    if (max)
    {
        printf("Najveci negativni element je: %d\n", max);
    }
    else
    {
        printf("Niz ne sadrzi negativne elemente.\n");
    }
    return 0;
}