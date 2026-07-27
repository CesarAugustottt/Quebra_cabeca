/*NOME: César Augusto Tiago Totô
MATRICULA: 24.1.4038
TURMA: 32
*/

/*Trabalho prático: jogo Quebra-Cabeça
Objetivo: colocar os números em ordem
*/

//função alocar matriz
#include<stdio.h>
#include<stdlib.h>
#include "funcoes.h"

//aloca espaço a matriz
void alocarMatriz(Jogo *tabuleiro){
	tabuleiro->matriz=NULL;
	int n = tabuleiro->tamanho;
	
	//alucar matriz 
    	tabuleiro->matriz = malloc(n * sizeof(int*)); //alocar a matriz
    	//verificar se alocou
    	if (tabuleiro->matriz == NULL) {
		printf(RED("Erro ao alocar memória para a matriz do tabuleiro.\n"));
   	}

    	for(int i=0; i<tabuleiro->tamanho; i++){
        	tabuleiro->matriz[i]= malloc(n*sizeof(int));
        	//verificar se alocou
        	if (tabuleiro->matriz[i] == NULL) {
		    printf(RED("Erro ao alocar memória para a linha da matriz.\n"));
		}
   	 }
}