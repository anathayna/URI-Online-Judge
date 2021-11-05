#include <stdio.h>

int main(){
  int n, x, y, soma;

  scanf("%d", &n);

  for(int i=0; i<n; i++) {
    soma=0;
    scanf("%d %d", &x, &y);
    if(x>y) {
      x+=y;
      y=x-y;
      x-=y;
    }
    for(int j=x+1; j<y; j++){
      if(j%2==1) soma+=j;
    }
    printf("%i\n", soma);
  }

  return 0;
}