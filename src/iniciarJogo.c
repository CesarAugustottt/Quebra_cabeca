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

// Função iniciar jogo. O tabuleiro é dado como parametro.
void iniciarJogo(Jogo *tabuleiro){
	//iniciar tamanho e jogada com zero
	tabuleiro->tamanho = 0;
	tabuleiro->jogadas = 0;
	
    //dimensão do tabuleiro
    printf(CYAN("\nDigite a dimensão do tabuleiro (3 ≤ n ≤ 10): "));
    scanf("%d", &tabuleiro->tamanho);

    //O usuario deve entrar com a ordem da matriz maior ou igual a 3 e menor ou igual a 10
    while(tabuleiro->tamanho<3 || tabuleiro->tamanho>10){ //validação
    	printf(RED("\nDimensão inválida!"));
        printf(CYAN("\nDigite novamente a dimensão do tabuleiro (3 ≤ n ≤ 10): "));
        scanf("%d", &tabuleiro->tamanho);
   	}
	
    //alocar matriz
    alocarMatriz(tabuleiro);

    //atribuir a matriz com os numeros ordenados.
    int num = 1; //primeiro elemento da matriz.
    for(int i=0; i<tabuleiro->tamanho; i++){
        for(int j=0; j<tabuleiro->tamanho; j++){
            if(j == (tabuleiro->tamanho-1) && i==(tabuleiro->tamanho-1)){
               	tabuleiro->matriz[i][j]=0; // imprimir zero na ultima posição
            }
            else{
                tabuleiro->matriz[i][j]=num;
                num++; //incrementar uma unidade no número
            }
        }
    }

    //imprimir matriz
    imprimirMatriz(tabuleiro);
    //ordenado!!
    printf(CYAN("Tabuleiro ordenado!"));
	
}