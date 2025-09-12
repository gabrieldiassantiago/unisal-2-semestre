#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void ler_quantidade_voos(int v[]) {
  for (int i = 0; i < 10; i++) {
    scanf("%d", &v[i]);
  }
}

int reservar(int v[], int voo_selecionado, int numero_carteira) {
   if (voo_selecionado == 0) {
   return 0;
   }

  if (v[voo_selecionado] > 0) {
    v[voo_selecionado]--;
    printf("Reserva confirmada para carteira %d no voo %d.\n", numero_carteira, voo_selecionado + 1);
  } else {
     printf("Voo %d está lotado!\n", voo_selecionado + 1);
  }

  return 1;
}


int main() {

 int voos[10]; //vai ser possivel definir a quantidade de lugar para cada

  ler_quantidade_voos(voos);

  //ler reservas
  int carteira_identidade;
  int voo_selecionado;
  

  while(1) {
    
    printf("\nDigite o número do voo (1 a 10) ou 0 para sair: ");
    scanf("%d", &voo_selecionado);
  
    if (voo_selecionado == 0) {
      break;
    }

    printf("Digite o número da carteira de identidade: ");
    scanf("%d", &carteira_identidade);

    if (!reservar(voos, voo_selecionado - 1, carteira_identidade)) {
      break;
    }
    
  }

  
}
