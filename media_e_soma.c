
#include <stdio.h>

int main()
{
    int quantidade_de_numeros_digitados = 0;
    float soma = 0;
    int valor;
    
    scanf("%d", &valor);
    
    while (valor > 0) {
        
        printf("Digite um valor");
        scanf("%d", &valor);

        quantidade_de_numeros_digitados++;
        soma+=valor;
    }
    
        float media = soma/quantidade_de_numeros_digitados;
        
        printf("A médoia é: %.2f", media);
        printf("\n A soma é: %.2f", soma);
        
    
}
