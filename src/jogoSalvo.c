/*NOME: César Augusto Tiago Totô
MATRICULA: 24.1.4038
TURMA: 32
*/

/*Trabalho prático: jogo Quebra-Cabeça
Objetivo: colocar os números em ordem
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "funcoes.h"

//função que pede o usuário o nome do arquivo em que o usuario salvou o jogo
void jogoSalvo(Jogo *tabuleiro){
	char nomeArq[M];
	printf(CYAN("\nDigite o nome do arquivo com o jogo salvo: "));
	fgets(nomeArq, M, stdin);
	
	//excluir linha
	excluirLinha(nomeArq);

	FILE *arquivo = NULL;
	
	//abrir o arquivo
	arquivo = fopen(nomeArq, "r");

	//se o usuário digitar um arquivo que não existe, deve pedir o nome do arquivo novamente.
	while(arquivo == NULL){
		printf(RED("Não foi possível carregar o jogo. Digite o nome do arquivo novamente: "));
		fgets(nomeArq, M, stdin);

		//excluir linha
		excluirLinha(nomeArq);

		//abrir arquivo novamente
		arquivo = fopen(nomeArq, "r");
	}

	//ler o tamanho da matriz
	fscanf(arquivo, "%d", &tabuleiro->tamanho);
	
	//alocar a matriz
	alocarMatriz(tabuleiro);
	
	//ler os valores do tabuleiro
	for(int i=0; i<tabuleiro->tamanho; i++){
		for(int j=0; j<tabuleiro->tamanho; j++){
			fscanf(arquivo, "%d ", &tabuleiro->matriz[i][j]);
		}
	}
	//ler o numero de jogadas
	fscanf(arquivo, "%d", &tabuleiro->jogadas);
	
	//fechar arquivo
	fclose(arquivo);
	
	printf(GREEN("\nContinuando o jogo...\n"));
	imprimirMatriz(tabuleiro);	
}
