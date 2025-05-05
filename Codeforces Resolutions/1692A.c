/*Gabriel Egídio Santos Beloni - Professor Felipe Belém - 1692A*/
#include <stdio.h>
int main(){
    int t; /*Declara t como variável para saber o número de testes a ser feito*/
    scanf("%d", &t); /*Entrada do número de testes t*/
    while(t--){ /*Loops de testes*/
        int a, b, c, d; /*Declara as variáveis a,b,c e d*/
        scanf("%d %d %d %d", &a, &b, &c, &d); /*Entrada das váriáveis*/
        int frente = 0; /*Variável para contar quantos valores são maiores que a*/
        if (b > a) frente++; /*Testa se b > a*/
        if (c > a) frente++; /*Testa se c > a*/
        if (d > a) frente++; /*Testa se d > a*/
        printf("%d\n", frente); /*Imprime o número de variáveis maiores que a*/
    }
    return 0; /*Encerra o código*/
}

/*Esse código funciona, pois verifica através da comparação direta por >,
quais números são maiores que o inicial, calculando assim através de um contador chamado frente e imprimindo no final o valor*/