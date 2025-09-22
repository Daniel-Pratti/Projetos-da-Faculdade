#include <stdio.h>
#define LINHAS 10
#define COLUNAS 10

int main(){

    // Inicializando o tabuleiro com 0 (água)
    int tabuleiro[LINHAS][COLUNAS] = {0};

    // Definindo manualmente um navio horizontal de 3 posições
    for(int c = 0; c < 3; c++) 
        tabuleiro[2][2 + c] = 3;

    // Definindo manualmente um navio vertical de 3 posições
    for(int c = 0; c < 3; c++) 
        tabuleiro[6 + c][6] = 3;

    // Definindo manualmente um navio diagonal de 3 posições
    for(int c = 0; c < 3; c++) 
        tabuleiro[4 + c][7 + c] = 3;

    // Definindo manualmente um navio diagonal de 3 posições
    for(int c = 0; c < 3; c++) 
        tabuleiro[8 - c][0 + c] = 3;

    // Exibindo o tabuleiro
    printf("     ");
    for(int i = 0; i < 10; i++)
        printf("%c ", 'A' + i);
    printf("\n");

        for(int i = 0; i < 10; i++)
        {   
            printf("%2d - ", i + 1);
            for(int j = 0; j < 10; j++)

            { 
                printf("%d ", tabuleiro[i][j]);
            }
            printf("\n");
        }

    return 0;
}
