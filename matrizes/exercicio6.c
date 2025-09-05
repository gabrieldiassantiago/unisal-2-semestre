#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int matriz1[4][4], matriz2[4][4], matrizMaior[4][4];

  printf("Digite os elementos da primeira matriz:");
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      scanf("%d", &matriz1[i][j]);
    }
  }
  printf("Digite os elementos da segunda matriz:");
  
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      scanf("%d", &matriz2[i][j]);
    }
  }

    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        if (matriz1[i][j] > matriz2[i][j]) {
          matrizMaior[i][j] = matriz1[i][j];
        } else {
          matrizMaior[i][j] = matriz2[i][j];
        }
      }
    }

  printf("Matriz com os maiores valores:\n");
  for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
          printf("%d ", matrizMaior[i][j]);
      }
      printf("\n");
  }

  

}
