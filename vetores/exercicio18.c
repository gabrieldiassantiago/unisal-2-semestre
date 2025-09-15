#include <stdio.h>

void ordenar(int vet[], int tamanho) {
    for (int i = 0; i < 19 ; i++) {
        for (int j = 0; j < 20 - i - 1; j++) {
            if (vet[j] > vet[j+1]) {
                int temp = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = temp;
            }
        }
    }
}

void gerar_vet_sem_repetir(int vet[], int tamanho, int vet2[]) {
    int k = 0;
    for (int i = 0; i < 20; i++) {
        if (vet[i] != vet[i-1]) {
            vet2[k++] = vet[i];
        }
      //explicando:
      /*
      k é o controlador do indice de vet2, vamos simular =>
      
      vet[] = {2, 3, 3, 4};
      
      i = 0;
      
      if (vet[0] != (diferente) vet[i-1] // se o valor que está no indice 0 de vet for diferente do seu anterior, ele insere este valor em vet2[k++] = vet[i] (recebe o valor);

      neste caso, tendo a lista    vet[] = {2, 3, 3, 4}; como base, o indice 0 é o 2:

      if (2 != (não tem outro, pois i é 0 inicialmente), ele pega este 2 e coloca em vet2[k++] = > vet2[0] e acrescente k no proximo iteração
      ---------------------------------------------------------------------------------------------------------------------------------------------------------------------

      i = 1;
      vet[] = {2, 3, 3, 4};
      if (vet[1] != vet[0]) {
        vet2[k++] = vet[i];
      } ou seja, se 3 for diferente de 2, ele vai e coloca o 3 dentro de vet2[k++], que neste caso agora vet2 =>  vet2[1];
      
          */
      
    }
    for (int i = 0; i < 20; i++) {
          printf("%d ", vet2[i]);
    }
}

int main() {
    
  
    int vet[20],  vet2[20];

    printf("Digite 20 valores inteiros:\n");
    for (int i = 0; i < 20; i++) {
        scanf("%d", &vet[i]);
    }

    ordenar(vet, 20);
    gerar_vet_sem_repetir(vet, 20, vet2);
    

    

}
