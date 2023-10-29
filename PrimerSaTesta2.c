#include <stdio.h>
#include <math.h>

//Per factorial ad Euler 

int main()
{
    int n;
    do
    {
        printf("Unesite broj clanova reda: ");
        scanf("%d", &n);
    } while (n < 1);
    double clan, sum = 0, brojilac;
    for (int i = 0; i < n; i++)
    {
        double fak = 1;
        for (int j = 1; j <= i; j++)
        {
            fak *= j;
        }
        brojilac = pow(-1, i);
        clan = brojilac / fak;
        printf("clan[%d] = %g\n", i, clan);
        sum += clan;
    }
    printf("sum = %g\n", sum);
    printf("e = %g", 1/sum);
}