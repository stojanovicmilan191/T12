#include <stdio.h>

//Ispitivanje da li je broj savrsen, savrsen broj je broj koji je jednak zbiru svojih delilaca

#define MAX_SIZE 50

int main()
{
    int a[MAX_SIZE], n, brojac = 0, suma = 0;
    do
    {
        printf("Unesite prirodan broj n: ");
        scanf("%d", &n);
    } while (n < 1);
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            a[brojac] = i;
            brojac++;
            suma += i;
        }
        
    }
    if (suma == n)
    {
        printf("%d = ", n);
        for (int i = 0; i < brojac; i++)
        {
            if (i == brojac - 1)
            {
                printf("%d ", a[i]);
            }
            else
            {
                printf("%d + ", a[i]);
            }
        }
        printf("Broj je savrsen.\n");
    }
    else
    {
        printf("Broj nije savrsen\n");
    }
    return 0;
}