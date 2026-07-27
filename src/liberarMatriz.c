/*NOME: César Augusto Tiago Totô
MATRICULA: 24.1.4038
TURMA: 32
*/

/*Trabalho prático: jogo Quebra-Cabeça
Objetivo: colocar os números em ordem
*/

//bibliotecas
#include <stdio.h>
#include<stdlib.h>
#include "funcoes.h"

//liberar o espaço ocupado pela matriz, tabuleiro dado como parametro.
void liberarMatriz(Jogo *tabuleiro){
    for(int i=0; i<tabuleiro->tamanho; i++){
        free(tabuleiro->matriz[i]);
    }
    free(tabuleiro->matriz);
}