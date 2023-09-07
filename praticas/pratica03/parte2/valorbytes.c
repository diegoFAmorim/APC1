#include <stdio.h>

int main() {
  int gigabytes = 1.0f;

  float bytes = gigabytes * 1024 * 1024 * 1024;

  printf("O valor de gigabytes em bytes e equivalente a %f\n", bytes);

  return 0;
}