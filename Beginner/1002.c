#include <stdio.h>
#include <math.h>

int main(void) {
  
  double A, R;

  scanf("%lf", &R);

  A = 3.14159 * pow(R,2); //pow(variável,expoente)

  printf("A=%.4lf\n", A);

  return 0;
}
