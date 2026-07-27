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

//Menu do jogo
int menuJogo(Jogo *tabuleiro){
	char op[M];
	
	do{
	    //imprimir menu
	    imprimirMenu();
	    //usuario entrar com a opção
	    printf(CYAN("\n\nEscolha a opção (digite “voltar” em qualquer lugar para voltar ao menu principal): "));
	    fgets(op, M, stdin);
		
		//excluir \n com função
		excluirLinha(op);
	    	
	    while((strcmp(op, "N") !=0) && (strcmp(op, "X") !=0) && (strcmp(op, "C") !=0) && (strcmp(op, "A") !=0) && (strcmp(op, "S") !=0) && (strcmp(op, "voltar") !=0)){
	    	printf(RED("Opção inválida!! Tente novamente."));
	    	printf(CYAN("\n\nEscolha a opção (digite “voltar” em qualquer lugar para voltar ao menu principal): "));
	    	fgets(op, M, stdin);
		
			//excluir \n com função
			excluirLinha(op);
	    }
			
		//opções:
    	// se o usuario inserir N inicia um novo jogo
        if(strcmp(op, "N") == 0){
        	if(tabuleiro->jogadas >0){   //se a quantidade de jogadas for maior que 0 quer dizer que o jogado já tinha inciado o jogo, então deve liberar a matriz
        			liberarMatriz(tabuleiro); //liberar memoria
        	}
		    iniciarJogo(tabuleiro); //inicia o jogo
		    embaralhaMatriz (tabuleiro); //embaralhar o jogo
		    executarJogo (tabuleiro); //começo de jogo
        }
        	
        else if(strcmp(op, "voltar") == 0){ //se voltar, repete o menu.
        		
        }
        	
        else if(strcmp(op, "C") == 0){   //se o usuário digitar C, deve continuar o jogo atual
        	if(tabuleiro->jogadas >0){	//se a quantidade de jogadas for maior que zero, o jogo já foi iniciado, então deve voltar a função executar jogo.
        		imprimirMatriz(tabuleiro);	
        		executarJogo(tabuleiro);
        	}
        else	//se a quantidade de jogadas não for maior que zero, quer dizer que o jogador ainda não inciou o jogo.
        	printf(RED("O jogo ainda não foi iniciado!!"));
        }
        	
        else if(strcmp(op, "S") == 0){  // se o usuário digitar S vai para a função jogo salvo, onde o usuário informa o nome do arquivo.
        	if(tabuleiro->jogadas >0){
        		liberarMatriz(tabuleiro); //liberar memoria se o jogador tiver iniciado o jogo antes
        	}
        	jogoSalvo(tabuleiro);
        	executarJogo(tabuleiro);
        }
        	
        else if(strcmp(op, "A") == 0){  // se o usuário digitar A, aparece as instruções do jogo.
        	ajudaJogo();
        }
        	
	    	
	}while(strcmp(op, "X")!= 0); // se o usuario digitar X, acaba a repetição e encerra o jogo.
	
	liberarMatriz(tabuleiro); //liberar memoria ao jogo ser encerrado.
	
	return 1;
}