#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int escolhaJogador, escolhaPc;
  srand(time(0));

  printf("Jogo Pedra-Papel-Tesoura!\n\n");
  printf("Escolha uma opção abaixo:\n");
  printf("1. Pedra.\n");
  printf("2. Papel.\n");
  printf("3. Tesoura.\n\n");
  printf("Sua escolha: ");
  scanf("%d", &escolhaJogador);

  escolhaPc = rand() % 3 + 1;

  switch(escolhaJogador){
    case 1:
    printf("Jogador: pedra x ");
    break;
    case 2:
    printf("Jogador: papel x ");
    break;
    case 3:
    printf("Jogador: tesoura x ");
    break;
    default:
    printf("Opção inválida, escolha uma das acima!");
    break;
  }

  switch(escolhaPc){
    case 1:
    printf ("PC: pedra");
    break;
    case 2:
    printf("PC: papel");
    break;
    case 3:
    printf("PC: tesoura");
    break;
  }

  if (escolhaJogador == escolhaPc){
    printf("\nEmpatou! Tente novamente!\n");
  } else if ((escolhaJogador == 1) && (escolhaPc == 3) || (escolhaJogador == 2) && (escolhaPc == 1) || (escolhaJogador == 3) && (escolhaPc == 2)){
              printf("\nParabéns! Você ganhou!\n");
  } else{
    printf("\nSinto muito, você perdeu!\n");
  }

return 0;
}