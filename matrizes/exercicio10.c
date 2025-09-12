#include <stdio.h>
#include <stdlib.h>

int main(void) {


    int m[3][3] = {
  {2, 2, 0},
  {1, 2, 0},
  {0, 1, 5}
    };
  int soma = 0;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (i == j) {
        soma+=m[i][i];
      }
    }
  }

  printf("Soma da diagonal é: %d", soma);

}
