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


//código refatarado com função

/*
#include <stdio.h>

void ler_notas(int prova1[], int prova2[], int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    printf("Digite a nota da prova 1 do aluno %d: ", i + 1);
    scanf("%d", &prova1[i]);
    printf("Digite a nota da prova 2 do aluno %d: ", i + 1);
    scanf("%d", &prova2[i]);
  }
}

void calcular_media(int prova1[], int prova2[], int media[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        media[i] = (prova1[i] + prova2[i]) / 2;
    }
}
 
void classificar_alunos(int media[], int classificao[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (media[i] >= 6) {
            classificao[i] = 1;
        } else {
            classificao[i] = 2;
        }
    }
}

int main() {
  int tamanho = 15;
  int prova1[tamanho];
  int prova2[tamanho], classificao[tamanho]; //1 aprovado, 2 reprovado
  int media[tamanho];
  ler_notas(prova1, prova2, tamanho);
    calcular_media(prova1, prova2, media, tamanho);
    classificar_alunos(media, classificao, tamanho);

    for (int i = 0; i < tamanho; i++) {
        printf("Notas do aluno %d: Prova 1 = %d, Prova 2 = %d, Média = %d, Classificação = %s \n", i + 1, prova1[i], prova2[i], media[i], 
            classificao[i] == 1 ? "Aprovado": "Reprovado");
    }
    
}
*/

