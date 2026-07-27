/*NOME: César Augusto Tiago Totô
MATRICULA: 24.1.4038
TURMA: 32
*/

/*Trabalho prático: jogo Quebra-Cabeça
Objetivo: colocar os números em ordem
*/

#include "funcoes.h"
#include<stdio.h>

//função que salva o jogo no arquivo
int salvarJogo(Jogo *tabuleiro){
	char nomeArq[M];
	scanf("%s", nomeArq); //pegar o nome do arquivo do buffer
		
	FILE *arquivo = fopen(nomeArq, "w"); //abrir o arquivo para gravar informação
	fprintf(arquivo, "%d\n", tabuleiro->tamanho);   //imprimir o tamanho da matriz escolhida pelo usuario
	
	//imprimir a matriz atual do jogo no arquivo
	for(int i=0; i<tabuleiro->tamanho; i++){
		for(int j=0; j<tabuleiro->tamanho; j++){
			fprintf(arquivo, "%d ", tabuleiro->matriz[i][j]);
		}
		fprintf(arquivo, "\n");
	}
	
	fprintf(arquivo, "%d\n", tabuleiro->jogadas);
	fclose(arquivo); //fechar arquivo
	printf("\nArquivo \"%s\" salvo com sucesso!!\n", nomeArq);
	return 1;
}