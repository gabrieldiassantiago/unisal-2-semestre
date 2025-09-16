#include <stdio.h>


int main() {
  int matriz[3][3] = {
  {3, 4, 5},
  {1, 2, 11}
  };
  int vet[3];

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
    vet[j] += matriz[i][j];
    }
  }
  
      for (int j = 0; j < 3; j++) {
          printf("%d ", vet[j]);
      }
      printf("\n");
}
