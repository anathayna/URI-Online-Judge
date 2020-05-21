/*
Leia 1 valor inteiro N, que representa o número de casos de teste que vem a seguir. Cada caso de teste consiste de 3 valores reais, cada um deles com uma casa decimal. Apresente a média ponderada para cada um destes conjuntos de 3 valores, sendo que o primeiro valor tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso 5.
*/

#include <stdio.h>

int main(void) {
  int i, n;
  double a, b, c;

  scanf("%d", &n);

  for(i=0; i<n; ++i){
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    double mp = ((a/10)*2)+((b/10)*3)+((c/10)*5);

    printf("%.1f\n", mp);
  }
  
  return 0;
}