#include <stdio.h>

int main() {
  float provas1[15];
  float provas2[15];
  int media_arredondada[15];
  int situacao[15];
  float media; 
  
  for (int i = 0 ; i < 15; i++) {
    printf("Digite a %d nota da prova 1: ", i + 1);
    scanf("%f", &provas1[i]);
  }
  for (int i = 0 ; i < 15; i++) {
    printf("Digite a %d nota da prova 2: ", i + 1);
    scanf("%f", &provas2[i]);
  }

  for (int i = 0; i < 15; i++) {
    media = (provas1[i] + provas2[i]) / 2.0;
    media_arredondada[i] = (int)(media + 0.5); // Arredondar a média

    if (media_arredondada[i] >= 6) {
      situacao[i] = 1; // Aprovado
    } else {
      situacao[i] = 2; // Reprovado
    }
  }

  printf("\nNotas da prova 1:\n");
  for (int i = 0; i < 15; i++) {
    printf("%.2f\n", provas1[i]);
  }

  printf("\nNotas da prova 2:\n");
  for (int i = 0; i < 15; i++) {
    printf("%.2f\n", provas2[i]);
  }

  printf("\nMédias arredondadas de cada aluno:\n");
  for (int i = 0; i < 15; i++) {
    printf("%d\n", media_arredondada[i]);
  }

  printf("\nSituação de cada aluno (1 = Aprovado, 2 = Reprovado):\n");
  for (int i = 0; i < 15; i++) {
    printf("%s\n", situacao[i] == 1 ? "Aprovado": "Reprovado");
  }

  return 0;
}
