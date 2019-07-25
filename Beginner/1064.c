#include <stdio.h>
#include <math.h>

int main() {
  
  double n, total=0, media;
  int i, tmp=0;

  for(i=1; i<=6; i++){
    scanf("%lf", &n);
    if(n>=0){
      tmp++; //soma os positivos de um em um
      total += n; //soma todos os valores digitados
    }
  }

  media = total / tmp;

  printf("%d valores positivos\n", tmp);
  printf("%.1lf\n", media);

  return 0;
}