#include <stdio.h>

int main() {

  int num1;
  int num2;
  int num3;
  
  while(num1 > 0){
    printf("Digite o primeiro número: \n");
    scanf("%d%*c",&num1);
    if(num1>0){
      printf("Só não vale números negativos, então tente de novo\n");
      continue;
    }
  }
  return 0;
  
}
  