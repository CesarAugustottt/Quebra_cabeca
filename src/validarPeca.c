/*NOME: César Augusto Tiago Totô
MATRICULA: 24.1.4038
TURMA: 32
*/

/*Trabalho prático: jogo Quebra-Cabeça
Objetivo: colocar os números em ordem
*/

#include<stdio.h>
#include "funcoes.h"

//Função que valida se a peça tem um lado vazio.
int validarPeca(Jogo *tabuleiro, int peca) {
    for (int i = 0; i < tabuleiro->tamanho; i++) {
        for (int j = 0; j < tabuleiro->tamanho; j++) {
            if (tabuleiro->matriz[i][j] == peca) {
                // Verifica se há um espaço vazio
                if ((j < tabuleiro->tamanho - 1 && tabuleiro->matriz[i][j + 1] == 0) ||  // Verificar à direita
                    (j > 0 && tabuleiro->matriz[i][j - 1] == 0) ||  // Verificar à esquerda
                    (i < tabuleiro->tamanho - 1 && tabuleiro->matriz[i + 1][j] == 0) ||  // Verificar abaixo
                    (i > 0 && tabuleiro->matriz[i - 1][j] == 0)) {  // Verificar acima
                    return 1; // Se encontrar uma peça adjacente ao zero, retorna 1
                }
            }
        }
    }
    return 0; // Não encontrou uma peça válida
}