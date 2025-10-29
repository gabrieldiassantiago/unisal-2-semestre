#include <stdio.h>

int main(){
    FILE *arq;
    char nome[20] = "Ricardo";
    int i = 30;
    float a = 1.74;
    int result;
    arq = fopen("ArqGrav.txt","w");
    
    if(arq == NULL) {
        printf("Problemas na ABERTURA do arquivo\n");
        system("pause");
        exit(1);
    }

    fprintf(arq,"Nome: %s\n",nome);
    fprintf(arq,"Idade: %d\n",i);
    fprintf(arq,"Altura: %f\n",a);
    fclose(arq);

    return 0;
}
