/*NOME: César Augusto Tiago Totô
MATRICULA: 24.1.4038
TURMA: 32
*/

/*Trabalho prático: jogo Quebra-Cabeça
Objetivo: colocar os números em ordem
*/

//bibliotecas
#include <stdio.h>
#include "funcoes.h"

// Função para mover peça
void moverPeca(Jogo *tabuleiro, int peca){
	for(int i=0; i<tabuleiro->tamanho; i++){
        for(int j=0; j<tabuleiro->tamanho; j++){
            if(tabuleiro->matriz[i][j]==peca){
            	tabuleiro->matriz[i][j]=0;
            }
            else if(tabuleiro->matriz[i][j]==0){
            	tabuleiro->matriz[i][j]=peca;
            }
        }
    }
}