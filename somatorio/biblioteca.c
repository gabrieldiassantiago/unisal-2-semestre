#include "biblioteca.h"
#include <stdio.h>


int somatorio(int n) {
	int soma = 0;
	int i;
	for (i = 1; i <=n;i++) {
		soma+=i;
	}
	return soma;
}
