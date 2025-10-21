#include <stdio.h>

void converter(int *inteiro, float *decimal, char *caractere) {
    for (int i = 0; i < 3; i++) {
        *(inteiro + i) = 2014;
        *(decimal + i) = 9.99;
        *(caractere + i) = 'Y';
    }
}

int main() {
    int inteiro[3];
    float decimal[3];
    char caractere[3];

    for (int i = 0; i < 3; i++) {
        printf("Digite um valor inteiro: ");
        scanf("%d", &inteiro[i]);
        printf("Digite um valor decimal: ");
        scanf("%f", &decimal[i]);
        printf("Digite um caractere: ");
        scanf(" %c", &caractere[i]);
    }

    converter(inteiro, decimal, caractere);

    for (int i = 0; i < 3; i++) {
        printf("Valores convertidos na posição %d: Inteiro: %d, Decimal: %.2f, Caractere: %c\n", i, *(inteiro + i), *(decimal + i), *(caractere + i));
    }
}