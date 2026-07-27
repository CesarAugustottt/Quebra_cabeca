/*NOME: César Augusto Tiago Totô
MATRICULA: 24.1.4038
TURMA: 32
*/

/*Trabalho prático: jogo Quebra-Cabeça
Objetivo: colocar os números em ordem
*/

//bibliotecas
#include<stdio.h>
#include "funcoes.h"

//verificar se o movimento do embaralhamento é válido, retorna 1 se for e zeo se não for
int movimentoValido(Jogo tabuleiro, int linha, int coluna) {
	if(linha >= 0 && linha < tabuleiro.tamanho && coluna >= 0 && coluna < tabuleiro.tamanho){
    	return 1;
    }
	else{
    	return 0;
    }
}
