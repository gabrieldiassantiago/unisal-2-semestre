#include <stdio.h>

//4. Faça um programa que armazene 8 números em um vetor e imprima todos os números. Ao final, imprima o total de números múltiplos de seis.

int main() {
  int vet[8] = {5, 2, 10, 23, 56, 6, 56, 45};
  int countMult6 = 0;

  printf("VALORES NORMAIS:\n");
  for (int i = 0; i < 8; i++) {
    printf("%d ", vet[i]);
  }
  printf("\n");

  printf("VALORES MULTIPLOS DE SEIS:\n");
  for (int i = 0; i < 8; i++) {
    if (vet[i] % 6 == 0) {
      printf("%d ", vet[i]);
      countMult6++;
    }
  }
  printf("\nTotal de multiplos de 6: %d\n", countMult6);

  return 0;
}
