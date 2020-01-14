/*
Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo, mostrando essas informações.
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