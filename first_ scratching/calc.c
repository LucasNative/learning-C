#include <stdio.h>
#include <stdlib.h>

int main(void) {

  float x=0, y=0, res=0;
  int opt=0, cont=0;

  do {
   printf("\n\t***Welcome to simple calc***\n");
   printf("\nPress:\n");
   printf(" 1 -\tto ADD\n 2 -\tto SUBTRACT\n 3 -\tto MULTIPLY\n 4 -\tto DIVIDE\n");
   scanf("%d", &opt);
   printf("\n--------------------------");
   printf("\nInsert first number: ");
   scanf("%f", &x);
   printf("\nInsert second number: ");
   scanf("%f", &y);
   switch(opt) {
    case 1: 
        res = x+y;
        break;
    case 2:
        res = x-y;
        break;
    case 3:
        res = x*y;
        break;
    case 4:
        res = x/y;
        break;
    defaut:
        printf("Digite uma opção válida!");
        break;
   }
      printf("\nResult is: %0.2f ", res);
      printf("\n\nPress 1 to continue. \n");
      scanf("%i", &cont);
   }while(cont==1);

}
  
 
