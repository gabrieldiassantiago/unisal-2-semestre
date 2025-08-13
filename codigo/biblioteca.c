#define DEBUG
#include "biblioteca.h"
#include <stdio.h>


int subtracao(int a, int b) {
	LOG_DEBUG("Executando a subtração");
	return a-b;
}
int soma(int a, int b) {
	LOG_DEBUG("Executando a soma");
	return a+b;
}
