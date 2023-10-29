#include <stdio.h>

//Prosti brojevi u intervalu od n do m

int main()
{
    int n, m;
    do
    {
        printf("Unesite n: ");
        scanf("%d", &n);
        printf("Unesite m: ");
        scanf("%d", &m);
    } while (n > m);
    for (int i = n; i < m; i++)
    {
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0 && j != 1)
            {
                break;
            }
            if (j == i - 1)
            {
                printf("%d\n", i);
            }
            
        }
        
    }
    
}