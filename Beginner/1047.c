#include <stdio.h>

int main(void) {
  int xi, x0, yi, y0, dx, dy; // x = hora // y = minuto

  scanf("%d", &xi);
  scanf("%d", &yi);
  scanf("%d", &x0);
  scanf("%d", &y0);

  dx = x0 - xi;

  if (dx < 0){
    dx = 24 + (x0 - xi);
  }

  dy = y0 - yi;

  if (dy < 0){
    dy = 60 + (y0 - yi);
    dx--;
  }
    if(xi == x0 && yi == y0){
      printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else{
      printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dx, dy);
    }

  return 0;
}
