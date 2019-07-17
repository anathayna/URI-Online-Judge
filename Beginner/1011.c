#include <stdio.h>
#include <math.h>

int main(void) {
  
  double V, R;

  scanf("%lf", &R);

  V = (4.0/3) * 3.14159 * pow(R,3); //pow(variável,expoente)

  printf("VOLUME = %.3lf\n", V);

  return 0;
}
