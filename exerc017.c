
  #include <stdio.h>
//Faça um programa para determinar se uma pessoa é maior ou menor de idade. Mostre também se ela já está apta a votar de forma obrigatória ou facultativa.  Conforme a Justiça eleitoral o voto é obrigatório para os eleitores com idade acima de 18 anos e facultativo para os analfabetos, para os eleitores maiores de 16 e menores de 18 anos, assim como para os maiores de 70 anos.
int main(){
  int idade;
  int analfabeto;


  do{
    printf("Você sabe ler e escrever? Digite (1) SIM \n");
    scanf("%d%*c",&analfabeto);
   if(analfabeto==1){
      printf("Seu voto é obrigatório\n");
      }else {
      printf("Conforme determina a Justiça Eleitoral, o voto de pessoas não alfabetizadas é facultativo.");
      }
   }
  }while(analfabeto!=1);

  printf("Digite sua idade: \n");
  scanf("%d%*c",&idade);

  if((idade<18 && idade<16)|| idade >70){
    printf("Você tem %d anos, e seu voto é facultativo. \n");
  }else{
    printf("Seu voto é obrigatório!\n");
  }
    return 0;
}