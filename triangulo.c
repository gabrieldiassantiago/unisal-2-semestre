#include <stdio.h>

void valida_triangulo(int a, int b, int c) {
    
    //3 lados iguais equilatero
    
    if (a == b && a == c) {
        printf("O triangulo é equilatero");
    } else if (a == b || b == c || c == a) {
        printf("O triangulo é isosceles");
    } //2 lados iguais = isosceles
    else {
        printf("O triangulo é escaleno");
    }
}


int main()
{
     
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    valida_triangulo(a, b, c);
    
 
}
