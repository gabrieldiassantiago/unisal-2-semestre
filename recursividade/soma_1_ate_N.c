#include <stdio.h>

int soma(int n) {
    if (n == 1) {
        return 1; 
    } else {
        return n + soma(n - 1); 
    }
}

int main(void) {
    int n = 5;
    printf("Soma de 1 até %d = %d\n", n, soma(n));
    return 0;
}
