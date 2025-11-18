#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char* inverterTexto(char *texto) {

    int tamanho = strlen(texto);

    char *textoInvertido = malloc((tamanho + 1) * sizeof(char));

    if (textoInvertido == NULL) {
           printf("Erro ao alocar memória!\n");
        return NULL;
    }

    for (int i = 0; i < tamanho; i++){
        textoInvertido[i] = texto[tamanho-1-i];
    }
    
    return textoInvertido;

}

int main() {
    char texto[] = "Engenharia da Computacao"; // Vetor original que já contém o texto na memória
    char *resultado = inverterTexto(texto);     // 'resultado' recebe o ponteiro para a string invertida
    if (resultado != NULL) {
        printf("Texto original: %s\n", texto);        // Mostra o texto original
        printf("Texto invertido: %s\n", resultado);  // Mostra o texto invertido
        free(resultado);   // Libera a memória alocada para evitar vazamento
    }
    return 0;
}