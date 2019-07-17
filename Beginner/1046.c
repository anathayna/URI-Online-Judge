#include <stdio.h>

int main(void) {
  int x, y, d;

  scanf("%d", &x);
  scanf("%d", &y);

  d = y - x; // final - inicial

  if(d < 0){
    d = 24 + (y - x); // 24 horas
  }
    if(x == y){
      printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else{
      printf("O JOGO DUROU %d HORA(S)\n", d);
    }

  return 0;
}
