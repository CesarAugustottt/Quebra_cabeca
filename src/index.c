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

int main(){
	Jogo tabuleiro;
	tabuleiro.jogadas=0;
    printf(BG_BLACK(CYAN(BOLD("\t\t\t\t\t\t\t QUEBRA-CABEÇAS \t\t\t\t\t\t\t"))) "\n");
    printf(CYAN("\n\nBem vindo ao Quebra-Cabeças"));
    
    //chamar função menu
    menuJogo(&tabuleiro);
	
    //quando o usuario inserir o X aparece mensagem de despedida.
    printf(GREEN("Bom jogo! Até a proxima!\n"));

    return 0; //encerrar programa.
}