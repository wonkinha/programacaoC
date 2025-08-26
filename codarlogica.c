#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

int escolhajogador, escolhacomputador;
srand(time(0));

printf("Jogo de JOKENPO\n");
printf("1. Pedra\n");
printf("2. Papel\n");
printf("3. Tesoura\n");
printf("Digite um número de 1 a 3: ");
scanf("%d", &escolhajogador);

escolhacomputador = rand() % 3 + 1;

switch (escolhajogador)
{
case 1:
printf("Jogador: Pedra. \n");
    break;

    case 2:
printf("Jogador: Papel. \n");
    break;

    case 3:
printf("Jogador: Tesoura. \n");
    break;

default:
printf("Opção inválida. \n");
    break;
}

switch (escolhacomputador)
{
case 1:
printf("Computador: Pedra.\n");
    break;

    case 2:
printf("Computador: Papel.\n ");
    break;

    case 3:
printf("Computador: Tesoura.\n");
    break;

}

if(escolhacomputador == escolhajogador){
    printf("Empate. \n");
} else if ((escolhajogador == 1) && (escolhacomputador == 3) || 
(escolhajogador == 2) && (escolhacomputador == 1) || (escolhajogador == 3) && (escolhacomputador == 2)){
printf("Você venceu! \n");
} else {
    printf("Computador venceu! \n");
}

}