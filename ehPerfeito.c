#include <stdio.h>

int soma = 0;

void ehPerfeito(int n) {
    for (int dividores = 1; dividores < n; dividores ++) {
        if (n % dividores == 0) {
            soma+=dividores;
        }
    }
    if (soma == n ){
        printf("É perfeito");
    } else{
        printf("Não é perfeito");
    }
}



int main() {
    int n;
    scanf("%d", &n);
    ehPerfeito(n);
}
