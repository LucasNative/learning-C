#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <limits.h>

int main(void) {
  long long i = LLONG_MAX;

    printf("O valor de %llu, é: %zu Bytes / %zu Bits\n", i, sizeof i, sizeof i *8);
  return 0;
}
