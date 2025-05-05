// 300A - Aluno: Gabriel Egídio Santos Beloni Professor: Felipe Belém
#include <stdio.h>
int main() {
    int n, x, y = 0;
    // lê a quantidade de números
    scanf("%d", &n);
    int p[100], neg[100];
    int pT = 0, nT = 0;
    // pT: total de positivos, nT: total de negativos extras
    // para cada número lido
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x > 0) {
            // armazena positivos em p[]
            p[pT++] = x;
        } else if (x < 0) {
            // guarda primeiro negativo em y
            if (y == 0) {
                y = x;
            } else {
                // guarda demais negativos em neg[]
                neg[nT++] = x;
            }
        }
    }
    // imprime o primeiro grupo: sempre 1 e o primeiro negativo
    printf("1 %d\n", y);
    // calcula número par de negativos extras para pares
    int tam = (nT / 2) * 2;
    // imprime total de positivos + pares de negativos
    printf("%d ", pT + tam);
    // imprime todos os positivos
    for (int i = 0; i < pT; i++) {
        printf("%d ", p[i]);
    }
    // imprime apenas quantidade par de negativos extras
    int i;
    for (i = 0; i < tam; i++) {
        printf("%d ", neg[i]);
    }
    // se usou todos os negativos extras, imprime "1 0"
    if (i == nT) {
        printf("\n1 0");
    } else {
        // se sobrou um negativo, imprime "2 neg 0"
        printf("\n2 %d 0", neg[tam]);
    }
    return 0;
}

//Porque o código é funcional?
/*O programa primeiro lê quantos números vai receber. Para cada número, guarda os positivos em um lugar e os negativos em outro, 
mas deixa o primeiro negativo separadamente. Depois de ler tudo, imprime esse primeiro negativo sozinho. 
Em seguida, conta quantos negativos extras existem e só usa um número par deles para formar o segundo grupo junto com todos os positivos. 
Isso evita que sobrem negativos soltos nesse segundo grupo. Finalmente, verifica se sobrou um único negativo não usado; 
se sobrar, este é impresso no terceiro grupo junto de um zero, se não imprime “0”. Assim, o programa sempre retorna três grupos de valores seguindo regras de pares e sinais.*/