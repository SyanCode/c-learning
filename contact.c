#include <stdio.h>

struct Contact {
    char prenom[50];
    char telephone[20];
    int age;
};

int main(void)
{
    struct Contact contacts[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Entrer un prénom %d : ", i + 1);
        scanf("%s", contacts[i].prenom);

        printf("Entrer un numéro de téléphone %d : ", i + 1);
        scanf("%s", contacts[i].telephone);

        printf("Entrer un âge %d : ", i + 1);
        scanf("%d", &contacts[i].age);
    }

    printf("\n----- Liste de contacts ----- \n");
    for (int i = 0; i < 3; i++)
    {
        printf("Contact %d :\n", i + 1);
        printf("Prénom : %s\n", contacts[i].prenom);
        printf("Numéro de téléphone : %s\n", contacts[i].telephone);
        printf("Âge : %d\n", contacts[i].age);
    }

    return 0;
}