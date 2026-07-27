/*NOME: César Augusto Tiago Totô
MATRICULA: 24.1.4038
TURMA: 32
*/

/*Trabalho prático: jogo Quebra-Cabeça
Objetivo: colocar os números em ordem
*/

//biblioteca:
#include <stdio.h>
#include "funcoes.h"

//imprimir a matriz somente se o jogador ganhar
void imprimirGanhou(Jogo *tabuleiro) {
    int m = tabuleiro->tamanho;

    // Imprimir a borda de cima da matriz
    printf("\n");
    printf(GREEN(TAB_TL));
    for (int i = 0; i < m - 1; i++) {
        printf(GREEN(TAB_HOR TAB_HOR TAB_HOR TAB_TJ));
    }
    printf(GREEN(TAB_HOR TAB_HOR TAB_HOR TAB_TR "\n"));

    // Imprimir as linhas do meio da tabela
    for (int i = 0; i < m; i++) {
        // Imprime o conteúdo da linha com os separadores verticais
        for (int j = 0; j < m; j++) {
            printf(GREEN(TAB_VER" "));
            if (tabuleiro->matriz[i][j] == 0) {
                printf("  "); // Espaço vazio para valores 0
            } 
            else {
                printf("%02d", tabuleiro->matriz[i][j]); // Imprime o valor do numero com dois digitos
            }
        }
        printf(GREEN(TAB_VER"\n"));

        // meio
        if (i < m - 1) {
            printf(GREEN(TAB_ML));
            for (int j = 0; j < m - 1; j++) {
                printf(GREEN(TAB_HOR TAB_HOR TAB_HOR TAB_MJ));
            }
            printf(GREEN(TAB_HOR TAB_HOR TAB_HOR TAB_MR "\n"));
        }
    }

    // Imprimir a borda de baixo da tabela
    printf(GREEN(TAB_BL));
    for (int i = 0; i < m - 1; i++) {
        printf(GREEN(TAB_HOR TAB_HOR TAB_HOR TAB_BJ));
    }
    printf(GREEN(TAB_HOR TAB_HOR TAB_HOR TAB_BR "\n"));
}
