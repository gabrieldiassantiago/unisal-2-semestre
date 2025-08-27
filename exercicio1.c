
#include <stdio.h>

int main()
{
 
  int avaliacoes[] = {5, 4, 3, 5, 5, 2, 4, 5, 3, 4, 1, 5, 4, 4, 5};
  int freq[5] = {0};
  int soma = 0;
  
  for (int i = 0; i < 15; i++) {
      int nota = avaliacoes[i];
      freq[nota-1]++;
  }
  
      printf("=== FREQUENCIA DAS NOTAS ===\n");
      for(int i = 0; i < 5; i++) {
        printf("A nota %d apareceu %d vez(es).\n", i+1, freq[i]);
      }
      
      int maior = 0;
      int nota_frequente = 0;
      
      for (int i = 0; i < 5; i++) {
          if (freq[i] > maior) {
              maior = freq[i];
              nota_frequente = i+1;
          }
      }
      
      int satisfeitos = freq[3] + freq[4];
      float porcentagem = (satisfeitos * 100) / 15;
      
    printf("A nota mais frequente eh: %d", nota_frequente);

    
}
