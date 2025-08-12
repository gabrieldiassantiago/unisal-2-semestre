#include <stdio.h>

int main()
{
 
  
    //float imc = peso / altura * altura;
    
    float peso, altura;
    
    scanf("%f", &peso);
    scanf("%f", &altura);
    
    float imc = peso / (altura * altura);
    
    
    if (imc < 18.5) {
        printf("Abaixo do peso");
    } else if (imc < 25.0 && imc >= 18.5) {
         printf("Peso normal ");
    } else if (imc < 30 && imc >= 25.0) {
         printf("Sobrepeso ");
    }  else {
         printf("Obesidade  ");
    }
    
    

}
