#include <stdio.h>



int main() {

int linhas, colunas;

    scanf("%d %d", &linhas, &colunas);
    
    int matriz[linhas][colunas];
    int matriz_transposta[linhas][colunas];

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    //matriz transposta
    
    for (int i = 0 ; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz_transposta[j][i] = matriz[i][j];
        }
    }

    for (int i = 0; i < colunas; i++) {
        for (int j = 0; j < linhas; j++) {
            printf("%d ", matriz_transposta[i][j]);
        }
        printf("\n");
    }
}
