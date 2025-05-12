/*Codeforces 263A - Gabriel Egídio Santos Beloni    Professor:Felipe Belém*/
#include <stdio.h>
int main(){
    int i, j, n, ans = 0;  // Declara variáveis: i, j para percorrer o tabuleiro, n para armazenar o valor lido, ans para o cálculo da resposta.
    // Laço para percorrer o tabuleiro 5x5 (i representa a linha e j a coluna)
    for (i = 1; i <= 5; i++) {  // Laço externo para percorrer as 5 linhas do tabuleiro (1 a 5).
        for (j = 1; j <= 5; j++) {  // Laço interno para percorrer as 5 colunas de cada linha (1 a 5).
            scanf("%d", &n);  // Lê um valor inteiro de cada posição do tabuleiro.
            // Quando encontrar o número 1 no tabuleiro, calcula a distância até o centro (posição 3,3)
            if (n == 1) {
                // Calcula a distância vertical entre a linha do 1 e a linha 3 (centro)
                if (i - 3 < 0)
                    ans = 3 - i;  // Se a linha for acima do centro, subtrai 3 - i.
                else
                    ans = i - 3;  // Se a linha for abaixo ou no centro, subtrai i - 3.

                // Calcula a distância horizontal entre a coluna do 1 e a coluna 3 (centro)
                if (j - 3 < 0)
                    ans += 3 - j;  // Se a coluna for à esquerda do centro, subtrai 3 - j.
                else
                    ans += j - 3;  // Se a coluna for à direita ou no centro, subtrai j - 3.
            }
        }
    }
    // Imprime a resposta final: a distância mínima do '1' até o centro do tabuleiro.
    printf("%d\n", ans);  // Exibe a distância total.
    return 0;  // Finaliza o programa com sucesso.
}


/*Porque o código funciona?*/
/*O código simula uma matriz 5x5 e busca a posição de um valor igual a 1. Após encontrar esse valor, ele calcula a distância entre a posição encontrada e o centro do tabuleiro, 
que está na posição (3, 3) entre 1 a 5. O cálculo da distância é feito separando a diferença entre as linhas e as colunas. 
A fórmula utilizada considera se a linha e a coluna do número 1 estão acima, abaixo ou no centro do tabuleiro. O valor final é armazenado na variável e impresso*/