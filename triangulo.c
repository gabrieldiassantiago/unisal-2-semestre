#include <stdio.h>


void valida_triangulo(int a, int b, int c) {
    if (a < b+c && b < a+c && c<a+b) {
        if (a==b  && b == c) {
        printf("O triangulo e equilatero");
        } else if ( a== b || a == c || b==c) {
            printf("O triangulo é isosceles");
        } else {
        printf("O triangulo e escaleno");
        }
    } else {
    
    printf("Os lados nao formam um triangulo");

    }
}

int main()
{
 
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
      valida_triangulo(a, b, c);

    

}
