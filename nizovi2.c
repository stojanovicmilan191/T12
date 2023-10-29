#include <stdio.h>
// Napisati program koji ispisuje sve trocifrene brojeve koji imaju osobinu da su deljivi brojem koji se dobija izbacivanjem srednje cifre
#define MAX_SIZE 50

int main()
{
    int p;
    for (int i = 100; i < 1000; i++)
    {
        p = (i / 100) * 10 + i % 10;
        if (i%p == 0)
        {
            printf("%d\n", i);
        }
        
    }
    
    return 0;
}