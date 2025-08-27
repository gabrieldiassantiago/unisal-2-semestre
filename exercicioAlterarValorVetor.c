#include <stdio.h>

int main()
{
   float vet_armazena[10] = {0};
   
   for (int i = 0; i < 10; i++) {
       scanf("%f", &vet_armazena[i]);
   }
   
   float quadrado_vet[10] = {0};
   
   for (int j = 0; j < 9; j++) {
       float valor = vet_armazena[j];
       quadrado_vet[j] = valor * valor;
   }
   
   
    printf("\n--- Resultados ---\n");
    
    printf("Vetor Original:   [ ");
    for (int i = 0; i < 10; i++) {
        printf("%.2f ", vet_armazena[i]);
    }
    
    printf("]\n");

    printf("Vetor de Quadrados: [ ");
    for (int i = 0; i < 10; i++) {
        printf("%.2f ", quadrado_vet[i]);
    }
    printf("]\n");

    return 0;
}
