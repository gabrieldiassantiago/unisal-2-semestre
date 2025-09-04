#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    int valores[100] = {0};
    int maior = 0;
    int menor = 999;
    float media = 0;
    float soma = 0;
    int numeros_pares = 0;

    srand(time(NULL));


    for (int i = 0; i < 100; i++) {
        valores[i] = rand() % 100;

        printf("%d\n", valores[i]);
        
        if (valores[i] % 2 == 0) {
            numeros_pares++;
        }
        
        if (valores[i] > maior) {
            maior = valores[i];
        }
        
        if (valores[i] < menor) {
            menor = valores[i];
        }

        soma+=valores[i];
        
    }

    printf("O maior numero eh: %d\n", maior);
    printf("O menor numero eh: %d\n", menor);
    printf("Nós temos %d numeros pares", numeros_pares);

    media = soma / 100;

    printf("A média eh: %f\n", media);

    printf("A porcentagem de pares é: %.2f%%\n", ((float)numeros_pares / 100) * 100);

    
}
