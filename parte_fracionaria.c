#include <stdio.h>

int main()
{
  double numero1, numero2;
  scanf("%lf %lf", &numero1, &numero2);

  double fracionaria_numero1 = numero1 - (int)numero1;
  double fracionaria_numero2 = numero2 - (int)numero2;
  
  if (fracionaria_numero1 > fracionaria_numero2) {
      printf("A parte fracionaria de 1 é maior que a de 2");
  } else if (fracionaria_numero2 > fracionaria_numero1) {
    printf("A parte fracionaria de 2 é maior que a de 1");

  } else {
    printf("São iguais");  }

}
