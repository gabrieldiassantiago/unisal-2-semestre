#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    
    int matriz[2][3] = {
        {1, 5, 4},
        {8, 3, 4}
    };

    int matriz2[2][3] = {
        {5, 2, 6},
        {2, 45, 35}
    };

    int matriz_resultado[2][3];

    for (int linhas = 0; linhas < 2; linhas++) {
        for (int colunas = 0; colunas < 3; colunas++) {
            matriz_resultado[linhas][colunas] = matriz[linhas][colunas] + matriz2[linhas][colunas];
        }
    }

    printf("Matriz resultado:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matriz_resultado[i][j]);
        }
        printf("\n");

    }
 
}
