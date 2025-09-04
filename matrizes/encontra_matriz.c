#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    
    srand(time(NULL));

  int valores[10][10] = {0};
    int conta_quantidade = 0;
    int valor;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j< 10; j++) {
        valores[i][j] = rand() % 10;
        }
    }

    printf("Digite qual valor você quer verificar: ");
    scanf("%d", &valor);

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j <10; j++) {
            if (valor == valores[i][j]) {
                conta_quantidade++;
                printf("Linha %d, Coluna %d\n", i, j);
            }
        }
    }

    printf("O número %d foi aparecido %d vezes", valor, conta_quantidade);
 
}
