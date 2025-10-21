#include <stdio.h>

void calcular(float *temperatura_kelvin, float *temperatura_celsius) {
    for (int i = 0; i < 24; i++) {
       *(temperatura_celsius + i) = *(temperatura_kelvin + i) - 273.15;
    }
}

int main() {
    float temperatura_kelvin[24], temperatura_celsius[24];

    for (int i = 0; i < 24; i++) {
        printf("Digite a temperatura em Kelvin da hora %d: ", i);
        scanf("%f", &temperatura_kelvin[i]);
    }

    calcular(temperatura_kelvin, temperatura_celsius);

    for (int i = 0; i < 24; i++) {
        printf("Hora %d: %.2f Celsius\n", i, *(temperatura_celsius + i));
    }
}