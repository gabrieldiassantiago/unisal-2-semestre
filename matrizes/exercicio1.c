#include <stdio.h>

int main() {
    int m[2][3] = {
        {1, 4, 7},
        {3, 2, 1}
    };
    int n[2][3] = {
        {2, 1, 5},
        {2, 1, 1}
    };
    int soma[2][3]; // matriz para armazenar o resultado

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            soma[i][j] = m[i][j] + n[i][j];
        }
    }

    printf("Matriz soma:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", soma[i][j]);
        }
        printf("\n");
    }

    return 0;
}
