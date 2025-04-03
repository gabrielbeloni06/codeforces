/*Gabriel Egídio Santos Beloni - Professor: Felipe Belém - AED - 2060A*/
#include <stdio.h>
int main() {
    int t;
    /*Lê o número de casos de testes*/
    scanf("%d", &t);
    /*Loop para processar cada caso*/
    while (t--) {
        int a1, a2, a3, a4, a5;
        /*Leitura das variáveis de entrada*/
        scanf("%d %d %d %d", &a1, &a2, &a4, &a5);
        /*Calcula diferença entre os números para aumentar a precisão*/
        int x1 = a4 - a2;
        int x2 = a5 - a4;
        /*Calcula quantas afirmações são verdadeiras para cada sequência*/
        int fib1 = (a2 + x1 == a4) + (x1 + a4 == a5) + (a1 + a2 == x1);
        int fib2 = (a2 + x2 == a4) + (x2 + a4 == a5) + (a1 + a2 == x2);
        int max;
        /*Compara fib1 e fib2 para verificar qual possui mais afirmações verdadeiras*/
        if (fib1 > fib2) {
            max = fib1;
        } else {
            max = fib2;
        }
        /*Mostra o número*/
        printf("%d\n", max);
    }
    /*Programa encerrado*/
    return 0;
}