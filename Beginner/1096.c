#include <stdio.h>

int main(void) {
  int I=1, J=7;

  for(I=1; I<10; I++) {
    for(J=7; J>=5; J--) {
      if(I%2==1) printf("I=%d J=%d\n", I, J);
    }
  }

  return 0;
}