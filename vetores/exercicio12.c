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

  /*
    CODIGO REFATORADO:

    
#include <stdio.h>


int main() {
    
  int mesas[30];
    int quantidade_lugares_desejados;
    int codigo_mesa;
    int limite_ocupado = 0;

    for (int i = 0; i < 30; i++) {
        mesas[i] = 5;
    }

    while(limite_ocupado < 150) {
        
    printf("Qual mesa você quer? (100-129");
        scanf("%d", &codigo_mesa);

        if (codigo_mesa == 0) {
            break;
        }

        if (codigo_mesa < 100 || codigo_mesa > 129) {
            printf("Tente novamente, é invalido");
            continue;
        }

        printf("Quantos lugares você quer para a mesa %d:", codigo_mesa);
        scanf("%d", &quantidade_lugares_desejados);

        int indice = codigo_mesa - 100;

        if (quantidade_lugares_desejados > mesas[indice]) {
            printf("Não foi possivel realizar sua reserva\n");
            
        } else {
            mesas[indice]-=quantidade_lugares_desejados;
            limite_ocupado+=quantidade_lugares_desejados;
            printf("Reserva feita para a mesa %d e lugares %d, agora a mesa tem %d disponiveis\n", codigo_mesa, quantidade_lugares_desejados, mesas[indice]);

        }

        
        
    }

    printf("Programa finalizado. Total de lugares reservados: %d\n", limite_ocupado);

}
    */

  
}
