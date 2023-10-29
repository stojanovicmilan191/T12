#include <stdio.h>
#include <math.h>
#include <string.h>
// Konverzija niza heksadecimalnih brojeva u dekadne
#define MAX_SIZE 50

int main()
{
    char h[MAX_SIZE][MAX_SIZE];
    int duzina, d[MAX_SIZE] = {0}, n, p;
    printf("Unesi n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Unesite %d. heksadecimalni broj: ", i+1);
        scanf("%s", h[i]);
    }
    for (int i = 0; i < n; i++)
    {
        duzina = strlen(h[i]) - 1;
        for (int j = 0; h[i][j] != '\0'; j++)
        {
            if (h[i][j] >= '0' && h[i][j] <= '9')
            {
                p = h[i][j] - 48;
            }
            else if(h[i][j] >= 'a' && h[i][j] <= 'f')
            {
                p = h[i][j] - 87;
            }
            else if(h[i][j] >= 'A' && h[i][j] <= 'F')
            {
                p = h[i][j] - 55;
            }
            d[i] += p * pow(16, duzina);
            duzina--;
        }
        printf("Heksadecimalni broj %s je u dekadnom obliku: %d\n", h[i], d[i]);
    }
    
    return 0;
}