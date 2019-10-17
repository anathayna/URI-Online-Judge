#include <stdio.h>

int main(void) {
  
  int i, n, par=0, impar=0, positivo=0, neg=0;

  for(i=1; i<=5; i++){
    scanf("%d", &n);

    if(n%2==0){
      par++;
    } else{
      impar++;
    }

    if(n>0){
        positivo++;
    } else{
      if(n!=0){        
      neg++;
      }
    }
  }

  printf("%d valor(es) par(es)\n", par);
  printf("%d valor(es) impar(es)\n", impar);
  printf("%d valor(es) positivo(s)\n", positivo);
  printf("%d valor(es) negativo(s)\n", neg);

  return 0;
}