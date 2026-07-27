# Quebra-Cabeças das 8 Pastilhas (8-Puzzle)

Trabalho Prático desenvolvido no âmbito universitário que implementa o clássico jogo de quebra-cabeças sliding puzzle (jogo dos 8 números/pastilhas) em matrizes configuráveis.

---

## Sobre o Projeto

O **Quebra-Cabeças das 8 Pastilhas** consiste num tabuleiro $N \times N$ com $N^2 - 1$ peças numeradas e um espaço vazio (representado pelo valor `0`). O objetivo principal do jogo é ordenar as peças em sequência crescente (da esquerda para a direita e de cima para baixo), deixando a última posição (inferior direita) vazia.

### Regras Básicas
- Apenas as peças adjacentes ao espaço vazio podem ser movidas.
- O jogo valida e impede comandos ou movimentos inválidos.
- O programa deteta automaticamente quando todas as peças estão na posição correta e notifica a vitória.

---

## Funcionalidades

- **Tamanho de Tabuleiro Configurável:** Suporte para matrizes de dimensão $n \times n$ (onde $3 \le n \le 10$).
- **Níveis de Dificuldade:**
  - **Fácil (F):** $5 \times n$ movimentos aleatórios de embaralhamento.
  - **Médio (M):** $10 \times n$ movimentos aleatórios.
  - **Difícil (D):** $20 \times n$ movimentos aleatórios.
  *(O embaralhamento é feito a partir do estado resolvido para garantir que o jogo tenha sempre solução).*
- **Sistema de Guardar e Carregar Jogo:**
  - Permite guardar o estado atual da partida num ficheiro de texto (`.txt`).
  - Permite retomar partidas previamente salvas.
- **Menu Interativo e Ajuda:** Menu com instruções e comandos em tempo real.

---

## Fluxo de Execução e Comandos

### Menu Principal
Ao iniciar o programa, são apresentadas as seguintes opções:
- `(N)` **Novo jogo:** Define as dimensões do tabuleiro e o nível de dificuldade.
- `(C)` **Continuar jogo atual:** Retorna à partida em andamento.
- `(S)` **Continuar jogo salvo:** Carrega o estado de um jogo a partir de um ficheiro de texto.
- `(A)` **Ajuda:** Exibe as instruções de uso.
- `(X)` **Sair:** Encerra o programa.

### Comandos Durante o Jogo
- `<número>`: Move a peça com o número digitado (se for adjacente ao espaço vazio).
- `salvar <nome_do_arquivo.txt>`: Guarda o estado atual da partida.
- `voltar`: Regressa ao menu inicial.

---

## Formato do Ficheiro de Guardado (`.txt`)

Os ficheiros de jogo guardados seguem a seguinte estrutura:
1. **Primeira linha:** Dimensão $n$ da matriz.
2. **Próximas $n$ linhas:** Matriz do tabuleiro separada por espaços (o valor `0` representa o espaço vazio).
3. **Última linha:** Número de jogadas efetuadas até ao momento.

**Exemplo de ficheiro (`jogo.txt` para matriz 3x3):**
```text
3
8 3 2
1 5 4
7 6 0
12
