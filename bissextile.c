#include <stdio.h>

int main(void)
{
    int annee;

    printf("Entrez une année : ");
    scanf("%d", &annee);

    // Si année est bissextile, j'affiche une phrase
    // Si année n'est pas bissextile, j'affiche une autre phrase
    // Si année est trop ancienne, j'affiche invalide
    if (annee % 4 == 0 && annee % 100 != 0 || annee % 400 == 0) {
        printf("L'année %d est bissextile.\n", annee);
    } else if (annee < 45) {
        printf("L'année %d est trop ancienne.\n", annee);
    }
    else 
    {
        printf("L'année %d n'est pas bissextile.\n", annee);
    }

    return 0;
}