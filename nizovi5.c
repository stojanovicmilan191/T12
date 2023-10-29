#include <stdio.h>
// Napisati program koj na osnovu matrice A(NxN) formira niz b koji predstavlja sumu elemenata u vrstama matrice
#define MAX_SIZE 50

int main()
{
    int a[MAX_SIZE][MAX_SIZE], b[MAX_SIZE] = {0}, n;
    printf("Unesite n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Unesite %d. element %d. kolone: ", j+1, i+1);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            b[i] += a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("Suma %d. vrste je: %d\n", i+1, b[i]);
    }
    return 0;
}