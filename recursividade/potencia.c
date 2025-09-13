#include <stdio.h>


int potencia(int k, int n) {
    if (n == 0) {
        return 1;
    } //pois todo numero elevado a zero, irá ser 1
  
    return k * potencia(k, n-1);
}

int main(void) {
    int k = 3, n = 3;
    int resultado = potencia(k,n);
    printf("Resultado: %d", resultado);
   
}

