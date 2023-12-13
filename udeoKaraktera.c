#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cvor_st {
    char string[31];
    struct cvor_st *sledeci;
} CVOR;

void inicijalizacija(CVOR **);
CVOR *napravi_cvor(char* );
void dodaj_na_kraj(CVOR **, CVOR *);
double prosek_studenta(CVOR *);
void obrisi_listu(CVOR **);
double prosUdeo(CVOR *, char);

int main() {
    char broj_indeksa[] = "ee300-2020";
    char ime_studenta[] = "Jovan Jovanovic";
    CVOR *glava;
    inicijalizacija(&glava);
    dodaj_na_kraj(&glava, napravi_cvor("Pera"));
    dodaj_na_kraj(&glava, napravi_cvor("Mika"));
    dodaj_na_kraj(&glava, napravi_cvor("Laza"));
    char znak;
    printf("Unesi znak koji trazis: ");
    scanf("%c", &znak);
    printf("Srednja vrednost udela: %.2lf\n", prosUdeo(glava, znak));
    obrisi_listu(&glava);
    return EXIT_SUCCESS;
}

void inicijalizacija(CVOR **pglava) 
{
    *pglava = NULL;
}

CVOR *napravi_cvor(char* string) 
{
    CVOR *novi = (CVOR *) malloc(sizeof(CVOR));
    if(novi == NULL) {
        printf("Nije moguce zauzeti memoriju!\n");
        exit(EXIT_FAILURE);
    }
    strcpy(novi->string, string);
    novi->sledeci = NULL;
    return novi;
}

void dodaj_na_kraj(CVOR **pglava, CVOR *novi) 
{
    if(*pglava == NULL) 
    {
        *pglava = novi;
    } else {
        CVOR *tekuci = *pglava;
        while(tekuci->sledeci != NULL) 
        {
            tekuci = tekuci->sledeci;
        }
        tekuci->sledeci = novi;
    }
}

void obrisi_listu(CVOR **pglava)
{
    CVOR *tmp;
    while(*pglava != NULL) 
    {
        tmp = *pglava;
        *pglava = (*pglava)->sledeci;
        tmp->sledeci = NULL;
        free(tmp);
    }
}

double prosUdeo(CVOR *glava, char c)
{
    double prosek = 0, brojac = 0;
    int k = 0;
    CVOR *tekuci = glava;
    while(tekuci != NULL) 
    {
        brojac = 0;
        for (int i = 0; i < strlen(tekuci->string); i++)
        {
            if (tekuci->string[i] == c)
            {
                brojac++;
            }
        }
        k++;
        prosek += brojac/strlen(tekuci->string);
        tekuci = tekuci->sledeci;
    }
    return prosek / k;
}
