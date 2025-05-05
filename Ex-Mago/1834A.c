// 1834A - Aluno: Gabriel Egídio Santos Beloni Professor: Felipe Belém
#include <stdio.h>
int main(){
    long t;
    // lê quantos casos de teste haverá
    scanf("%ld", &t);
    while (t--) {
        long n;
        // lê o tamanho do array para este caso
        scanf("%ld", &n);
        long pos = 0, neg = 0;
        // contadores de números positivos e negativos
        for (long i = 0; i < n; i++) {
            int x;
            // lê cada valor do array
            scanf("%d", &x);
            pos += (x > 0);    // soma 1 se x for positivo
            neg += (x < 0);    // soma 1 se x for negativo
        }
        long cont = 0;
        // calcula quantas operações são necessárias
        if (pos < neg) {
            // se há mais negativos que positivos,
            // precisamos transformar alguns negativos em positivos
            cont = (neg - pos + 1) / 2;  // quantos inversões são precisas
            pos += cont;  // atualiza o número de positivos
            neg -= cont;  // atualiza o número de negativos
        }
        if (neg % 2) {
            // se ainda restar um número ímpar de negativos,
            // faz um movimento extra para ajustar o sinal
            ++cont;
        }
        // imprime o total mínimo de operações para este caso
        printf("%ld\n", cont);
    }
    return 0;
}


// Porque o código funciona?
/*O programa resolve o problema em duas partes: primeiro ele conta quantos números estão acima ou abaixo de zero. Se têm mais números negativos, 
ele transforma alguns em positivos para equilibrar, então calcula quantas vezes precisa inverter os sinais dos números. 
Cada inversão aumenta os positivos e diminui os negativos. Depois, ele verifica se ainda resta um número ímpar de negativos — nesse caso, 
ele faz mais uma operação para ajustar tudo. Assim, sem mexer em cada número isoladamente, ele usa contagens e cálculos simples para descobrir o mínimo de mudanças necessárias.*/