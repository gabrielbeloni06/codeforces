/*Codeforces 3C - Gabriel Egídio Santos Beloni    Professor:Felipe Belém*/
#include <stdio.h>
int main() {
    char board[3][3];  // Cria uma matriz 3x3 para armazenar o tabuleiro do jogo da velha.
    int x = 0, o = 0, x3 = 0, o3 = 0;  // Variáveis para contar 'X' e 'O' no tabuleiro, e para verificar vitórias.
    // Leitura do tabuleiro: Aqui o programa recebe os valores das posições do tabuleiro
    for (int i = 0; i < 3; ++i) {  // Laço para percorrer as linhas do tabuleiro (3 linhas).
        for (int j = 0; j < 3; ++j) {  // Laço para percorrer as colunas do tabuleiro (3 colunas).
            scanf(" %c", &board[i][j]);  // Lê um caractere e coloca na posição correspondente da matriz.
            if (board[i][j] == 'X') ++x;  // Conta quantos 'X' tem no tabuleiro.
            else if (board[i][j] == '0') ++o;  // Conta quantos '0' (O) tem no tabuleiro.
        }
    }
    // Verificando as linhas: Aqui verifica se alguma linha tem todos os mesmos símbolos
    for (int i = 0; i < 3; ++i) {  // Laço para verificar as linhas do tabuleiro.
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) {  // Verifica se os três elementos da linha são iguais.
            x3 += (board[i][0] == 'X');  // Se for 'X', incrementa a contagem de vitórias de 'X'.
            o3 += (board[i][0] == '0');  // Se for '0', incrementa a contagem de vitórias de 'O'.
        }
    }
    // Verificando as colunas: Aqui verifica se alguma coluna tem todos os mesmos símbolos
    for (int i = 0; i < 3; ++i) {  // Laço para verificar as colunas do tabuleiro.
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) {  // Verifica se os três elementos da coluna são iguais.
            x3 += (board[0][i] == 'X');  // Se for 'X', incrementa a contagem de vitórias de 'X'.
            o3 += (board[0][i] == '0');  // Se for '0', incrementa a contagem de vitórias de 'O'.
        }
    }
    // Verificando as diagonais: Aqui verifica se as diagonais têm todos os mesmos símbolos
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {  // Verifica se a diagonal principal tem todos os mesmos símbolos.
        x3 += (board[1][1] == 'X');  // Se for 'X', incrementa a contagem de vitórias de 'X'.
        o3 += (board[1][1] == '0');  // Se for '0', incrementa a contagem de vitórias de 'O'.
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {  // Verifica se a diagonal secundária tem todos os mesmos símbolos.
        x3 += (board[1][1] == 'X');  // Se for 'X', incrementa a contagem de vitórias de 'X'.
        o3 += (board[1][1] == '0');  // Se for '0', incrementa a contagem de vitórias de 'O'.
    }
    // Condições para verificar se o jogo é legal: Aqui verifica se a partida seguiu regras válidas
    if ((x - o < 0 || x - o > 1) || (x3 && o3) || (x3 && x - o != 1) || (o3 && x - o != 0)) {
        printf("illegal\n");  // Se qualquer condição acima for verdadeira, o jogo é ilegal.
    } else if (x3) {
        printf("the first player won\n");  // Se 'X' venceu, imprime que o primeiro jogador ganhou.
    } else if (o3) {
        printf("the second player won\n");  // Se 'O' venceu, imprime que o segundo jogador ganhou.
    } else if (x - o == 0) {
        printf("first\n");  // Se a quantidade de 'X' e 'O' for igual, significa que é a vez do primeiro jogador.
    } else if ((x + o < 9) && (x - o == 1)) {
        printf("second\n");  // Se o número total de jogadas for menor que 9 e a diferença entre 'X' e 'O' for 1, é a vez do segundo jogador.
    } else {
        printf("draw\n");  // Se não houver vencedor e o tabuleiro estiver cheio, imprime que o jogo terminou empatado.
    }
    return 0;  // Finaliza o programa.
}


/*Porque o código funciona?*/
/*O código funciona, pois ele faz um tabuleiro de 3x3 em matriz com char e analisa várias condições para determinar o estado do jogo,
Ele começa lendo os dados do tabuleiro e contando quantos 'X' e 'O' estão presentes. Depois, verifica as linhas, colunas e diagonais para determinar se algum jogador venceu. 
O código também faz uma série de verificações para garantir que o número de jogadas de 'X' e 'O' seja válido, 
Com base nessas verificações, o programa imprime o estado do jogo e encerra o programa*/