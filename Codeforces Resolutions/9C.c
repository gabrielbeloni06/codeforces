/*Gabriel Egídio Santos Beloni - Professor:Felipe Belém - 9C */
#include <stdio.h>
/*Função recursiva para contar os números binários de 1 até n*/
int binario(long long n, long long num) {
    if (num > n) return 0; /*Caso núm > n retorna 0*/
    int contador = 1; /*Declara contador como 1*/
    /*Cálculo do próximo binário (adiciona 0 e 1)*/
    contador += binario(n, num * 10);
    contador += binario(n, num * 10 + 1);
    return contador; /*Retorna o contador total*/
}
int main() {
    long long n;
    /*Entrada do valor de n*/
    scanf("%lld", &n);
    /*Declara resultado e calcula resultado a partir da função de binario (1)*/
    int resultado = binario(n, 1);  
    printf("%d\n", resultado);  /*Imprime o resultado*/
    return 0;
}

/*O código funciona porque calcula dentro de um limite a quantidade possível de representações,
começa de 1 e vai explorando todas as possibilidades (contador =1), o código funciona através da multiplicação por 10 e a soma de 1,
tal calculo é feito através da contagem de quantos numeros binarios podem ser escritos até chegar na entrada*/