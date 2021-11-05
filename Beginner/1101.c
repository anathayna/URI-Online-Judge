#include <stdio.h>

int main(void) {
  while(1) {
    int i, m, n, sum=0;

    scanf("%d %d", &m, &n);

    if(m<=0 || n<=0) break;

    if(n > m) {
      int aux = n;
      n = m;
      m = aux;
    } 

    for(i=n; i<=m; i++) {
      printf("%d ", i);
      sum += i;
    }

    printf("Sum=%d\n", sum);
  }

  return 0;
}