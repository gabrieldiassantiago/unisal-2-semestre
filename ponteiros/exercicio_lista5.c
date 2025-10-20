/*5. Faça um programa que receba dois valores inteiros, após receber esses dois valores, uma função deve calcular
e retornar para o programa o resultado da soma e da subtração dos valores. Obs.: Apenas uma função deve
realizar esta operação, desta forma, faça uso de ponteiros.
*/

#include <stdio.h>

void calculos(int valor1,int valor2, int *soma, int *subtracao) {
    *soma = valor1  + valor2;
    *subtracao = valor1 - valor2;
}


int main()
{
  
  
    
    int valor1, valor2, resultado_soma, resultado_subtracao;
    
    printf("Digite dois valores inteiros: ");
     scanf("%d %d", &valor1, &valor2);
     
    calculos(valor1, valor2, &resultado_soma, &resultado_subtracao);
     
     
      printf("Soma: %d\n", resultado_soma);
    printf("Subtração: %d\n", resultado_subtracao);

    
    
   
   
}
