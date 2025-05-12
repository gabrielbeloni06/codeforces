/*Gabriel Egídio Santos Beloni - Professor Felipe Belém - 732A*/
#include <stdio.h>
int main(){
    int k, r, n, total; /*Declaração das variáveis*/
    scanf("%d %d",&k, &r); /*Entrada das variáveis*/
    n = 1; /*Define numero de pás = 1*/
    while (1){ /*While para fazer um loop até encontrar o resultado*/
        total = k * n; /*Calcula o valor total das pás*/
        if (total % 10 == 0 || total % 10 == r){ /*Verifica se termina em 0 ou no valor da moeda*/
            printf ("%d", n); /*Imprime o resultado*/
            return 0; /*Encerra o código*/
                }
        n++; /*Aumenta o número de pás em 1 para cada tentativa sem resultado*/
    }
}

/*O código funciona, pois o mesmo verifica se o número de pás termina em 0 ou no valor da moeda estabelecida no enunciado,
procurando o menor número de pás para dar o valor exato, sem resto (troco)*/