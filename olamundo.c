#include <stdio.h>
int main (){

int idade;
char nome[50];

// Peça que o usuário te forneça a idade
    printf("Digite sua idade: \n");
    scanf("%i", &idade);
    printf("Sua idade é: %i\n" ,idade);

    // Agora peça que ele informe seu nome:
    printf("Digite seu nome: \n");
    scanf("%s",nome);
    printf("Seu nome é: %s\n",nome);



return 0;

}
