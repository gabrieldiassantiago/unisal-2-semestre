#include <stdio.h>

int ehPrimo(int n) {
        for (int testa_valor = 2; testa_valor < n; testa_valor++) {
            if (n % testa_valor == 0) {
                return 0;
            }
            return 1;
        }
}

int main()
{
    int valor;
    printf("Digite um valor:");
    scanf("%d", &valor);
    int resultado = ehPrimo(valor);
    if (resultado == 1) {
        printf("O número é primo");
    } else {
        printf("O resultado não é primo");
    }
    
}
