/*Gabriel Egídio Santos Beloni - Professor: Felipe Belém - AED - 1154A*/
#include <stdio.h>
int main(void){
    /*Declarando as variáveis do programa*/
    int x1, x2, x3, x4, y1, y2, y3, soma, a, b ,c;
    /*Entrada dos dados*/
    scanf("%d %d %d %d", &x1, &x2, &x3, &x4);
    /*Aplicação de um dos valores de entrada para comparar qual o maior*/
    soma = x1;
    /*Teste de qual valor de entrada foi o maior*/
    if (x2 > soma) soma = x2;
    if (x3 > soma) soma = x3;
    if (x4 > soma) soma = x4;
    /*Dando identidade para os valores restantes*/
    /*Caso o maior seja x1, logo os outros devem ser x2, x3, x4, e teste individual para ver quais foram os menores */
    /*O último else é caso seja x4, já que não vai ter uma opção depois, logo pode afirmar quem é cada valor*/
    if (soma == x1) {
        y1 = x2; y2 = x3; y3 = x4;
    } else if (soma == x2) {
        y1 = x1; y2 = x3; y3 = x4;
    } else if (soma == x3) {
        y1 = x1; y2 = x2; y3 = x4;
    } else {
        y1 = x1; y2 = x2; y3 = x3;
    }
    /*Teste para aplicar qual o valor de a,b,c, de modo que o total menos a soma dos outros dois de o valor do qual procuramos*/
    a = soma - y1;
    b = soma - y2;
    c = soma - y3;
    /*Saida dos dados*/
    printf("%d %d %d", a, b, c);
    /*Programa encerrado*/
    return 0;
}