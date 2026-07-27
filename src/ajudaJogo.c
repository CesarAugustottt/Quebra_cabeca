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

//função que imprime instruções ( sem parametros).
void ajudaJogo(){
	printf(BOLD(YELLOW("\n\nInstruções: \n")));
        printf(YELLOW("Quebra-Cabeças é um jogo que consiste em ordenar peças (pastilhas) deslizantes. Neste jogo existem diversas versões com tamanho de tabuleiro distinto de 8, 15, 24 peças ou mais. "));
        printf(YELLOW("\n\n1.Obejetivo: mover as peças númeradas de forma que elas fiquem ordenadas do menor para o maior.\n2.Movimentação: Apenas as peças adjacentes ao vazio podem ser movidas. Você pode mover uma peça para a esquerda, direita, para cima ou para baixo, desde que o espaço vazio esteja disponível nessa direção.\n3.Estrutura: O tabuleiro é uma matriz de peças quadradas, normalmente de 3x3, 4x4, ou até maior, dependendo do desafio.\n4.Solução: Para solucionar o jogo alguns jogadores utilizam metódos matemáticos e outros jogam de forma intuitiva."));
}