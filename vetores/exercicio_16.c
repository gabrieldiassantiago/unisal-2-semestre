#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void valores(int v[], int tamanho) {
    
    srand(time(NULL));
    
    for (int  i = 0; i < tamanho; i++) {
       v[i] =  rand() % 100;
    }

}

void calcular(int v[], int tamanho) {
    
    int media = 0;
    int qtd_iguais30 = 0;
    int qtd_maior_media = 0;
    int qtd_igual_media = 0;
    
    for (int i = 0;  i < tamanho; i++) {
        
    int soma = 0;
    int media = 0;
    
    soma+=v[i]++;
    
    media = soma / 100;
    
        
     if (v[i] == 30) {
         qtd_iguais30++;
     } else if (v[i] > media) {
         qtd_maior_media++;
         
     } else {
         qtd_igual_media++;
     }
     
    }
    
    printf("Valores iguais a 30: %d\n",  qtd_iguais30);
    printf("Valores  maior que a media: %d\n", qtd_maior_media);
    printf("Valores igual a media %d\n", qtd_igual_media);
    
}


int main()
{
    int tamanho = 15;
    int v[15];
    
   valores(v, tamanho);
   calcular(v, tamanho);
   
}
