#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    
  int matriz[5][5];

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      matriz[i][j] = 0;
    }
  }

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (i == j) {
        matriz[i][j] = 1;
      }
    }
  }

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n"); 
  }

}
