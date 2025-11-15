#include <stdio.h>
#include <stdlib.h>
int main() {
    int N;
    
    do {
        printf("Digite um número inteiro positivo N: ");
        scanf("%d", &N);
    } while (N <= 0);

    int *v = malloc(N *sizeof(int));

    if (v == NULL) {
        printf("Erro na alocação de memória!\n");
        return 1;
    }

    for (int i = 0; i < N; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("Elementos digitados:\n");
    for (int i = 0; i < N; i++) {
        printf("Elemento %d: %d\n", i + 1, v[i]);
    }

    free(v);
    



}