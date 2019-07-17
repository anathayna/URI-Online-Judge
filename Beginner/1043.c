#include <stdio.h>

int main(void) {
  float a, b, c;

  scanf("%f", &a);
  scanf("%f", &b);
  scanf("%f", &c);

  if(a<b+c && b<a+c && c<a+b){ //soma dos angulos internos de um triangulo é igual a 180
    printf("Perimetro = %.1f\n", a+b+c);
  }
  else{
    printf("Area = %.1f\n", c*(a+b)/2);
  }

  return 0;
}
