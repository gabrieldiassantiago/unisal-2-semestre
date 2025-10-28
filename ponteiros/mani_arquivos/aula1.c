#include <stdio.h>
#include <stdlib.h>


// FILE * fopen(char *nome_arquivo, char *modo);
// (char *modo => pode ser r, w, a) => 

/*
    r -> ele apenas lê um arquivo, e dá erro se não encontrar
    w -> ele cria se não existir
    a -> anexaao final do arquivo para continuar escrevendo, abre para continuar usando como está

*/

int main(int argc, char *argv[]) {
    
	FILE *arq;
	
	char string[100];
	int i;
	arq = fopen("arquivoteste_2", "a");
	
	if (arq == NULL) {
		printf("ERRO");
		exit(1);
	}
	
	gets(string);
	
	for (i = 0; i < strlen(string); i++) { //strlen(variavel) -> retorna o tamanho 
		fputc(string[i], arq);
		fclose(arq);
	}
	
	return 0;
}