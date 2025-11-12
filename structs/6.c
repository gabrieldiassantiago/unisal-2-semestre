#include <stdio.h>

typedef struct Aluno {
    int matricula[50];
    char nome[50];
    float nota1, nota2, nota3;
} Aluno;

int main() {
   Aluno alunos[5];

   for (int i = 0; i < 5; i++) {
    printf("Digite a matricula do %d aluno:\n");
    scanf("%d", &alunos[i].matricula);
    printf("Digite o nome do %d aluno:\n");
    fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
    printf("Digite a nota 1 do %d aluno:\n");
    scanf("%f", &alunos[i].nota1);
    printf("Digite a nota 2 do %d aluno\n");
    scanf("%f", &alunos[i].nota2);
    printf("Digite a nota 3 do %d aluno\n");
    scanf("%f", &alunos[i].nota3);

    for (int i = 0; i < 5; i++) {
        printf("A matricula do aluno %c eh: \n", alunos[i].matricula, alunos[i].nome);

    }



   }
}