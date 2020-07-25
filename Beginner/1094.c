/*
A primeira linha de entrada contém um valor inteiro N que indica os vários casos de teste que vem a seguir. Cada caso de teste contém um inteiro Quantia (1 ≤ Quantia ≤ 15) que representa a quantidade de cobaias utilizadas e um caractere Tipo ('C', 'R' ou 'S'), indicando o tipo de cobaia (R:Rato S:Sapo C:Coelho).
*/

#include <stdio.h>

int main(void) {
  int C=0, R=0, S=0;
  int i, n, t, x;
  double p, q, r;
  char c;

  scanf("%d", &n);

  for(i = 0; i < n; i++) {
    scanf("%d %c", &x, &c);
    if (c == 'C') C = C + x;
    else if (c == 'R') R = R + x;
    else if (c == 'S') S = S + x;
  }
  t = R+C+S;
  p =(C*100.00) / t;
  q =(R*100.00) / t;
  r =(S*100.00) / t;

  printf("Total: %d cobaias\n", t);

  printf("Total de coelhos: %d\n", C);
  printf("Total de ratos: %d\n", R);
  printf("Total de sapos: %d\n", S);

  printf("Percentual de coelhos: %.2f %%\n", p);
  printf("Percentual de ratos: %2.f %%\n", q);
  printf("Percentual de sapos: %2.f %%\n", r);

  return 0;
}