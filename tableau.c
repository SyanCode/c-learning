#include <stdio.h>

int simple(void) {
    float notes[3] = {14.2, 15.6, 19};

    for (int i = 0; i < 3; i++)
    {
    printf("La note est : %f\n", notes[i]);
    }

    return 0;
}

int multiple(void)
{
    int nombres[2][3] = {{4, 2, 3}, {9, 7, 6}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", nombres[i][j]);
        }
        printf("\n");
    }

    return 0;
}

int main(void)
{
    int choice;
    printf("Choisir un programme entre 1 et 2...\n");
    printf("1 - Tableau simple\n");
    printf("2 - Tableau multiple\n");
    printf(">> ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        simple();
    } else if (choice == 2)
    {
        multiple();
    }
}