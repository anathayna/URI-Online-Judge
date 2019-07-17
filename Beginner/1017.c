#include <stdio.h>
#include <math.h>

int main(void) {
  
  int h;
  float vm, l;

  scanf("%d", &h);
  scanf("%f", &vm);

  l = (vm*h)/12;

  printf("%.3f\n", l);

  return 0;
}
