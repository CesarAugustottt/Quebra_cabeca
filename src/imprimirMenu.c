/*NOME: César Augusto Tiago Totô
MATRICULA: 24.1.4038
TURMA: 32
*/

/*Trabalho prático: jogo Quebra-Cabeça
Objetivo: colocar os números em ordem
*/

//biblioteca
#include <stdio.h>
#include "funcoes.h"

//imprimir menu
void imprimirMenu(){
	printf(BOLD(CYAN("\n\nMenu:")));
    printf(CYAN("\nX. Sair do Jogo\nN. Iniciar um novo jogo\nC. Continuar o jogo atual\nS. Continuar um jogo salvo\nA. Ajuda com as instruções do jogo"));
}