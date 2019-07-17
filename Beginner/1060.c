#include <stdio.h>
#include <math.h>

int main(void) {

  double n;
  int i, tmp=0;

  for(i=1; i<=6; i++){
    scanf("%lf", &n);
    if(n>0){
      tmp++;
    }
  }

  printf("%d valores positivos\n", tmp);

  return 0;
}