#include <stdio.h>

//3. Construa um programa em C que armazene 15 números em um vetor e imprima uma listagem numerada
//contendo o número e uma das mensagens: par ou ímpar.

int main()
{
    
 int numeros[] = {
     1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15
 };
 
 for (int i = 0; i < 15; i++) {
     if (numeros[i] % 2 == 0) {
         printf("Numero: %d e par\n", numeros[i] );
     } else {
        printf("Numero %d e impar\n", numeros[i] );
     }
 }
}
