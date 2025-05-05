// 299A - Aluno: Gabriel Egídio Santos Beloni Professor: Felipe Belém
#include <stdio.h>
// Função para trocar o valor de duas variáveis usando ponteiros
void troca(long long *x, long long *y) {
    long long tmp = *x;    // guarda o valor de x em tmp
    *x = *y;              // atribui o valor de y em x
    *y = tmp;             // coloca tmp (valor original de x) em y
}
// Função que separa o vetor em duas partes
int particionar(long long vetor[], int inicio, int fim) {
    long long pivo = vetor[(inicio + fim) / 2];  // escolhe o elemento do meio como referência
    int esquerda = inicio, direita = fim;
    // verifica se os índices da esquerda e direita não se encontram
    while (esquerda <= direita) {
        // anda o índice da esquerda até encontrar elemento >= referência
        while (vetor[esquerda] < pivo) esquerda++;
        // anda o índice da direita até encontrar elemento <= referência
        while (vetor[direita] > pivo) direita--;
        // se ainda não cruzaram, troca os valores
        if (esquerda <= direita) {
            troca(&vetor[esquerda], &vetor[direita]);
            esquerda++;  // aumenta índice da esquerda
            direita--;  // aumenta índice da direita
        }
    }
    return esquerda;  // retorna ponto de divisão para recursão
}
// Função de ordenação rápida
void ordena(long long vetor[], int inicio, int fim) {
    if (inicio < fim) {
        int indice = particionar(vetor, inicio, fim);    // divide o vetor
        if (inicio < indice - 1)
            ordena(vetor, inicio, indice - 1);           // ordena parte esquerda
        if (indice < fim)
            ordena(vetor, indice, fim);                  // ordena parte direita
    }
}
int main() {
    long long quantidade, resposta = -1, contagem = 0;
    long long vetor[100000];

    // lê quantos números vamos processar
    if (scanf("%lld", &quantidade) != 1) return 0;
    // lê cada valor no vetor
    for (long long i = 0; i < quantidade; i++) {
        scanf("%lld", &vetor[i]);
    }

    // se houver ao menos um elemento, ordena o vetor
    if (quantidade > 0)
        ordena(vetor, 0, (int)(quantidade - 1));

    // conta quantos números são divisíveis pelo menor (vetor[0])
    for (long long j = 0; j < quantidade; j++) {
        if (vetor[j] % vetor[0] == 0) {
            contagem++;
        }
    }
    // se todos forem divisíveis, resposta é o menor, senão fica -1
    if (contagem == quantidade) {
        resposta = vetor[0];
    }
    // imprime o resultado
    printf("%lld\n", resposta);
    return 0;
}


//Porque o código funciona?
/*O programa lê uma lista de números e coloca os números em ordem crescente. 
Primeiro, ele escolhe um valor de referência no meio do vetor e move elementos menores para a esquerda e maiores para a direita. 
Depois, ele aplica o mesmo processo recursivamente em cada parte até que tudo fique ordenado. 
Com o vetor ordenado, o menor número fica na posição zero. Em seguida, o programa verifica se todos os números são divisíveis pelo menor, 
contando quantos satisfazem essa condição. Se todos forem divisíveis, ele imprime esse menor número; caso contrário, imprime -1. 
A troca de valores usa ponteiros para modificar o vetor diretamente. No final, imprime o resultado.*/