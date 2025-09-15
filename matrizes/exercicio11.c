#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void gerarcartela(int cartela[5][5]) {
    
    int usados[100] = {0};
    int num;
    int i, j;
    
      for (i = 0; i < 5; i++) {
          
             for (j = 0; j < 5; j++) {
                 
                 do {
                     num = rand() % 100;
                 }   while (usados[num] == 1);

                 cartela[i][j] = num;
                 usados[num] = 1;
             }
      }
}

void imprimircartela(int cartela[5][5]) {
    int i, j;
    printf("Cartela gerada:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%2d ", cartela[i][j]);
        }
        printf("\n");

    }
}

int main() {
    
    srand(time(NULL));

    int cartela[5][5];

    gerarcartela(cartela);
    imprimircartela(cartela);
    
}
