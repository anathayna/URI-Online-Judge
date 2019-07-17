#include <stdio.h>
#include <math.h>

int main(void) {
  double a, b, c, R1, R2, delta;

  scanf("%lf", &a);
  scanf("%lf", &b);
  scanf("%lf", &c);

  delta = (b*b) - (4*a*c);

  R1 = (-b + sqrt(delta)) / (2*a);
  R2 = (-b - sqrt(delta)) / (2*a);

  if(a!=0 && delta>0){
    printf("R1 = %.5lf\nR2 = %.5lf\n", R1, R2);
  }
  else{
    printf("Impossivel calcular\n");
  }

  return 0;
}
