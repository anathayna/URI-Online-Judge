#include <stdio.h>
#include <math.h>

int main(void) {
  
  int a, b, c, maxab, max;

  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);

  maxab = ((a + b + abs(a - b)) / 2);
  max = ((maxab + c + abs(maxab - c)) / 2);

  printf("%d eh maior\n", max);

  return 0;
}
