/*NOME: César Augusto Tiago Totô
MATRICULA: 24.1.4038
TURMA: 32
*/

/*Trabalho prático: jogo Quebra-Cabeça
Objetivo: colocar os números em ordem
*/

#include <stdio.h>
#include<string.h>
#include<time.h>
#include "funcoes.h"

//embaralamento, 20 movimentos aleatorios para nivel facil, 80 para o medio e 320 para o dificil
// Função para embaralhar o tabuleiro
void embaralhaMatriz(Jogo *tabuleiro) {
	//usuario vai escolher o nível de dificuldade
	char dificuldade[M];
	int movimentos, linha, coluna;
	
	printf(CYAN("\nDigite o nível de dificuldade para embaralhar, fácil (F), média (M) ou díficil (D): "));
	getchar();
	fgets(dificuldade, M, stdin);
	
	//excluir \n com função
	excluirLinha(dificuldade);
	
	//validar se o usuário entrou com o caracter certo
	while((strcmp(dificuldade, "F") != 0) && (strcmp(dificuldade, "M") != 0) && (strcmp(dificuldade, "D") != 0)){
		printf(RED("\nDificuldade inválida!!"));
		printf(CYAN("\nDigite novamente o nível de dificuldade para embaralhar, fácil (F), média (M) ou díficil (D): "));
		fgets(dificuldade, M, stdin);
	
		//excluir \n com função
		excluirLinha(dificuldade);
	}
	
	//atribuir movimentos as dificuldades
	if(strcmp(dificuldade, "F") == 0){   //se jogador escolheu facil multiplica a constante FA pela ordem da matriz menos 2
		movimentos = FA * (tabuleiro->tamanho - 2);
	}
	
	else if(strcmp(dificuldade, "M") == 0){		//se jogador escolheu medio multiplica a constante ME pela ordem da matriz menos 2
		movimentos =ME * (tabuleiro->tamanho - 2);
	}
	
	else{		//se jogador escolheu dificil multiplica a constante DI pela ordem da matriz menos 2
		movimentos = DI * (tabuleiro->tamanho - 2);
	}
	
	
	linha = tabuleiro->tamanho - 1; //linha com o vazio, a linha com o vazio vai mudando ao passar do embaralhamento.
	coluna = tabuleiro->tamanho - 1; // coluna com o vazio, a coluna com o vazio vai mudando ao passar do embaralhamento.
	 
    int direcoes[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}}; // Cima (linha diminui), Baixo(linha aumenta), Esquerda(coluna diminui), Direita(coluna aumenta)

    srand(time(NULL)); //números aleatórios para embaralhar

    for (int i = 0; i < movimentos; ) {
		int posicao = rand() % 4; // Escolhe uma direção aleatória a direção sera um número entre 0 e 3 (4 posições na linha);
		int novaLinha = linha + direcoes[posicao][0];
		int novaColuna = coluna + direcoes[posicao][1];

		if (movimentoValido(*tabuleiro, novaLinha, novaColuna)==1) { //se o movimento de embaralhamento for válido retorna 1 e troca o vazio de lugar
			// Troca o vazio com a peça adjacente de acordo com a aleatoriedade
		    int aux = tabuleiro->matriz[novaLinha][novaColuna];
		    tabuleiro->matriz[novaLinha][novaColuna] = tabuleiro->matriz[linha][coluna];
		    tabuleiro->matriz[linha][coluna] = aux;
			
			i++; //incrementar uma unidade, se o movimento for válido.
				
		    // Atualizar a posição do vazio
		    linha = novaLinha;
		   	coluna = novaColuna;
		}
    }
	printf(CYAN("\nTabuleiro embaralhado. Vamos começar o jogo!\n"));
	imprimirMatriz(tabuleiro);
}