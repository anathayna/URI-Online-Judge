#include <stdio.h>

int main(void) {
  int coelho = 0, rato = 0, sapo = 0, n, total;
  total = coelho = rato = sapo = 0;

  scanf("%d", &n);

  while(n--) {
    int x;
    char a;
    scanf("%d %c", &x, &a);
    if (a == 'C') coelho += x;
    else if (a == 'R') rato += x;
    else if (a == 'S') sapo += x;
  }

  printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n", total, coelho, rato, sapo);

  printf("Percentual de coelhos: %.2f %%\n", ((float)(coelho)/(float)(total))*100);
  printf("Percentual de ratos: %2.f %%\n", ((float)(rato)/(float)(total))*100);
  printf("Percentual de sapos: %2.f %%\n", ((float)(sapo)/(float)(total))*100);

  return 0;
}
