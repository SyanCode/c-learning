#include <stdio.h>

int addition(int a, int b)
{
    return a + b;
}

int main(void)
{
    int somme = addition(3, 5);
    printf("La somme de %d et %d est %d\n", 3, 5, somme);
    return 0;
}