/*Gabriel Egídio Santos Beloni - Professor Felipe Belém - 510A*/
#include <stdio.h>
int main() {
    int n, m; /*Declaração de variáveis*/
    scanf("%d %d", &n, &m); /*Entrada das variáveis*/
    for (int i = 0; i < n; i++) { /*Loop para verificar cada linha*/
        /*Escrita de uma linha completa de #*/
        if (i % 4 == 0 || i % 4 == 2) { 
            for (int j = 0; j < m; j++)
                printf("#");
        /*Escrita de uma linha com . e um # no final*/
        } else if (i % 4 == 1) {
            for (int j = 0; j < m - 1; j++)
                printf(".");
            printf("#");
        /*Preenche a linha com um # e . até no final*/
        } else if (i % 4 == 3) {
            printf("#");
            for (int j = 1; j < m; j++)
                printf(".");
        }
        printf("\n");
    }
    return 0;
}

/*O código acima funciona, pois ele verifica com i % 4, o que vai ser impresso em cada linha, e com o for,
este se repete n vezes até acabar os números, sendo i >= n, tais números são definidos na entrada*/

