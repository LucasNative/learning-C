#include <stdio.h>

int main(void) {
  char ch1, ch2;
  printf("\nintroduza um caractere: ");
  scanf("%c", &ch1);
  printf("\nintroduza outro caractere: ");
  scanf(" %c", &ch2);
  printf("Os caracteres digitados foram: '%c' e '%c' \n", ch1, ch2);
}
