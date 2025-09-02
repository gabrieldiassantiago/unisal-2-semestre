#include <stdio.h>

//1. Faça um programa em C que armazene 15 números inteiros em um vetor e depois permita que o usuário digite
//um número inteiro para ser buscado no vetor, se for encontrado o programa deve imprimir a posição desse
//número no vetor, caso contrário, deve imprimir a mensagem: "Nao encontrado!".
//refatorar codigo

int main()
{
    
    int m[15];

    int i = 0;
    int valor_procurado;
    int achou = 0;
    int posicao = 0;
    
    scanf("%d", &valor_procurado);
    
   for (i = 0; i <= 15; i++) {
        if (m[i] == valor_procurado) {
            achou = 1;
            posicao = i;
            break;
        } else {
            achou = 0;
        }
    }
    
    if (achou == 1) {
        printf("Achei e a posição %d", posicao);
    } else if (achou == 0){
        printf("Não achei");
    }
    
}
