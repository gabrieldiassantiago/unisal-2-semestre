#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

void main() {
	int a = 50, b = 5;
	int resultadoSoma = soma(a,b);
	int resultadoSub = subtracao(b,a);
	
	printf("%d\n", resultadoSoma);
	printf("%d", resultadoSub);
}
