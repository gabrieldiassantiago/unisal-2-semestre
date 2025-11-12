#include <stdio.h>
#include <string.h>

typedef struct Pessoa {
    char nome[50];
    int idade;
    float altura;
} Pessoa;

int main() {
    
    Pessoa pessoa1, pessoa2;

    // Entrada de dados para a primeira pessoa
    printf("Digite o nome da primeira pessoa: ");
    fgets(pessoa1.nome, sizeof(pessoa1.nome), stdin);
    pessoa1.nome[strcspn(pessoa1.nome, "\n")] = 0; // Remover o newline
    printf("Digite a idade da primeira pessoa: ");
    scanf("%d", &pessoa1.idade);
    printf("Digite a altura da primeira pessoa (em metros): ");
    scanf("%f", &pessoa1.altura);
    getchar(); // Limpar o buffer do teclado

    // Entrada de dados para a segunda pessoa
    printf("Digite o nome da segunda pessoa: ");
    fgets(pessoa2.nome, sizeof(pessoa2.nome), stdin);
    pessoa2.nome[strcspn(pessoa2.nome, "\n")] = 0; // Remover o newline
    printf("Digite a idade da segunda pessoa: ");
    scanf("%d", &pessoa2.idade);
    printf("Digite a altura da segunda pessoa (em metros): ");
    scanf("%f", &pessoa2.altura);

    // Exibir os dados das pessoas
    printf("\nDados da Primeira Pessoa:\n");
    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %d\n", pessoa1.idade);
    printf("Altura: %.2f metros\n", pessoa1.altura);

    printf("\nDados da Segunda Pessoa:\n");
    printf("Nome: %s\n", pessoa2.nome);
    printf("Idade: %d\n", pessoa2.idade);
    printf("Altura: %.2f metros\n", pessoa2.altura);

    return 0;


}