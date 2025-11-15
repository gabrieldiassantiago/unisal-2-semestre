#include <stdio.h>

void calcular(float *temperatura_kelvin, float *temperatura_fahrenheit) {
    for (int i = 0; i < 24; i++) {
        *(temperatura_fahrenheit + i) = (*(temperatura_kelvin + i) - 273.15) * 9.0/5.0 + 32.0;
    }
}

int main() {
    float temperatura_kelvin[24], temperatura_fahrenheit[24];

    for (int i = 0; i < 24; i++) {
        printf("Digite a temperatura em Kelvin da hora %d: ", i);
        scanf("%f", temperatura_kelvin + i);
    }

    calcular(temperatura_kelvin, temperatura_fahrenheit);

    printf("\nHora\tKelvin\tFahrenheit\n");
    for (int i = 0; i < 24; i++) {
        printf("%2d\t%.2f\t%.2f\n", i, *(temperatura_kelvin + i), *(temperatura_fahrenheit + i));
    }

    return 0;
}