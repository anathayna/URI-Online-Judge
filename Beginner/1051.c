//País Lisarb
//Moeda Rombus

#include <stdio.h>

int main(void){

  float rombus, imposto;
  scanf("%f", &rombus);

  if(rombus>=0 && rombus<=2000)
    printf("Isento\n");

    else if(rombus>=2000.01 && rombus<=3000) {
      imposto = (rombus-2000)*0.08; //8%
      printf("R$ %.2f\n", imposto); 
    }
      else if(rombus>=3000.01 && rombus<=4500){
        imposto = (1000*0.08)+((rombus-3000)*0.18); //18%
        printf("R$ %.2f\n", imposto); 
      }
        else if(rombus>=4500){
          imposto = (1000*0.08)+(1500*0.18)+((rombus-4500)*0.28); //28%
          printf("R$ %.2f\n", imposto);
        }
          
  return 0;
}