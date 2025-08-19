#include <stdio.h>

int fibo(int n) {
	if (n == 0 || n == 1) {
		return n;
	} 
	return fibo(n-1) + fibo(n-2);

}

void main() {
	int numero;
	scanf("%d", &numero);
	int resultado = fibo(numero);
  printf("%d", resultado);
}
