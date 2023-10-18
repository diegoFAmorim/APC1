#include <stdio.h>

int main() {
  //Faça um programa em C que calcule o fatorial de um número inteiro.
  //int numero = 0;
  int numero;
  //long int fatorial = 1;
  //printf("Entre com um numero > 0: ");
  int leu_certo = scanf("%i", &numero);
  for(int i=0; i<100; i++) {
    fatorial = fatorial * (numero - i);
  }
  printf("o fatorial de %i é %li\n", numero, fatorial);

  return 0;
}