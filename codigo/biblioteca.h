//inclusion guards

#ifndef BIBLIOTECA_H //se definido, faz algo

#define BILIOTECA.H

#ifdef DEBUG

	#define LOG_DEBUG(msg) printf("[DEBUG]") //cria uma mensagem
	
#else

	#define LOG_DEBUG(msg); //nada
	
#endif

int soma(int a, int b);

int subtracao(int a, int b);

#endif

