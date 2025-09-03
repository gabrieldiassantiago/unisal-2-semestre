#include <stdio.h>

int main(void) {
    float salario_antigo[20];
    float salario_novo[20];

    for (int i = 0; i < 20; i++) {
        printf("Digite o salario atual %d: ", i + 1);
        scanf("%f", &salario_antigo[i]);
    }

    for (int j = 0; j < 20; j++) {
        salario_novo[j] = salario_antigo[j] * 1.08;
    }

    printf("\n--- Lista de salários ---\n");
    for (int mostra = 0; mostra < 20; mostra++) {
        printf("\nFuncionário %d:\n", mostra + 1);
        printf("Salário antigo: R$ %.2f\n", salario_antigo[mostra]);
        printf("Salário novo:   R$ %.2f\n", salario_novo[mostra]);
    }

    return 0;
}
