#include <stdio.h>

int main() {
  float salarioBase, salarioReceber,imposto,aumento;
  printf("Digite o valor de seu salário: \n");
  scanf("%f%*c", &salarioBase);
  aumento = salarioBase+50;
  imposto = aumento * 10/100;
  salarioReceber = aumento - imposto;
  printf("Seu salário a receber será: %.2f já com a gratificação de R$50,00 inclusa e a respectiva dedução de imposto na porcentagem de 10 por cento no corrente ano. \n",  salarioReceber);
    return 0;
}
  