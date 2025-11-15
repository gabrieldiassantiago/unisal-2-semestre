#include <stdio.h>

void atualizarValores(double *ptr, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        *(ptr + i) = *(ptr + i) * 1.0478;
    }
}

int main() {
    double items[15];
    double *ptr_items = items;
    
    for (int i = 0; i < 15; i++) {
        scanf("%lf", ptr_items + i);
    }

    atualizarValores(ptr_items, 15);

    printf("Valores atualizados:\n");

    for (int i = 0; i < 15; i++) {
        printf("%.2lf\n", *(ptr_items + i));
    }

    return 0;
}
