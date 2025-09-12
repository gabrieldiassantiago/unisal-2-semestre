#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  srand(time(NULL));

  int m[10][10];

  int linha;
  int coluna;
  int valor;
  int achou = 0;
  int qtd_sorteada = 0;
  

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      m[i][j] = rand() % 10;
    }
  }

  scanf("%d", &valor);

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (valor == m[i][j]) {
        qtd_sorteada++;
        printf("Linha %d, Coluna %d\n", i, j);
      }
    }
  }


  printf("O valor %d foi sorteado %d vezes", valor, qtd_sorteada);
  
}
