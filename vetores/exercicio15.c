#include <stdio.h>


int main() {
  int numeros[100] = {};
  int i = 0;
  int quantidade_valores_iguais_ultimo = 0;

  int valores_lidos = 0;

  while(valores_lidos < 100) {
    
    int valor;
    scanf("%d", &valor);

    if (valor == 0) {
      break;
    }

    numeros[valores_lidos] = valor;
    valores_lidos++;
  }

  if (valores_lidos > 0) {
    
    int ultimo = numeros[valores_lidos-1];

    for (int i = 0; i < 100; i++) {
      if (numeros[i] == ultimo) {
        quantidade_valores_iguais_ultimo++;
      }
    }
    printf("O numero %d apareceu %d vezes.\n", ultimo, quantidade_valores_iguais_ultimo);

  } else {
    printf("Nenhum numero foi lido.\n");

  }
  

  
}
