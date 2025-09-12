#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0};
    int cone[5][5];
    int cruz[5][5];
    int octa[5][5];
    int i, j;

    // ----- NAVIOS -----
    // Navio horizontal: linha 1, colunas 1 a 3
    tabuleiro[1][1] = 3;
    tabuleiro[1][2] = 3;
    tabuleiro[1][3] = 3;

    // Navio vertical: coluna 5, linhas 2 a 4
    tabuleiro[2][5] = 3;
    tabuleiro[3][5] = 3;
    tabuleiro[4][5] = 3;

    // ----- MATRIZES DAS HABILIDADES -----

    // Cone
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(j >= 2-i && j <= 2+i){
                cone[i][j] = 1;
            } else {
                cone[i][j] = 0;
            }
        }
    }

    // Cruz
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(i==2 || j==2){
                cruz[i][j] = 1;
            } else {
                cruz[i][j] = 0;
            }
        }
    }

    // Octaedro (losango)
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if((i-2<0?-(i-2):(i-2)) + (j-2<0?-(j-2):(j-2)) <= 2){
                octa[i][j] = 1;
            } else {
                octa[i][j] = 0;
            }
        }
    }

    // ----- SOBREPOSIÇÃO NO TABULEIRO -----
    // Cone na posição (2,2)
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            int lin = 2 + (i-2);
            int col = 2 + (j-2);
            if(lin>=0 && lin<10 && col>=0 && col<10){
                if(cone[i][j]==1 && tabuleiro[lin][col]==0){
                    tabuleiro[lin][col] = 5;
                }
            }
        }
    }

    // Cruz na posição (6,6)
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            int lin = 6 + (i-2);
            int col = 6 + (j-2);
            if(lin>=0 && lin<10 && col>=0 && col<10){
                if(cruz[i][j]==1 && tabuleiro[lin][col]==0){
                    tabuleiro[lin][col] = 5;
                }
            }
        }
    }

    // Octaedro na posição (4,7)
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            int lin = 4 + (i-2);
            int col = 7 + (j-2);
            if(lin>=0 && lin<10 && col>=0 && col<10){
                if(octa[i][j]==1 && tabuleiro[lin][col]==0){
                    tabuleiro[lin][col] = 5;
                }
            }
        }
    }

    // ----- EXIBIÇÃO DO TABULEIRO -----
    printf("    A B C D E F G H I J\n");
    printf("   ---------------------\n");

    for (i = 0; i < 10; i++) {
        printf("%d | ", i);
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}