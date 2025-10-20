int main() {
  float vet[10]; // vetor de números reais
    
    for (int i = 0; i < 10; i++) {
        scanf("%f", &vet[i]); // lê números reais
    }
    
    for (int i = 0; i < 10; i++) {
        printf("Endereço do %dº valor: %p\n", i+1, (void*)&vet[i]); // imprime endereço
    }
}
