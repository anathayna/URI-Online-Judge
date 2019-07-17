#include <stdio.h>

int main(void) {
  
  int NUMBER, WHOURS;
  float PHOURS, SALARY;

  scanf("%d", &NUMBER);
  scanf("%d", &WHOURS);
  scanf("%f", &PHOURS);

  SALARY = WHOURS * PHOURS;

  printf("NUMBER = %d\n", NUMBER);
  printf("SALARY = U$ %.2f\n", SALARY);

  return 0;
}
