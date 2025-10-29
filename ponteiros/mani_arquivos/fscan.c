#include <stdio.h>

int main(){
    FILE *arq;
    
    char texto[20], nome[20];

    int i;

    float a;

    int result;

    arq = fopen("ArqGrav.txt","r");

    if(arq == NULL) {
        printf("Problemas na ABERTURA do arquivo\n");
        system("pause");
        exit(1);
    }

    //revisar

    fscanf(arq,"%s%s",texto,nome); // vetor
    printf("%s %s\n",texto,nome); //  vetor
    fscanf(arq,"%s %d",texto,&i); //  é que i atualmente não é um ponteiro
    printf("%s %d\n",texto,i);
    fscanf(arq,"%s%f",texto,&a);
    printf("%s %f\n",texto,a);
    fclose(arq);

        int remove(const char *arq);

    return 0;
    
}
