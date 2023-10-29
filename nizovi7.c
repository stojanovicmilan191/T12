#include <stdio.h>
// Ispisati svaki moguci trenutak u danu u kome elektronski sat pokazuje vreme takvo da je zbir cifara jednak n
// vreme je u formatu x sati yy minuta zz sekundi
#define MAX_SIZE 50

int main()
{
    int n;
    printf("Unesite n: ");
    scanf("%d", &n);
    for (int i = 0; i <= 23; i++)
    {
        for (int j = 0; j <= 60; j++)
        {
            for (int k = 0; k <= 60; k++)
            {
                if (i / 10 + i % 10 + j / 10 + j % 10 + k / 10 + k % 10 == n)
                {
                    printf("%d sat %d min %d sek\n", i, j, k);
                }
                
            }
            
        }
        
    }
    
}