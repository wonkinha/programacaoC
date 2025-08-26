#include <stdio.h>

int main (){

    int i = 1, j = 0;

   // movimento do cavalo
   // para cima e pra direita

   while (i == 1){

    while (j < 2){

        printf("BAIXO\n");// IMPRIME BAIXO 2x DENTRO DO LOOP
        j++;
    }

    printf("ESQUERDA\n"); // UMA VEZ PRA ESQUERDA
    i--;

   }

printf("\n");

   for (int x = 1; x == 1; x--){

    for(int y = 0; y < 2; y++){

        printf("BAIXO\n"); // DUAS CASAS PARA CIMA

    }

    printf("ESQUERDA\n"); // DUAS CASAS PRA ESQUERDA

   }




 return 0;

    }