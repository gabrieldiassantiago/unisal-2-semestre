#include <stdio.h>

int main(void) {
 char m[5][10];
  
  char gabarito[10];
  
  int resultado[5] = {0};

  for (int i = 0; i < 5; i++) {

    printf("ALUNO %d\n", i + 1);
    
    for (int j = 0; j < 10; j++) {
      printf("Digite a resposta da questao %d", j+1);
      scanf("%c ", &m[i][j]);
    }
    
  }

  for (int j = 0; j < 10; j++) {
    printf("Digite o gabarito da questão %d ", j +1);
    scanf("%c ", &gabarito[j]);
  }


  for (int i = 0 ; i < 5; i++) {
    resultado[i] = 0;
    
    for (int j = 0; j < 10; j++) {
      if (m[i][j] == gabarito[j]) {
        resultado[i]++;
      }
    }
  }

  for (int i = 0; i < 5; i++) {
      printf("Aluno %d, teve %d acertos\n", i+1, resultado[i]);
  }
  
}
