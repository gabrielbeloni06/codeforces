/*Codeforces 1829A - Gabriel Egídio Santos Beloni   Professor: Felipe Belém*/
#include <stdio.h>
int main() {
    long t;             // Variável para armazenar a quantidade de testes
    char s[15];         // Vetor para armazenar a palavra lida
    const char w[] = "codeforces";  // Palavra fixa para comparação
    // Lê o número de casos de teste
    scanf("%ld", &t);
    while (t--) {
        // Lê a palavra que será comparada com "codeforces"
        scanf("%s", s);
        // Calcula o tamanho de w manualmente
        long len_w = 0;
        while (w[len_w] != '\0') {
            len_w++;
        }
        // Calcula o tamanho de s manualmente
        long len_s = 0;
        while (s[len_s] != '\0') {
            len_s++;
        }
        // Define o menor tamanho entre as duas strings
        long len = len_w < len_s ? len_w : len_s;
        long res = 0; // Contador de diferenças
        // Compara caractere por caractere até o menor tamanho
        for (long i = 0; i < len; i++) {
            if (w[i] != s[i]) {
                res++; // Conta diferença
            }
        }
        // Imprime o número de caracteres diferentes
        printf("%ld\n", res);
    }
    return 0; // Fim do programa
}

/*Porque o código funciona?*/
/*O programa funciona porque ele compara letra por letra duas palavras, contando todas as posições onde elas são diferentes. 
Ele faz isso para vários casos de teste, seguindo o número que o usuário informa. Ao comparar, 
ele só verifica até o comprimento da menor palavra para evitar acessar posições inválidas. 
Ao final, imprime quantas letras precisariam ser trocadas para transformar a palavra digitada na palavra fixa "codeforces". */