void atualizar(int *vet, int valor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        *(vet+i) = valor;
    }
}

int main() {
      int vet[5];
    int valor;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);
    
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(vet + i)); // imprime usando ponteiro
    }

    atualizar(vet, valor, 5);

    printf("Valores do vetor:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(vet + i)); // imprime usando ponteiro
    }
    printf("\n");

    return 0;
}
