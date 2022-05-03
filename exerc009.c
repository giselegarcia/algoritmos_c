#include <stdio.h>

int main() {

  int area,base,altura;

  printf("Digite o valor da base do triângulo: \n");
  scanf("%d%*c",&base);
  printf("Digite o valor da altura do triângulo: \n");
  scanf("%d%*c",&altura);
  area = ((base*altura)/2);
  
  printf("A área do triângulo é: %d \n", area);
  
    return 0;
}