#include <stdio.h>

int main(void) {
  int a, b, c, d;

  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  scanf("%d", &d);

  if(b>c && d>a && ((c+d)>(a+b)) && (c && d)>= 0 && a%2==0){
    printf("Valores aceitos\n");
  }
  else{
    printf("Valores nao aceitos\n");
  }

  return 0;
}
