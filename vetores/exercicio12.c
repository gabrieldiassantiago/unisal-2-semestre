#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main() {

  int mesas[30]; // cada mesa tem 5 lugares, o indice 0 corresponde a mesa 100;
  int codigo;
  int lugares;
  int total_ocupados = 0;

    printf("=== SISTEMA DE RESERVAS ===\n");

  for (int i = 0 ; i < 30; i++) {
    mesas[i] = 5; //inicializa tudo com 5 mesas
  }

  while(1) {
    
    printf("Digite de (0 a 129) ou 0 para sair");
    scanf("%d", &codigo);
    
    if (codigo == 0) {
      break;
    }

    if (codigo < 100 || codigo > 129) {
        printf("Código invalido");
        continue;
    }

    printf("Quantos lugares você quer?");
    scanf("%d", &lugares);

    int indice = codigo - 100;

    if (lugares > mesas[indice]) {
       printf("Quantidade inválida ou indisponível!\n");
      
    } else {
      
      mesas[indice]-= lugares;
      total_ocupados+=lugares;

    }
  
    printf("Reserva OK! Restam %d lugares na mesa %d\n", mesas[indice], codigo);

    
  }

  
}
