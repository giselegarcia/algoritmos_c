
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  printf("---->BEM VINDO AO JOGO DE ADIVINHAÇÃO<----            \n\n ");
  printf("          [][][] /""\\ [][][]                           \n ");
  printf("          |::| /____\\ |::|                             \n ");
  printf("          |[]|_|::::|_|[]|                              \n ");
  printf("          |/:::::__:::::\\|                             \n ");
  printf("          |:::::/||\\:::::|                             \n ");
  printf("          |:#:::||||::#::|                              \n ");
  printf("          #*###&*##&*&#*&##                             \n ");
  printf("          ##*####*###**####                           \n\n ");

    
    int chute;
    int acertou;
    int nivel;
    int totaldetentativas;
    double pontos = 1000;

    // gerando um numero secreto aleatorio
    srand(time(0));
    int numerosecreto = rand() % 100;

    // escolhendo o nivel de dificuldade
    printf("Qual o nível de dificuldade?\n");
    printf("(1) Fácil (2) Médio (3) Difícil\n\n");
    printf("Escolha: ");

    scanf("%d", &nivel);

    switch(nivel) {
        case 1: 
            totaldetentativas = 20;
            break;
        case 2:
            totaldetentativas = 15;
            break;
        default:
            totaldetentativas = 6;
            break;
    }

    // loop principal do jogo
    for(int i = 1; i <= totaldetentativas; i++) {

        printf("-> Tentativa %d de %d\n", i, totaldetentativas);

        printf("Chute um número: ");
        scanf("%d", &chute);

        // tratando chute de numero negativo
        if(chute < 0) {
            printf("Você não pode chutar números negativos\n");
            i--;
            continue;
        }

        // verifica se acertou, foi maior ou menor
        acertou = chute == numerosecreto;

        if(acertou) {
            break;
        } else if(chute > numerosecreto) {
            printf("\nSeu chute foi maior do que o número secreto!\n\n");
        } else {
            printf("\nSeu chute foi menor do que o número secreto!\n\n");
        }

        // calcula a quantidade de pontos
        double pontosperdidos = abs(chute - numerosecreto) / 2.0;
        pontos = pontos - pontosperdidos;
    }

    // imprimindo mensagem de vitoria ou derrota
    printf("\n");
    if(acertou) {
        printf("---->Você ganhou!<----\n");
        printf("   .-////////-.         \n");
        printf(" .'          '.       \n");
        printf(" /   O    -=-   \\    \n");
        printf(":                :    \n");
        printf("|                |    \n");
        printf(": ',          ,' :    \n");
        printf(" \\  '-......-'  /    \n");
        printf("  '.          .'      \n");
        printf("    '-......-'        \n");

        printf("\nParabéns! Você acertou!\n");
        printf("Você fez %.2f pontos. Até a próxima!\n\n", pontos);
    } else {

        printf("       \\|/ ____ \\|/    \n");   
        printf("        @~/ ,. \\~@      \n");   
        printf("       /_( \\__/ )_\\    \n");   
        printf("          \\__U_/        \n");

        printf("\nVocê perdeu! Tente novamente!\n\n");
    }


}
  