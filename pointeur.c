#include <stdio.h>

void add_one(int *number)
{
    printf("Adresse de number : %p\n", number);
    *number += 1;
}

int main(void)
{
    int value = 42;

    printf("Value : %d\n", value);
    printf("Adresse de value : %p\n", (void*)&value);

    add_one(&value);

    printf("Value : %d\n", value);

    return 0;
}