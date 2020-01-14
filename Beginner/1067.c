/*
Leia um valor inteiro X (1 <= X <= 1000). Em seguida mostre os ímpares de 1 até X, um valor por linha, inclusive o X, se for o caso.
*/

#include <stdio.h>

int main(void) {

  int x, i;

  scanf("%d", &x);

  for(i=1; i<=x; i++){
    if(i%2 != 0) //ou == 1
      printf("%d\n", i);
  }

  return 0;
}