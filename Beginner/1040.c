#include <stdio.h>

int main(void) {
  float N1, N2, N3, N4, M, e;

  scanf("%f", &N1);
  scanf("%f", &N2);
  scanf("%f", &N3);
  scanf("%f", &N4);

  M = (N1*2 + N2*3 + N3*4 + N4) / 10;

  printf("Media: %.1f\n", M);

  if (M >= 7.0){
    printf("Aluno aprovado.\n");
  }
    else if (M >= 5.0){
      printf("Aluno em exame.\n");
      scanf("%f", &e);

      printf("Nota do exame: %.1f\n", e);

      if (e + M / 2.0 > 5.0){
        printf("Aluno aprovado.\n");
      }
        else{
            printf("Aluno reprovado.\n");
        }

      printf("Media final: %.1f\n", (e + M) / 2.0);
    }

      else{
        printf("Aluno reprovado.\n");
      }
  return 0;
}
