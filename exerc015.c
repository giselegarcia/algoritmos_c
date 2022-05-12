#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 //Tenho uma meta de andar 5 mil km esse ano. Faça um algoritmo que calcule quantos km eu preciso andar por dia, por semana e por mês para chegar na minha meta.E Sabendo que em 62,7 km eu gasto 2664 calorias em media, calcule tbm quantas calorias vou gastar em média a cada pedal por dia, semana e mes

int main() {
//variaveis km
int km = 5000;
int dia = km/365;
int semana = dia*7;;
int mes = dia*30;
int ano = mes*12;
int escolha;
//variaveis calorias
float calorias= 2664;
float kilometros = 62.7;
float gastoporkm = 2664/62.7;
float caldia = dia*gastoporkm;
float calsemana = semana*gastoporkm;
float calmes= mes*gastoporkm;
float calano = ano*gastoporkm;



  
printf("Olá, sua meta de pedaladas para o ano de 2022 é de 5mil km. \n");
printf("Você pode descobrir quantos km deverá pedalar por dia, semana e ano escolhendo umas das opções abaixo: \n ");


inicio: 
    escolha = 0;
    printf("1-Dia 2-Semana 3-Ano 4-Mês 0-Encerrar \n\n");
    scanf("%d%*c", &escolha);
 
    if (escolha == 0) {
        printf(" Você encerrou a simulação, volte sempre!\n");
    } else if (escolha == 1) {
        printf("Você tem que pedalar %d km por dia para alcançar sua meta! E consequentemente gastara %.3f calorias por dia.\n\n", dia,caldia); 
        printf("Você pode escolher outra opção para calcular sua meta: \n");  
        goto inicio;               
    } else if (escolha == 2) {
        printf("Você tem que pedalar %d km por semana para alcançar sua meta! E gastara %.3f calorias no decorrer de uma semana de treino.\n", semana, calsemana);
        printf("Você pode escolher outra opção para calcular sua meta: \n");   
        goto inicio;           
    } else if (escolha == 3) {
        printf("Você tem que pedalar %d km por mês para alcançar sua meta! E gastara %.3f de calorias no decorrer de um mês.\n", mes, calmes);
        printf("Você pode escolher outra opção para calcular sua meta: \n"); 
        goto inicio;             
    } else if (escolha == 4) {
        printf("Você tem que pedalar %d km por ano para alcançar sua meta! E cumprindo, terá gasto o total de %.3f calorias\n", ano, calano);
        printf("Você pode escolher outra opção para calcular sua meta: \n");
        goto inicio;   
    } else {
        printf ("Valor invalido!\n");
    }
    system("pause");
    return 0;
}
