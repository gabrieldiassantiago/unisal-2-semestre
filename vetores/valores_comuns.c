#include <stdio.h>
#include <stdlib.h>

int main(void) {
   int conjunto1[10];
    int conjunto2[10];
    int valores_comuns[] = {0};
    int adicionado;
    int quantidade_valores_comuns_achados = 0;

    printf("Digite os 10 primereiros valores para o conjunto 1:\n");

    for (int i = 0; i < 10; i++) {
        printf("Posição %d: ", i +1);
        scanf("%d", &conjunto1[i]);
    }

    printf("Digite os 10 primereiros valores para o conjunto 2:\n");

    for (int i = 0; i < 10; i++) {
        printf("Posição %d: ", i +1);
        scanf("%d", &conjunto2[i]);
    }

    for (int i = 0; i<10; i++) {
        for (int j = 0; j < 10; j++) {
            if (conjunto1[i] == conjunto2[j]) {
                for (int k = 0; k < 10; k++) {
                    adicionado = 0;
                    if (valores_comuns[k] == conjunto1[i]) {
                        adicionado = 1;
                        break;
                    }
                }
                if (adicionado == 0) {
                    valores_comuns[quantidade_valores_comuns_achados] = conjunto1[i];
                    quantidade_valores_comuns_achados++;
                }
                break;
            }
        }
    }
    
    printf("\nElementos comuns aos dois conjuntos:\n");

    if (quantidade_valores_comuns_achados == 0) {
        printf("Nao ha elementos comuns.\n");

    } else {
        for (int i = 0 ; i < quantidade_valores_comuns_achados; i++) {
                printf("%d ", valores_comuns[i]);

        }
    }

    
    
}
