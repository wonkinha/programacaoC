#include <stdio.h>


void recursivorainha(int numero1){

    if (numero1 > 2){
        printf("ESQUERDA \n");
        recursivorainha(numero1 - 1);
        
    }


}


void recursivotorre(int numero2){

    if (numero2 > 5){

        printf("DIREITA \n");
        recursivotorre(numero2 - 1);

    }

}


void recursivobispo(int numero3){

if (numero3 > 5){

    printf("CIMA DIREITA\n");
    recursivobispo(numero3 - 1);


}


}



int main () {

int  r = 10;

printf("Movimentação da Rainha: \n");
recursivorainha(r);


int  t = 10;

printf("\n");
printf("Movimentação da Torre: \n");
recursivotorre(t);

printf("\n");


int  b = 10;

printf("\n");
printf("Movimentação do Bispo (Recursivo): \n");
recursivobispo(b);

printf ("\n");

printf("Movimentação do Bispo. (Aninhado)\n");
int b1 = 0;

while (b1 < 5){

    int b2 = 0;
    while (b2 < 1){
        printf("CIMA ");
        b2++;
    }

    printf("DIREITA\n");
    b1++;

}
printf("\n");
printf("Movimentação do Cavalo: \n");

 for (int x = 1, y = 0; x == 1; x--){

    while( y < 2){
    printf("CIMA\n");

    y++;

    }

    printf("DIREITA\n");

}


    return 0;
}