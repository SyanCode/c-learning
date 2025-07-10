#include <stdio.h>

int main(void) 
{
    int value = 42;
    int *ptr = &value;

    printf("Value : %d\n", value);
    printf("Adresse de Value : %p\n", &value);

    printf("ptr : %p\n", ptr);
    printf("Valeur via ptr : %d\n", *ptr);

    return 0;
}