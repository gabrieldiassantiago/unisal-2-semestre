#include <stdio.h>
#include <stdlib.h>

int *criarVetor(int N) {
    int *vetor = malloc(N * sizeof(int));

    if (vetor == NULL)
    {
        printf("Erro na alocação de memória!\n");
        return 1;
    }

    for (int i = 0; i < N; i++) {
        *(vetor + i) = i;
    }

    return vetor;
    
}

int main() {
    int N;

    scanf("%d", &N);
    int *vetor = criarVetor(N);
    for (int i = 0; i < N; i++) {
        printf("%d ", *(vetor + i));
    }
    free(vetor);
}