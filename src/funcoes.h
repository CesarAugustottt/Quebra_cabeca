/*NOME: César Augusto Tiago Totô
MATRICULA: 24.1.4038
TURMA: 32
*/

/*Trabalho prático: jogo Quebra-Cabeça
Objetivo: colocar os números em ordem
*/

//declaração das funçoes

#ifndef FUNCOES_H
#define FUNCOES_H
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

#define M 64		//tamanho maximo de letra do comando
#define FA 20		//quantidade de movimentos nível facíl
#define ME 80		//quantidade de movimentos nível médio
#define DI 320		//quantidade de movimentos nível difícil

// cores e formato de texto
#define ANSI_RESET            "\x1b[0m"  // desativa os efeitos anteriores
#define ANSI_BOLD             "\x1b[1m"  // coloca o texto em negrito
#define ANSI_COLOR_BLACK      "\x1b[30m"
#define ANSI_COLOR_RED        "\x1b[31m"
#define ANSI_COLOR_GREEN      "\x1b[32m"
#define ANSI_COLOR_YELLOW     "\x1b[33m"
#define ANSI_COLOR_BLUE       "\x1b[34m"
#define ANSI_COLOR_MAGENTA    "\x1b[35m"
#define ANSI_COLOR_CYAN       "\x1b[36m"
#define ANSI_COLOR_WHITE      "\x1b[37m"
#define ANSI_BG_COLOR_BLACK   "\x1b[40m"
#define ANSI_BG_COLOR_RED     "\x1b[41m"
#define ANSI_BG_COLOR_GREEN   "\x1b[42m"
#define ANSI_BG_COLOR_YELLOW  "\x1b[43m"
#define ANSI_BG_COLOR_BLUE    "\x1b[44m"
#define ANSI_BG_COLOR_MAGENTA "\x1b[45m"
#define ANSI_BG_COLOR_CYAN    "\x1b[46m"
#define ANSI_BG_COLOR_WHITE   "\x1b[47m"

// macros para facilitar o uso
#define BOLD(string)       ANSI_BOLD             string ANSI_RESET
#define BLACK(string)      ANSI_COLOR_BLACK      string ANSI_RESET
#define BLUE(string)       ANSI_COLOR_BLUE       string ANSI_RESET
#define RED(string)        ANSI_COLOR_RED        string ANSI_RESET
#define GREEN(string)      ANSI_COLOR_GREEN      string ANSI_RESET
#define YELLOW(string)     ANSI_COLOR_YELLOW     string ANSI_RESET
#define BLUE(string)       ANSI_COLOR_BLUE       string ANSI_RESET
#define MAGENTA(string)    ANSI_COLOR_MAGENTA    string ANSI_RESET
#define CYAN(string)       ANSI_COLOR_CYAN       string ANSI_RESET
#define WHITE(string)      ANSI_COLOR_WHITE      string ANSI_RESET
#define BG_BLACK(string)   ANSI_BG_COLOR_BLACK   string ANSI_RESET
#define BG_BLUE(string)    ANSI_BG_COLOR_BLUE    string ANSI_RESET
#define BG_RED(string)     ANSI_BG_COLOR_RED     string ANSI_RESET
#define BG_GREEN(string)   ANSI_BG_COLOR_GREEN   string ANSI_RESET
#define BG_YELLOW(string)  ANSI_BG_COLOR_YELLOW  string ANSI_RESET
#define BG_BLUE(string)    ANSI_BG_COLOR_BLUE    string ANSI_RESET
#define BG_MAGENTA(string) ANSI_BG_COLOR_MAGENTA string ANSI_RESET
#define BG_CYAN(string)    ANSI_BG_COLOR_CYAN    string ANSI_RESET
#define BG_WHITE(string)   ANSI_BG_COLOR_WHITE   string ANSI_RESET

#define TAB_HOR "\u2501" // ━ (horizontal)
#define TAB_VER "\u2503" // ┃ (vertical)
#define TAB_TL  "\u250F" // ┏ (top-left)
#define TAB_TR  "\u2513" // ┓ (top-right)
#define TAB_BL  "\u2517" // ┗ (bottom-left)
#define TAB_BR  "\u251B" // ┛ (bottom-right)
#define TAB_TJ  "\u2533" // ┳ (top-join)
#define TAB_ML  "\u2523" // ┣ (middle-left)
#define TAB_MR  "\u252B" // ┫ (middle-right)
#define TAB_MJ  "\u254B" // ╋ (middle-join)
#define TAB_BJ  "\u253B" // ┻ (bottom-join)

typedef struct {
    	int tamanho; //ordem da matriz
    	int **matriz; // os elementos da matriz
    	int jogadas; //quantidade de jogadas do jogador.
}Jogo;

void imprimirMenu(); //imprimir menu.
int menuJogo(Jogo *tabuleiro); // função menu onde tem as opções.
void ajudaJogo(); // função de ajuda (instruções do jogo).
void alocarMatriz(Jogo *tabuleiro); //alocar espaço a matriz do jogo.
void imprimirMatriz(Jogo *tabuleiro); // função para imprimir matriz do jogo atual.
void imprimirGanhou(Jogo *tabuleiro); //imprimir matriz quando jogador ganhar.
void excluirLinha(char *op);   //função que tira o \n das strings entradas por fgets.
void iniciarJogo(Jogo *tabuleiro); // função iniciar jogo, usuario entra com a ordem da matriz.
void jogoSalvo(Jogo *tabuleiro); //função que pega um jogo salvo em um arquivo do usuario.
void liberarMatriz(Jogo *tabuleiro); //função para liberar o espaço alocado.
void embaralhaMatriz(Jogo *tabuleiro); //função para embaralhar matriz, pega o nível de dificuldade do usuário.
int movimentoValido(Jogo tabuleiro, int linha, int coluna); //verifica se o movimento do embaralhamento é válido.
int executarJogo (Jogo *tabuleiro); //função para começo de jogo (executar), onde o usuário entra com os comandos.
void moverPeca(Jogo *tabuleiro, int peca); // função que move a peça do tabuleiro.
int validarPeca(Jogo *tabuleiro, int peca); //função que verifica se a peça está do lado de um vazio.
int analizarJogo(Jogo *tabuleirro); // função para analizar se o jogador ganhou ou não.
int salvarJogo(Jogo *tabuleiro);  //função que salva o jogo e colocar em um arquivo.



#endif
