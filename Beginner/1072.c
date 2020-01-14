/*
Leia um valor inteiro N. Este valor ser� a quantidade de valores inteiros X que ser�o lidos em seguida.
Mostre quantos destes valores X est�o dentro do intervalo [10,20] e quantos est�o fora do intervalo, mostrando essas informa��es.
*/

#include <stdio.h>

int main(void) {
  int i, n, aux, in=0, out=0;

  scanf("%d", &n);

  for(i=0; i<n; i++){
    scanf("%d", &aux);
    if(aux>=10 && aux<=20){
      in++;
    }else{
      out++;
    }
  }

  printf("%d in\n", in);
  printf("%d out\n", out);

  return 0;
}