/*Codeforces 1772B - Gabriel Egídio Santos Beloni    Professor:Felipe Belém*/
#include <stdio.h>
int main() {
    int t;  // Variável para armazenar o número de casos de teste
    scanf("%d", &t);  // Entrada do número de casos de teste
    // Enquanto tiver testes repete
    while (t--) {  
        int a, b, c, d;  // Variáveis para armazenar os 4 números da matriz 2x2
        scanf("%d %d", &a, &b);  // Lê os dois primeiros números da primeira linha da matriz
        scanf("%d %d", &c, &d);  // Lê os dois números da segunda linha da matriz
        // Verifica se alguma das 4 rotações possíveis da matriz é bonita
        if ((a < b && c < d && a < c && b < d) ||  //Sem rotação
            (c < a && d < b && c < d && a < b) ||  //Rotação 90 graus
            (d < c && b < a && d < b && c < a) ||  //Rotação 180 graus
            (b < d && a < c && b < a && d < c)) {  //Rotação 270 graus
            printf("YES\n");  // Se alguma rotação for bonita, imprime "YES"
        } else {
            printf("NO\n");  // Se nenhuma rotação for bonita, imprime "NO"
        }
    }
    return 0;  // Fim do programa
}

/*Porque o código funciona?*/
/*O código verifica se uma matriz 2x2 pode ser transformada em uma matriz "bonita" através de rotações de 90 graus. 
Para uma matriz ser considerada bonita, as condições de que o primeiro número de cada linha e de cada coluna deve ser menor que o segundo 
devem ser atendidas. O programa lê a matriz e testa as quatro possíveis rotações: 0°, 90°, 180° e 270°. 
Para cada rotação, ele compara os elementos da matriz com as condições de beleza. Se qualquer uma das rotações satisfizer essas condições, 
o programa imprime "YES", caso contrário, imprime "NO". O código realiza essas verificações de forma simples, 
aproveitando o fato de que a matriz é pequena*/