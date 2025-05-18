/*Codeforces 59A - Gabriel Egídio Santos Beloni    Professor: Felipe Belém*/
#include <stdio.h>
// Função que calcula o comprimento de uma string
int tamanho(char str[]) {
    int i = 0;
    while (str[i] != '\0') i++;
    return i;
}
// Função que transforma uma letra minúscula em maiúscula
char maiuscula(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - 32;
    }
    return c;
}
// Função que transforma uma letra maiúscula em minúscula
char minuscula(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 32;
    }
    return c;
}
int main() {
    char x[110]; // Vetor para armazenar a string
    int i, tam;
    int minusculas = 0, maiusculas = 0;
    // Lê a string digitada pelo usuário
    scanf("%s", x);
    // Calcula o tamanho da string
    tam = tamanho(x);
    // Conta quantas letras são minúsculas e quantas são maiúsculas
    for (i = 0; i < tam; i++) {
        if (x[i] >= 'a' && x[i] <= 'z') {
            minusculas++;
        } else if (x[i] >= 'A' && x[i] <= 'Z') {
            maiusculas++;
        }
    }
    // Se houver mais letras minúsculas ou mesma quantidade, converte tudo para minúsculas
    if (minusculas >= maiusculas) {
        for (i = 0; i < tam; i++) {
            x[i] = minuscula(x[i]);
        }
    } else {
        // Caso contrário, converte tudo para maiúsculas
        for (i = 0; i < tam; i++) {
            x[i] = maiuscula(x[i]);
        }
    }
    // Imprime a string modificada
    printf("%s\n", x);
    return 0;
}



/*Porque o código funciona?*/
/*O programa funciona porque ele lê uma palavra e decide se deve transformá-la toda em letras maiúsculas ou minúsculas. 
Ele conta quantas letras são de cada tipo. Se houver mais letras minúsculas (ou se for igual), ele converte tudo para minúsculas. 
Se houver mais letras maiúsculas, converte tudo para maiúsculas.Tudo feito com base no que mais aparece.*/