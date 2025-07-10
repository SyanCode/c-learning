#include <stdio.h>

int main(void)
{
    float temperature;
    printf("Entrer la température en Celsius : ");
    scanf("%f", &temperature);
    printf("%.2f degrés Celsius font %.2f degrés Fahrenheit\n", temperature, temperature * 1.8 + 32);

    return 0;
}