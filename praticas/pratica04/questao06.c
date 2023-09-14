//Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a)
#include <stdio.h>
#include <math.h>

int main() {
  float a = -1.0f;
  float b = 2.0f;
  float c = 1.0f;
  float valor1;
  float valor2;

  valor1 = (-b + pow((pow(b,2) - 4 * a * c),1/2))/2*a;
  valor2 = (-b - pow((pow(b,2) - 4 * a * c),1/2))/2*a;

  printf("os resultados da sua equação são %.2f e %.2f ",valor1,valor2);
  
  return 0;
}