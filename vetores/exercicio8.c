#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main() {

  srand(time(NULL));

  int codigo[30];
  int valor_compra[30];
  int valor_venda[30];
  int quantidade[30];

  
  for (int i = 0; i < 30; i++) {
      printf("Produto %d\n", i+1);
      printf("Digite o código: ");
      scanf("%d", &codigo[i]);
      printf("Digite a quantidade: ");
      scanf("%d", &quantidade[i]);
      printf("Digite o valor de compra: ");
      scanf("%d", &valor_compra[i]);
      printf("Digite o valor de venda: ");
      scanf("%d", &valor_venda[i]);
  }

  int opcao;

  do {
    printf("\nEscolha uma opção:\n");
    printf("1 - Listar todos os produtos\n");
    printf("2 - Consultar produto por código\n");
    printf("0 - Sair\n");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("\n--- Lista de Produtos ---\n");
      
      for (int i = 0; i < 30; i++) {
        printf("Código: %d | Quantidade: %d | Compra: %d | Venda: %d\n", codigo[i], quantidade[i], valor_compra[i], valor_venda[i]);
      }

    } else if (opcao == 2) {
      int busca;
      int achou = 0;
      printf("Digite o código do produto: ");
      scanf("%d", &busca);
      for (int i = 0; i < 30; i++) {
        if (codigo[i] == busca) {
          achou = 1;
          printf("Código: %d | Quantidade: %d | Compra: %d | Venda: %d\n", codigo[i], quantidade[i], valor_compra[i], valor_venda[i]);
          break;
        } else {
          printf("Produto nao achado");
        }
      }
    }

  } while(opcao !=0);

}
