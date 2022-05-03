#include <stdio.h>

int main() {

  float deposito, rendimento, valorTotal, taxaJuros;

  printf("Digite o valor de seu depósito: \n");
  scanf("%f%*c",&deposito);
  printf("Digite o valor da táxa de juros: \n");
  scanf("%f%*c",&taxaJuros);
  rendimento = deposito*taxaJuros;
  deposito = rendimento+deposito;
  printf("O valor mensal do rendimento na taxa de juros %.12f será de %.2f\n", taxaJuros,rendimento);
  printf("E o valor total depois do rendimento será de %.2f",deposito);
    return 0;
}
  