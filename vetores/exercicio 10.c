#include<stdio.h>

int calcula_fatorial(int n) {
  if (n == 1) return 1;
  if (n == 0) return 1;
  return n * calcula_fatorial(n-1);
  
}

int  main(){
  
  //Faça um programa que leia um vetor vet de 10 elementos e obtenha um vetor w cujos componentes são os fatoriais dos respectivos componentes de vet.

  int vet[10] = {1, 5, 7, 3, 2, 2, 8, 5, 9, 10};
  int w[10];

  for (int i = 0; i < 10; i++) {
    int fatorial = calcula_fatorial(vet[i]);
    w[i] = fatorial;
  }

  for (int i = 0; i < 10; i++) {
    printf("%d, ", w[i]);
  }

}