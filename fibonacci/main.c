#include "biblioteca.h"
#include <stdio.h>


int termo_fibonacci(int n) {
	
	if (n == 2 || n== 3) {
		return 1;
	}
	
	return termo_fibonacci(n-1) + termo_fibonacci(n-2);
}

void imprime_termos(int n) {
	int i;
	for (i = 0; i<=n; i++) {

	
	}
}
