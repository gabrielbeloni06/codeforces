/*Codeforces 339A - Gabriel Egídio Santos Beloni   Professor: Felipe Belém */
#include <stdio.h>
int main() {
    char s[105];  // Vetor para armazenar a string de entrada (tamanho suficiente)
    int n1 = 0, n2 = 0, n3 = 0;  // Contadores de 1, 2 e 3
    // Lê a string com os números separados por '+'
    scanf("%s", s);
    // Percorre os caracteres da string de 2 em 2 (0, 2, 4...), pois os números estão nessas posições
    for (int i = 0; s[i] != '\0'; i += 2) {
        if (s[i] == '1') {
            n1++;  // Conta quantos 1 tem
        } else if (s[i] == '2') {
            n2++;  // Conta quantos 2 tem
        } else if (s[i] == '3') {
            n3++;  // Conta quantos 3 tem
        }
    }
    int primeiro = 1;  // Usado para não imprimir '+' antes do primeiro número
    // Imprime os 1s
    for (int i = 0; i < n1; i++) {
        if (!primeiro) printf("+");
        printf("1");
        primeiro = 0;
    }
    // Imprime os 2s
    for (int i = 0; i < n2; i++) {
        if (!primeiro) printf("+");
        printf("2");
        primeiro = 0;
    }
    // Imprime os 3s
    for (int i = 0; i < n3; i++) {
        if (!primeiro) printf("+");
        printf("3");
        primeiro = 0;
    }
    printf("\n");
    return 0;
}
/*Porque o código funciona?*/
/*Esse código funciona porque ele analisa apenas os caracteres da string que representam números, ignorando os sinais de mais. 
Como os números estão sempre em posições alternadas (índices pares), o laço percorre de dois em dois e verifica se o caractere é '1', '2' ou '3', 
somando a quantidade de cada um separadamente. Depois disso, ele imprime todos os 1s, seguidos dos 2s e por fim os 3s, sempre colocando o sinal de mais apenas entre os números. 
Isso garante que a saída esteja em ordem crescente e com o formato correto, como o problema exige.*/