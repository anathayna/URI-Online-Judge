#include <stdio.h>

int main(void) {
  
  int product, unit;
  float value, pagar;

  scanf("%d %d %f", &product, &unit, &value);
  pagar = unit * value;

  scanf("%d %d %f", &product, &unit, &value);
  pagar += unit * value;

  printf("VALOR A PAGAR: R$ %.2f\n", pagar);

  return 0;
}
