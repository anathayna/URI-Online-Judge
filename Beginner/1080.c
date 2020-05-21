/*
Leia 100 valores inteiros. Apresente então o maior valor lido e a posição dentre os 100 valores lidos.
*/

#include <stdio.h>

int main(void) {
  int i, n, max=-1, p;

  for(i=1; i<101; ++i){
    scanf("%d", &n);
    if(max<n) 
      max=n, p=i;
  }

  printf("%d\n%d\n", max, p);

  return 0;
}
