int main() {
  int vet[5];
    
    int *p = vet;
    
    for (int i = 0; i < 5; i++) {
        scanf("%d", p + 1);
    }
    
    for (int i = 0; i < 5; i++) {
        printf("Dobro do valor %d: %d\n", i+1, 2 * (*(p+1))); //fal o calculo e depois acessa o indice de p que recebe vet, que é um vetor
    }
}
