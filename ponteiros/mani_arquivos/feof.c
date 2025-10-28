#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    FILE *F = fopen("arquivo.txt", "r");   // abre o arquivo para leitura
    
    if (F == NULL) {                     // verifica se a abertura falhou
        printf("Erro na abertura\n");
        system("pause");                 // apenas no Windows; pode ser removido
        exit(1);
    }

    while (1) {
        if (fscanf(F, "%d", &n) != 1)    // tenta ler um inteiro; verifica o retorno
        break;                       // sai se não leu (EOF ou erro)
        printf("%d ", n);                // imprime o inteiro lido
    }

    fclose(F);
    return 0;
}