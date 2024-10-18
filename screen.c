#include <stdio.h>

void reponse1(int a, int b, int s, int rep, int g1, int g2)
{
    if (rep < a || rep > b)
    {
        printf("\tVotre reponse doit etre compris entre %d et %d !\n\n", a, b);
    }
    else if (rep >= (s - g2) && rep <= (s + g2))
    {
        printf("\tPresque, le nombre chercher est tout proche !\n\n");
    }
    else if (rep >= (s - g1) && rep <= (s + g1))
    {
        printf("\tLe nombre chercher est proche !\n\n");
    }
    else if (rep > s)
    {
        printf("\tRater ! Le nombre cherché est plus petit. \n\n");
    }
    else
    {
        printf("\tRater ! Le nombre cherché est plus grand. \n\n");
    }
}

void reponse2(int essaie)
{
    if (essaie == 1)
    {
        printf("\n\t\tFANTASTIQUE c'est UN EXPLOIT !!!");
    }
    else if (essaie >= 2 && essaie <= 5)
    {
        printf("\n\t\tWAOUH c'est COOL.");
    }
    else if (essaie >= 6 && essaie <= 15)
    {
        printf("\n\t\tPAS MAL.");
    }
    else if (essaie > 15)
    {
        printf("\n\t\tCOURAGE !!!");
    }
}

void statistiques(int level, int etape, int stat_etape, int stat_essaie, int score)
{
    printf("\n\n\n\t\t--------------------STATISTIQUES-----------------");
    printf("\n\t\t-");
    printf("\n\t\t-\tNiveau Maximal Atteint: Niveau %d:%d \t-", level, etape);
    printf("\n\t\t-\tNombre Total de Partie(s) Jouer: %d\t-", stat_etape);
    printf("\n\t\t-\tNombre Total d'essaies effectuees: %d\t-", stat_essaie);
    printf("\n\t\t-");
    printf("\n\t\t-\t\tSCORE: %d", score);
    printf("\n\t\t-");
    printf("\n\t\t-------------------------------------------------");

    printf("\n\n\n\t\t**********Merci d'avoir jouer a notre jeu !!!*********\n\n");
}