#include <stdio.h>
#include <stdlib.h>

//Escreva um programa que peça um inteiro ao usuário, e com esse inteiro, ele imprima, linha-a-linha, a tabuada daquele número até o 10. Por exemplo, se ele escolher o número 2, o programa imprimirá: 2x1=2, 2x2=4, 2x3=6, ..., 2x10=20.

int main(){
int x;
int i;
int resultado = abs(x);

printf("Digite um número positivo: \n");
scanf("%d%*c",&x);
printf("O número escolhido foi %d, veja sua tabuada abaixo: \n",x);

    for(i=1;i<=10;i++){
        resultado = x*i;
        printf("%d x %d = %d \n", x, i,resultado);
    }
    

       
    return 0;
}