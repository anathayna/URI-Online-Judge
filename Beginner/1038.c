#include <stdio.h>

int main(void) {
  int cod, qnt, total;
  
  scanf("%d", &cod);
  scanf("%d", &qnt);

  switch(cod){
  
  case 1 :
  printf("Total: R$ %.2lf\n", qnt*4.0);
  break;

  case 2 :
  printf("Total: R$ %.2lf\n", qnt*4.50);
  break;

  case 3 :
  printf("Total: R$ %.2lf\n", qnt*5.0);
  break;

  case 4 :
  printf("Total: R$ %.2lf\n", qnt*2.0);
  break;

  case 5 :
  printf("Total: R$ %.2lf\n", qnt*1.50);
  break;
  }
  return 0;
}
