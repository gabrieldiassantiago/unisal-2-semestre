#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencher_vetor(int v[], int tamanho) {
  srand(time(NULL));
  for (int i = 0; i < tamanho; i++) {
    v[i] = rand() % 10; //gera valores de 0 ate a 10
  }
}

void encontrar(int v[], int tamanho, int valor_procurado) {
  int achou = 0;
  int posicao = 0;
  for (int i = 0; i < tamanho; i++) {
    if (valor_procurado == v[i]) {
      printf("Achei! O valor %d esta na posicao %d.\n", valor_procurado, i);
      return; //fecha a funcao
    } 
  }
  printf("Nao achei. O valor %d nao esta no vetor.\n", valor_procurado);

}


int main() {
  int tamanho = 15;
  int m[tamanho];
  int valor_procurado;

  preencher_vetor(m, tamanho);

  scanf("%d", &valor_procurado);

  encontrar(m, tamanho, valor_procurado);  
}
