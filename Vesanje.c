#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdio_ext.h>

void provera(int *, char *, char *, char *);

int main()
{
    char rec[] = "onomatopeja";
    char pokusaj[] = "___________";
    int brZivota = 7;
    char vesanje[] = "____\n|  \n|  \n|  \n|\n";
    do
    {
        provera(&brZivota, rec, pokusaj, vesanje);
    } while (brZivota >= 0 && strcmp(rec, pokusaj));
    if (brZivota < 0)
        printf("Zadata rec: %s\nVise srece drugi put!\n", rec);
    else
        printf("Cestitke, rec je pogodjena!\n");
}

void provera(int *brZivota, char *rec, char *pokusaj, char *vesanje)
{
    int i, p = 0;
    char slovo;
    do
    {
        printf("Rec: ");
        for (i = 0; i < strlen(pokusaj); i++)
        {
            printf("%c ", pokusaj[i]);
        }
        printf("\n");
        printf("Unesite slovo: ");
        __fpurge(stdin);
        scanf("%c", &slovo);
    } while (!isalpha(slovo));
    p = 0;
    for (i = 0; i < strlen(rec); i++)
    {
        if (rec[i] == slovo)
        {
            pokusaj[i] = slovo;
            p = 1;
        }
        else if (i == strlen(rec) - 1 && !p)
        {
            *brZivota = *brZivota - 1;
            switch (*brZivota)
            {
            case 7:
                printf("%s", vesanje);
                break;
            case 6:
                vesanje = "____\n|  |\n|  \n|  \n|\n";
                break;
            case 5:
                vesanje = "____\n|  |\n|  o\n|  \n|\n";
                break;
            case 4:
                vesanje = "____\n|  |\n|  o\n| /\n|\n";
                break;
            case 3:
                vesanje = "____\n|  |\n|  o\n| /|\n|\n";
                break;
            case 2:
                vesanje = "____\n|  |\n|  o\n| /|\\\n|\n";
                break;
            case 1:
                vesanje = "____\n|  |\n|  o\n| /|\\\n| /\n";
                break;
            case 0:
                vesanje = "____\n|  |\n|  o\n| /|\\\n| / \\\n";
                break;
            default:
                break;
            }
        }
    }
    printf("Preostalo zivota: %d\n", *brZivota);
    printf("%s", vesanje);
}
