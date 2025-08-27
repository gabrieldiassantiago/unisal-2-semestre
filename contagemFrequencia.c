#include <stdio.h>
#include <stdlib.h>

//vetor (array) > todos tem um mesmo nome, e tipo
//quando eu defino um tipo => eu armazeno

// 		int v1[10] => cria um vetor cm 10 posições
//		int v2[3] = {
		//5, 10, 15
// }
// se eu nao passo o tamanho do vetor, mas declaro seus valores, eles serão atribuidos automaticamente => deve fazer na inicialização
// se eu nao tenho nem o tamanho nem sua atribuição => int array = [] => isso nao pode acontencer



int main(int argc, char *argv[]) {
	
	int respostas[] = {1, 2, 5, 7, 4, 4, 7, 9, 4, 2, 6, 2, 6, 8, 1, 9, 2, 7, 2, 1};
	
	int contagem[10] = {0};
	
	for (int i = 0; i < 20; i++) {
	    
	    int nota = respostas[i];
	    
	   contagem[nota - 1]++;
	}
	
	for (int i = 0; i < 10; i++) {
        printf("A nota %d apareceu %d vez(es).\n", i + 1, contagem[i]);
	}


}
