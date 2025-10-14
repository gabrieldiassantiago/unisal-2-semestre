#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **p; //ponteiro do ponteiro
    int i, j; //
    int N = 2; //dimensao da matriz
    p = (int **) malloc(N * sizeof(int)); //sizeof recupera o tamanho de bytes de algo (cria espaço e relaciona a P)
    
    
    //realloc = ele diminui ou aumenta a quantidade de bytes 
    

    if (p == NULL) {
        printf("NAO DEU CERTO");
        return 1; 
    } //encerra o programa caso nao coneguir alocar a memoria
    
    for (i = 0; i < N; i++) {
        p[i] = (int *) malloc(N * sizeof(int)); //INT TEM 4 bytes
        
        if (p[i] == NULL) {
            
            //garante que vai alocar e que isso => "p[i] = (int *) malloc(N * sizeof(int));" vá funcionar
            
            printf("Não foi possivel");
            
        } 
        
    }
    
    for (int linha = 0; linha < N; linha++) {
        for (int coluna = 0; coluna < N; coluna++) {
            printf("Digite o elemento [%d][%d]: \n", linha, coluna);
            scanf("%d", &p[linha][coluna]);
        }
    }
    
    
        for (int i = 0; i < N ; i++) {
            for (int j = 0; j < N; j++) {
                free(p[i][j]);
            }
        }
        
       free(p);
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
                        printf("Quantidade de bytes para [%d] [%d] = %lld\n", i, j, sizeof(p[i][j]));

        }
    }
    
    
    


}
