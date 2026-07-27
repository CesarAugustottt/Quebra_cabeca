/*NOME: César Augusto Tiago Totô
MATRICULA: 24.1.4038
TURMA: 32
*/

/*Trabalho prático: jogo Quebra-Cabeça
Objetivo: colocar os números em ordem
*/

//bibliotecas
#include <stdio.h>
#include <string.h>
#include "funcoes.h"

//Função para sempre executar o jogo
int executarJogo (Jogo *tabuleiro){
	int peca; // Peça que o usuário quer mover
	char entrada[M]; // Para armazenar a entrada do usuário

	while (analizarJogo(tabuleiro) != 1) { //repetição so para se o usuário ganhar, ou seja, se a função analizarJogo retornar 1
	    // Usuário entra com a peça que deseja mover
	    printf(CYAN("Digite um comando ou número da peça que quer mover: "));
	    scanf("%s", entrada);
	    
	    	
	    // Validar se a string é um comando voltar, se for retorna 0 e volta para o menu...
		if (strcmp(entrada, "voltar") == 0) {
			getchar();
			printf(CYAN("Voltando ao menu...\n"));
			return 0;
		}
		//validar se a string é um comando para salvar o jogo, se for vai para a função salvar jogo e colocar num arquivo q o usuario desejar.
       	else if(strcmp(entrada, "salvar") == 0){
       		salvarJogo(tabuleiro);
       	}
	    

	    // Validar se a string contém um número para mover a peça
	    else{
			peca = atoi(entrada); // Transformar string em inteiro de prototipo:" int atoi(const char *str); " a função ignora os espaços em brancos.

			// Validar se a peça pertence ao tabuleiro
			int quantidadePeca = tabuleiro->tamanho * tabuleiro->tamanho;  //se peça não pertecncer ao tabuleiro, volta para o incio e pede para o usuário digitar novamente.
			if (peca < 0 || peca >= quantidadePeca) {
			    printf(RED("\nInválido!! A peça não pertence ao tabuleiro.\n"));
			    continue; // Volta ao início do loop
			}

			// Validar se a peça é adjacente a um espaço vazio
			if (validarPeca(tabuleiro, peca) != 1) { //se retornar diferente de 1, a peça não é adjhacente ao vazio e volta para o inicio e pede para o usuário digitar novamente.
			    printf(RED("\nNão é possı́vel mover a peça.\n")); //colocar o numero da peça
			    continue; //voltar ao inicio do loop
			}
			
			tabuleiro->jogadas++; // Incrementar quantidade de jogadas se o peça for validada.
			
			// Mover a peça ( troca de posição com o vazio).
			moverPeca(tabuleiro, peca);
			
			// Imprimir
			imprimirMatriz(tabuleiro);
			printf("Quantidade de jogadas até agora: %d\n", tabuleiro->jogadas);
		}
	}

	// Se a repetição acabou, é porque ganhou
	printf("Parabéns! Você completou o quebra-cabeças com %02d movimentos.\n", tabuleiro->jogadas);
	getchar(); //limpar buffer
	imprimirGanhou(tabuleiro); //imprimir o tabuleiro com cor diferente, pois jogador ganhou!!
	tabuleiro->jogadas=0; 	//zerar a quantidade de jogadas.
	
	return 1;
}
