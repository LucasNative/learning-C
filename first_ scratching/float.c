#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <stdint.h>

int main(void) {
  float f = 2e2;
  double d = 1;

  printf("O tamanho de f (float) é: %zu Bytes / %zu Bits\n", sizeof f, sizeof f *8);
  printf("O tamanho de d (double) é: %zu Bytes / %zu Bits\n", sizeof d, sizeof d *8);
  printf("Valor de f: %f\n", f);
  printf("Valor de d: %f\n", d);
  
  return 0;
}
