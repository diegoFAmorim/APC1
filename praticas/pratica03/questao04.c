//Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.

#include <stdio.h>

int main() {
  float preçoinicial = 120.0f;
  float icms = 0.17f;
  float cofins = 0.076f;
  float pis = 0.0165f;
  float um = 1.0f;

  float preçof = (um + icms + cofins + pis) * preçoinicial;
  float preçopis = pis * preçoinicial;
  float preçoconfins = cofins * preçoinicial;
  float preçoicms = icms * preçoinicial;

  printf("O preço final de um produto é %f\n", preçof);
  printf("O valor do pis é %f\n", preçopis);
  printf("O valor do confins é %f\n", preçoconfins);
  printf("O valor do icms é %f\n", preçoicms);

  return 0;
}