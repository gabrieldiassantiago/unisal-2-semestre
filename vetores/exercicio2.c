#include <stdio.h>

//2. Faça um programa que armazene 10 letras em um vetor e imprima uma listagem numerada.

int main()
{
    
    char letras[] = {
        'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'
    };
    
    
    int i = 0;
    
    
    for (i = 0; i < 10; i++) {
        printf("Letra %d: %c, \n", i + 1,  letras[i]);
    }
    
}
