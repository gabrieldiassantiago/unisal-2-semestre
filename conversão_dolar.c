#include <stdio.h>

float valor_dolar = 5.50;

float converter_dolar(float n) {
      return n * valor_dolar;
}

int main()
{
   float reais;
   float dolar = 5.50;
   printf("Digite um valor em reais: ");
   
   scanf("%f", &reais);
   
   float resultado = converter_dolar(reais);
   printf("%f", resultado);
}
