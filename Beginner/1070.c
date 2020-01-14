/*
Leia um valor inteiro X. Em seguida apresente os 6 valores ímpares consecutivos a partir de X, um valor por linha, inclusive o X se for o caso.
*/

#include <stdio.h>

int main(void) {
  
  int i, x, o=6;

  scanf("%d", &x);

  for(i=x; i<(x+(o*2)); i+=2){
    int y;
    if(i%2==0){
      y = i+1;
      printf("%d\n", y);
    }else{
      y=i;
      printf("%d\n", y);
    }
  }

  return 0;
}