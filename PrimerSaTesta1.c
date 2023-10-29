#include <stdio.h>
// Suma prvih n prirodnih brojeva
int main()
{
    int n;
    printf("Unesite n: ");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    printf("Suma prvih %d brojeva je: %d\n", n, sum);
}