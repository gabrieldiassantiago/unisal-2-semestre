#include <stdio.h>

void encontrar_maiores(int *valores, int *maior, int *segundo_maior) {
    if (valores[0] > valores[1]) {
        *maior = valores[0];
        *segundo_maior = valores[1];
    } else {
        *maior = valores[1];
        *segundo_maior = valores[0];
    }

    for (int i = 2; i < 4; i++) {
        if (valores[i] > *maior) {
            *segundo_maior = *maior;
            *maior = valores[i];
        } else if (valores[i] > *segundo_maior){
            *segundo_maior = valores[i];
        }
    }
}

int main(void) {

    int maior, segundo_maior;
    int valores[4];
    char continuar;

    do {
        printf("Digite quatro valores inteiros: ");
        for (int i = 0; i < 4; i++) {
            scanf("%d", &valores[i]);
        }

        encontrar_maiores(valores, &maior,&segundo_maior);
    } while (continuar == 's' || continuar == 'S');

    printf("Maior valor: %d\n", maior);
    printf("Segundo maior valor: %d\n", segundo_maior);

    
}
