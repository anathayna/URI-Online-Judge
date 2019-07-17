#include <stdio.h>

int main(void) {
  
  float x, y, vm;

  scanf("%f", &x);
  scanf("%f", &y);

  vm = x / y;

  printf("%.3f km/l\n", vm);

  return 0;
}
