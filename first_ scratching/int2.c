#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <stdint.h>

int main(void) {
  int num = 122;

  printf("(num) tem: %zu Bytes / %zu Bits\n", sizeof num, sizeof num *8);
  printf("O valor de num é %d, e o seguinte é %d\n", num, num+1);
  
  return 0;
}
