/*Gabriel Egídio Santos Beloni - Professor Felipe Belém - 151A*/
#include <stdio.h>
int main() {
    int n, k, l, c, d, p, nl, np; /*Declaração das variáveis apresentadas no problema*/
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np); /*Entrada das variáveis declaradas*/
    int bebida = k * l;  /*Calculo da quantidade de bebidas*/
    int limao = c * d; /*Calculo da quantidade de fatias*/
    int sal = p;  /*Calculo da quantidade de sal*/
    int brindeB = bebida / nl;  /*Calculo da quantidade de brindes com bebida*/
    int brindeL = limao; /*Calculo da quantidade de brindes com limão*/   
    int brindeS = sal / np; /*Calculo da quantidade de brindes com sal*/
    int max = brindeB; /*Declara brindeB (brinde de bebida como o máximo para comparar com os outros)*/
    if (brindeL < max) { /*Compara max, com o brinde de limão*/
        max = brindeL; /*Caso maior, substitui*/
    }
    if (brindeS < max) { /*Compara max, com o brinde de sal*/
        max = brindeS; /*Caso maior, substitui*/
    }
    printf("%d\n", max / n); /*Imprime o valor máximo de brindes possíveis com um dos recursos*/
    return 0; /*Encerra o código*/
}

/*O código acima resolve o problema 151A, pois ele calcula e compara quantos brindes é possivel fazer com cada ingrediente
Calculando primeiro o quanto de bebida tem disponível, limão e sal, depois disso, calcula quanto de cada brinde pode ser feito
E depois de tudo isso compara através de uma variável max, qual é o maior brinde dentre os três*/