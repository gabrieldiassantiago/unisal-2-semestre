#include <stdio.h>
#include <stdlib.h>

int* ponteiro(int N) {
    int *vetor = malloc(N * sizeof(int));
    if (vetor == NULL) {
        printf("Erro na alocação de memória!\n");
        return NULL;
    } else if (N <= 0){
        return NULL;
    }

    for (int i = 0; i < N; i++) {
        vetor[i] = i + 1;
    }

    return vetor;

}

int main() {
    int N;

    scanf("%d", &N);

    int *vetor = ponteiro(N);

    if (vetor != NULL) {
        for (int i = 0; i < N; i++) {
            printf("%d ", vetor[i]);
        }
        free(vetor);
    }
}