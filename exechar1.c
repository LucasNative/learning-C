#include <stdio.h> 

int main(void) {
  int i;
  printf("\nDigite um número de 0 a 255: ");
  scanf("%d", &i);
  printf("O número inteiro digitado foi: %d, seu caractere correspondente é: %c \n", i, (char) i);
}
