 /*jogodeforca. O computador escolherá, de maneira randômica, uma palavra que está salva em um arquivo de palavras, e o jogador deve chutar, letra por letra, até adivinhar a palavra. Se o jogador chutar 5 letras erradas, ele perde. Ao final, o computador oferecerá a possibilidade do usuário inserir uma nova palavra no banco de dados.
 //Aprendi :Criar, varrer e manipular arrays de diferentes tipos. Usar arrays de chars (strings) e funções para manipulá-los. Entender e criar funções que recebem parâmetros e devolvem valores. Ler e escrever arquivos com formatos específicos. Aprender mais boas práticas de código, como a criação e extração de funções para evitar repetição de código.Criar header files.
 */

  #include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {

    char palavrasecreta[20];
    sprintf(palavrasecreta, "MELANCIA");


    int acertou = 0;
    int enforcou = 0;
    char chutes[26];
    int tentativas =0;

   do{
       for(int i =0; i<strlen(palavrasecreta); i++){
           for(int j=0; j<tentativas; j++){
               if(chutes[j] == palavrasecreta[i]){
                   printf(" %c");
                   break; 
               }
           }
           printf("_");
       }
       printf("\n");
       char chute;
       scanf("%c", &chute);

       chutes[tentativas] = chute;
       tentativas++;
    
   } while (!acertou && !enforcou);


return 0;
}