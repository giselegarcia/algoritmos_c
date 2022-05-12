#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 //Tenho uma meta de andar 5 mil km esse ano. Faça um algoritmo que calcule quantos km eu preciso andar por dia, por semana e por mês para chegar na minha meta.E Sabendo que em 62,7 km eu gasto 2664 calorias em media, calcule tbm quantas calorias vou gastar em média a cada pedal por dia, semana e mes

int main() {

int km = 5000;
int dia = km/365;
int semana = dia*7;;
int mes = dia*30;
int ano = mes*12;
int escolha;
printf("Olá, sua meta de pedaladas para o ano de 2022 é de 5mil km. \n");
printf("Você pode descobrir quantos km deverá pedalar por dia, semana e ano escolhendo umas das opções abaixo: \n ");
    printf(" (1) Dia (2) semana (3)Ano (4) Encerrar \n \n");
  
for(escolha = 0; escolha >4; escolha ++){
    printf(" (1) Dia (2) semana (3)Ano (4) Encerrar \n \n");
    scanf("%d%*c", &escolha);
    if (escolha == 1){
printf("Você tem que pedalar %d km por dia para alcançar sua meta!\n", dia);
  } 
  
    else if(escolha == 2){
    printf("Você tem que pedalar %d km por semana para alcançar sua meta!\n", semana);
  } 
    else if(escolha == 3){
      printf("Você tem que pedalar %d km por ano para alcançar sua meta!\n", ano);
}
    else{
    printf(" Você encerrou a simulação, volte sempre!");
    break;
     }
}

}