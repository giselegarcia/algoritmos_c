/*O Vinicius quer vender essa bike por R$18999,00 reais para mim. sim um completo absurdo . Mas Supondo que ele vai parcelar essa compra, faça um programa que :
1- pergunte o valor da parcela que eu posso pagar e o algoritmo ira calcular quantas parcelas o Vinicius deve fazer .
2- Informe a quantidade de parcelas e ele mostre o valor da parcelas.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    float mensalidade;
    float bike = 18999.00;
    int calculo = bike/mensalidade;

    printf("O valor da bicileta oferecida pelo Vinicius é de %.2f, qual o valor que você pode pagar mensalmente por ela? \n", bike);
    scanf("%f%*c", &mensalidade);
    printf("Muito bem, você escolheu pagar R$ %.2f por mês, que resultara em %d parcelas.\n", mensalidade, calculo);





}