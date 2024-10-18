#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "function.h"
#include "screen.h"

int main()
{
    srand(time(NULL));
    int s, level = 1, etape = 0, SCORE = 0, rep = -1, stat_etape = 0, stat_essaie = 0;
    char test[3];

    printf("\n\n\t\t***************BIENVENUE DANS NOTRE JEU GUESS***************\n\n");

    printf("\n\t**Niveau 1**\n");
    do
    {
        int a = min(level);
        int b = max(level);
        s = guess(a, b);
        int I = b - a;
        int E = floor(3 * aleatoire());
        int g1 = gap1(I, E);
        int g2 = gap2(I, E);

        if (etape != 0 && etape % 3 == 0)
        {
            etape = 0;
            level++;
            printf("\n\n\t**NIVEAU: %d**\n", level);
        }

        printf("\n\nNiveau %d:%d :", level, etape + 1);
        int essaie = 0;

        printf("\t**Devinez le nombre cacher entre %d et %d !!!**\n\n\n", a, b);

        do
        {
            printf("\nREPONSE: ");
            scanf("%d", &rep);
            essaie++;

            reponse1(a, b, s, rep, g1, g2);
        } while (rep != s);

        stat_etape += 1;
        stat_essaie += essaie;
        SCORE = score(stat_etape, stat_essaie);
        etape++;

        printf("\n\tBRAVO !!! vous avez reussi, le nombre cacher etait %d", s);
        reponse2(essaie);
        printf("     Vous avez reussit en %d essaie(s) !\t", essaie);

        printf("\n\nVoulez vous faire une nouvelle partie ???? (oui/non)-(o/n):  ");
        scanf("%s", test);

    } while (strcasecmp(test, "oui") == 0 || strcasecmp(test, "o") == 0);

    // Donnees de la fin du jeu
    statistiques(level, etape, stat_etape, stat_essaie, SCORE);

    return 0;
}
