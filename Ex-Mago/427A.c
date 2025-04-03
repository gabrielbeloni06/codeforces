/*Gabriel Egídio Santos Beloni - Professor Felipe Belém - 427A*/
#include <stdio.h>
int main(){
    int n, pm, sit, res, notRes; /*Inicializa as variáveis usadas no código*/
    scanf("%d", &n); /*Entrada de uma variável*/
    pm = 0; /*Declara policiais diponíveis como 0*/
    sit = 0; /*Variável usada como situação a ser interpretada*/
    notRes = 0; /*Casos não resolvidos*/
    while (n>0){ /*Loop para calcular as situações*/
        scanf("%d", &sit); /*Entrada de dados*/
        if (sit == -1){ /*-1 é associado a um crime*/
            if (pm > 0){/*Caso tenha policial, resolve o crime*/
                pm --; /*Caso tenha policial, diminui um no número*/
            }else{ notRes++; /*Caso não tenha policiais, aumenta em 1 o número de casos não resolvidos*/
                 }
        }else{
            pm += sit; /*Caso não seja negativo, aumenta o número de policiais diponíveis*/
        }
        n--; /*Número de eventos diminui em 1*/
    }
    printf("%d\n", notRes); /*Imprime o valor total de casos não resolvidos*/
    return 0; /*Encerra o código*/
}

/*Tal código resolve o problema devido ao mesmo simular através do -1, um crime e +1 um policial, calculando assim as situações ocorridas,
com o uso do while, o mesmo se repete até que o número de testes acabe. 
Caso não tenha policiais suficientes para resolver o crime, adiciona 1 em casos não resolvidos e caso tenha, diminui 1 em número de policiais e 1 em casos resolvidos*/