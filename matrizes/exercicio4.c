#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    
  srand(time(NULL));

    double valores[100][100];
    double maximo = 0;
    double minimo = 0;
    int linha_max = 0;
    int linha_min = 0;
    int coluna_max = 0;
    int coluna_min;
    double soma = 0;
    double media = 0;

  for (int i = 0; i < 100; i++) {
    for (int j = 0; j < 100; j++) {
      valores[i][j] = (double) rand() / RAND_MAX;
      soma+=valores[i][j];
    }
  }

  maximo = minimo = valores[0][0];

  for (int i = 0; i < 100; i++) {
    for (int j = 0;  j < 100; j++){
      if (valores[i][j] > maximo) {
        maximo = valores[i][j];
        linha_max = i;
        coluna_max = j;
      }
      if (valores[i][j] < minimo) {
        minimo = valores[i][j];
        linha_min = i;
        coluna_min = j;
      }
    }
  }

  printf("\n========== ESTATÍSTICAS DA MATRIZ ==========\n");
  printf("O valor maximo: %.6f\n", maximo);
  printf("Posição do máximo: linha %d, coluna %d\n", linha_max + 1, coluna_max + 1);
  printf("A posição do minimo: linha %d, coluna %d\n", linha_min + 1, coluna_min + 1);


}
