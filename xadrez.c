#include <stdio.h>
int main () {

int  r = 0, b = 0;

// MOVIMENTAÇÃO DA TORRE
printf("TORRE 5 CASAS PRA FRENTE.\n");

for (int t = 0; t < 5; t++){
    printf("FRENTE.\n");
}

//MOVIMENTAÇÃO DA RAINHA

printf("RAINHA 8 CASAS PRA DIREITA.\n");

while (r < 8){

printf("DIREITA.\n");

r++;
    } 

printf("BISPO 5 CASAS DIAGONAL PARA DIREITA. (PARA CIMA E DIREITA).\n");

    do {

        printf("CIMA DIREITA.\n");
        b++;

    } while (b < 5);

    return 0;
}