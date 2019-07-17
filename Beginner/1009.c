#include <stdio.h>

int main(void) {
  
  char NAME;
  double SALARY, SOLD, TOTAL;

  scanf("%s", &NAME);
  scanf("%lf", &SALARY);
  scanf("%lf", &SOLD);

  TOTAL = SALARY + SOLD * 0.15;

  printf("TOTAL = R$ %.2lf\n", TOTAL);

  return 0;
}
