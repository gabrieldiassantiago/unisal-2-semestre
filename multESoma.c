#include <stdio.h>

int mult(int a, int b) {
    if (b == 0) {
        return 0;
    } else {
    return a + mult(a, b-1);
    }
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int resultado = mult(a, b);
    printf("%d", resultado);
}
