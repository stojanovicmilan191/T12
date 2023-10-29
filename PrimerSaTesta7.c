#include <stdio.h>
#include <stdlib.h>

//Formirati niz C, C[i] = |A[i] - B[i]|

#define MAX_SIZE 50

int main()
{
    int a[MAX_SIZE], b[MAX_SIZE], c[MAX_SIZE], n;
    do
    {
        printf("Unesite n: ");
        scanf("%d", &n);
    } while (n < 1);
    for (int i = 0; i < n; i++)
    {
        printf("Unesite a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Unesite b[%d]: ", i);
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        c[i] = abs(a[i] - b[i]);
    }
    printf("Dobijeni niz je: [");
    for (int i = 0; i < n; i++)
    {
        if (i == n-1)
        {
            printf(" %d ]\n", c[i]);
        }
        else
        {
            printf(" %d,", c[i]);
        }
        
    }
    
}