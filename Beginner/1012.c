#include <stdio.h>
#include <math.h>

int main(void) {
  
  double A, B, C, Ti, Ci, Ta, Q, R;

  scanf("%lf", &A);
  scanf("%lf", &B);
  scanf("%lf", &C);

  Ti = (A * C) / 2;
  Ci = 3.14159 * pow(C,2);
  Ta = (A + B) * C / 2;
  Q = B * B;
  R = A * B;

  printf("TRIANGULO: %.3lf\n", Ti);
  printf("CIRCULO: %.3lf\n", Ci);
  printf("TRAPEZIO: %.3lf\n", Ta);
  printf("QUADRADO: %.3lf\n", Q);
  printf("RETANGULO: %.3lf\n", R);
  
  return 0;
}
