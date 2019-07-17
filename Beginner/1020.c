#include <stdio.h>
#include <math.h>

int main(void) {
  
  int id, ano, mes, dia;

  scanf("%d", &id);

  ano = id / 365;
  mes = id % 365 / 30;
  dia = id % 365 % 30;

  printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);

  return 0;
}
