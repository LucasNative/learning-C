#include <stdio.h>
#include <limits.h>
int main(void){
  int i = INT_MAX;

  printf("O tamanho de i (int) é: %zu Bytes / %zu Bits\n", sizeof i, sizeof i *8);
  printf("Valor de i: %d\n", i);
  
  return 0;
}
