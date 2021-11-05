#include <stdio.h>

int main(void) {
  float I, J;
  int aux;

  for(I=0.0; I<=2.2; I=I+0.2) {
    if(aux==5) aux=0;
      for(J=1; J<=3; J++) {
        if(aux==0)
          printf("I=%.0f J=%.0f\n", I, J+I);
        else if(I==2.0)
          printf("I=%.0f J=%.0f\n", I, J+I);
        else
          printf("I=%.1f J=%.1f\n", I, J+I);
      }
      aux++;
  }

  return 0;
}