
#include <stdio.h>

int main(){
    
    char disc[5] = "VACA";
    
    char *p = disc;
    
    
    /*
    while(*p != '\0') { diferente do fim da string  '\0'  = fim de string ou seja o ultimo elemento apos o fim
    
       printf("%c\n", *p);
       
       p++;
       
       
    }   * retorna o conteudo
    */
    while (*p =! '\0') {
        printf("%10d %10d %c\n", &p, p, *p);
        p++; //incremento do vetor
    }
    
    /*
    o *p faz: pega o conteudo apontado de uma determinada 4F53GG (endereço)
    &p => endereço do ponteiro
    
    /*
    
    //vet[0] = 3;
    vet => armazena o endereço de 3++++
    
    
}
