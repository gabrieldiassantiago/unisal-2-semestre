#include <stdio.h>


//7. Crie um programa que leia o preço de compra e o preço de venda de 100 mercadorias (utilize vetores). Ao
//final, o programa deverá imprimir quantas mercadorias proporcionam:
//• lucro < 10%
//• 10% <= lucro <= 20%
//• lucro > 20%


int main() {

 float preco_compra[100];
float preco_venda[100];


  int qtd_lucro_menor_10 = 0;
  int qtd_lucro_entre_10_20 = 0;
  int qtd_lucro_maior_20 = 0;


  for (int i = 0; i < 100; i++) {
    scanf("%f", &preco_compra[i]);
    scanf("%f", &preco_venda[i]);
  }

  for (int i = 0; i < 100; i++) {
    float lucro = ((preco_venda[i] - preco_compra[i]) / preco_compra[i]) * 100;
    if (lucro < 10.0) {
      qtd_lucro_menor_10++;
    } else if (lucro <=20.0){
      qtd_lucro_entre_10_20++;
    } else {
      qtd_lucro_maior_20++;
    }
  }
  
}
