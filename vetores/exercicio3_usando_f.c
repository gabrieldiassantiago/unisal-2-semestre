#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insere_valor(int v[], int tamanho) {
    srand(time(NULL));
    for (int i = 0 ; i < tamanho; i++) {
        v[i] = 1 + rand() % 14;
    }
}

void imprimir(int v[], int tamanho ) {
    for (int i = 0; i < tamanho; i++) {
        if (v[i] % 2 == 0) {
            printf("%d. O valor: %d é par\n", i + 1, v[i]);
            
        } else {
             printf("%d. O valor: %d é impar\n", i + 1, v[i]);
        }
    }
}


int main()
{

int tamanho = 15;
int v[tamanho];

insere_valor(v, tamanho);
imprimir(v, tamanho);
   
}
