#include <stdio.h>

void calcular(int *vet, float *freq_absoluta, float *freq_relativa) {
    for (int i = 0; i < 10; i++) {
        freq_absoluta[i] = 0;
        freq_relativa[i] = 0;
        for (int j = 0; j < 10; j++) {
            if (vet[j] == vet[i]) {
                freq_absoluta[i]++;
            }
        }
        freq_relativa[i] = (float)freq_absoluta[i]/10;
    }
}

int main() {
    int vet[10];
    
    float freq_absoluta[10], freq_relativa[10];


    for (int i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vet[i]);
    }

    calcular(vet, freq_absoluta, freq_relativa);

    for (int i = 0; i < 10; i++) {
        int impresso = 0;
        for (int j = 0; j < i; j++) {
            if (vet[i] == vet[j]) {
                impresso = 1;
                break;
            } 
        }
        if (!impresso) {
            printf("Valor: %d - Frequência Absoluta: %.0f - Frequência Relativa: %.2f\n", vet[i], freq_absoluta[i], freq_relativa[i]);
        }
    }

    
}