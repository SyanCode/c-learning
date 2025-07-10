#include <stdio.h>
#include <string.h>

int main(void)
{
    char prenom[32];

    printf("Entrer votre prénom : ");
    scanf("%s", prenom);

    printf("Bonjour, %s\n", prenom);
    printf("La longueur de votre prénom est %lu\n", strlen(prenom));

    return 0;
}