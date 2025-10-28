int main() {

   int tamanho;
    
        printf("Digite o tamanho do vetor: ");
        scanf("%d", &tamanho);
        
    int *vetor = malloc(tamanho * sizeof(int));
    
   if (vetor == NULL) {
         printf("Erro na alocação de memória!\n");
        return 1;
   }
   
      printf("\nDigite %d elementos:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento [%d]: ", i);
        scanf("%d", &vetor[i]);
    }
    
     printf("\nVetor digitado:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }
    
    free(vetor); //libera a memoria
  
}
