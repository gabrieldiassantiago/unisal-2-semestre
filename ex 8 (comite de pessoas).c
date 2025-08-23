#include <stdio.h>

int comm(int n, int k) {
    if (k==1) {
        return n;
    } else if (k==n) {
        return 1;
    } else if (k>1 && n>k) {
        return comm(n-1, k) + comm(n-1, k-1);
    }
    return 0;
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int resultado = comm(n, k);
    printf("%d", resultado);
}
