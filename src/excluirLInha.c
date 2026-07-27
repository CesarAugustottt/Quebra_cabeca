/*NOME: César Augusto Tiago Totô
MATRICULA: 24.1.4038
TURMA: 32
*/

/*Trabalho prático: jogo Quebra-Cabeça
Objetivo: colocar os números em ordem
*/

#include<stdio.h>
#include <string.h>
#include "funcoes.h"

//função que tira o \n das strings.
void excluirLinha(char *op){
	int n = strlen(op); //tamanho da string
	for(int i=0; i<n; i++){
		if(op[i] == '\n')
		    op[i]='\0';
	}
}