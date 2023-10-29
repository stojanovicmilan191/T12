#include <stdio.h>
// Napisati program koji ispisuje indeks minimalnog i maksimalnog elementa niza u intervalu od c do d
#define MAX_SIZE 50

int main()
{
    int niz[MAX_SIZE], min, max, c, d, n;
    printf("Unesite n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Unesite niz[%d]: ", i);
        scanf("%d", &niz[i]);
    }
    printf("Unesite c: ");
    scanf("%d", &c);
    printf("Unesite d: ");
    scanf("%d", &d);
    min = niz[c];
    max = niz[c];
    for (int i = c; i < d; i++)
    {
        if (niz[i] < min)
        {
            min = niz[i];
        }
        if(niz[i] > max)
        {
            max = niz[i];
        }
    }
    printf("Maksimalni element: %d; Minimalni element: %d\n", max, min);
    return 0;
}