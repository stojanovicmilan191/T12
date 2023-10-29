#include <stdio.h>
// U redu u samoposluzi nalazi se n kupaca. Vreme za koje kasirka opsluzuje svakog kupca dato je nizom t[0], t[1]... t[n-1]. Napisati program koji racuna vreme cekanja svakog kupca
#define MAX_SIZE 50

int main()
{
    int n, t[MAX_SIZE], vreme[MAX_SIZE] = {0};
    printf("Unesite n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Unesite vreme potrebno da se %d. kupac opsluzi: ", i + 1);
        scanf("%d", &t[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)// Ako je neophodno uracunati i vreme usluzivanja kupca za koga racunamo vreme cekanja zameniti j < i sa j <= i
        {
            vreme[i]+=t[j];
        }
        printf("Vreme cekanja %d. kupca je: %d min\n", i+1, vreme[i]);
    }
    return 0;
}