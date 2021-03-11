#include <stdio.h>
#include <stdbool.h>

int main(void) {
  bool b;
  
  b = false;

  printf("O tamanho de b é: %lu\n", sizeof b);
  printf("O valor de b é: %i\n", b);
}
