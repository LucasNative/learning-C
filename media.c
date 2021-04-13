#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
  float num1, num2, media;

  setlocale(LC_ALL, "");

  printf("Digite a primeira nota: ");
  scanf(" %f", &num1);
  printf("Digite outro número: ");
  scanf(" %f", &num2);
  media = (num1 + num2) / 2;
  
  if(media >= 7.0) {
  printf("\nAluno(a) aprovado(a), com nota %.2f.\n",media);
 }else {
 printf("\nAluno(a) não foi aprovada,%.2f nota insuficiente.\n",media);
 }
}
