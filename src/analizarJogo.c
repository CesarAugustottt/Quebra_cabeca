/*NOME: César Augusto Tiago Totô
MATRICULA: 24.1.4038
TURMA: 32
*/

/*Trabalho prático: jogo Quebra-Cabeça
Objetivo: colocar os números em ordem
*/

#include <stdio.h>
#include "funcoes.h"


//Função que verifica se o jogador ganhou
int analizarJogo(Jogo *tabuleiro){
	int num=1;
	for(int i=0; i<tabuleiro->tamanho; i++){
        	for(int j=0; j<tabuleiro->tamanho; j++){
        		if(tabuleiro->matriz[i][j]==tabuleiro->matriz[tabuleiro->tamanho-1][tabuleiro->tamanho-1])
        			continue;
            	else if(tabuleiro->matriz[i][j]!=num){
            		return 0;
            	}
        		num++;
        	}
    }
    return 1;
}