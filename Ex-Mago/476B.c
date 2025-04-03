/*Gabriel Egídio Santos Beloni - Professor:Felipe Belém - 476B*/
#include <stdio.h>
/*Cálculo do fatorial de um número*/
int fatorial(int n) { /*Função para calcular fatoral declarada como fatorial*/
    int total = 1; /*Declara a variável total*/
    for (int i = 2; i <= n; i++) {
        total *= i;
    }
    return total;
}
/*Cálculo do coeficiente C(n, k) = n! / (k! * (n-k)!)*/
double coef(int n, int k) { /*Função para calcular o coenficiente declarada como coef*/
    return (double)fatorial(n) / (fatorial(k) * fatorial(n - k));
}
/*Cálculo para fazer a potência do número*/
double poten(int exp) {
    double total = 1.0;
    for (int i = 0; i < exp; i++) {
        total *= 2.0;
    }
    return total;
}
/*Cálculo para calcular a probabilidade de alcançar a posição pedida*/
double prob(int total, int pos) {
    if (pos < 0 || pos > total)
        return 0.0;
    
    return coef(total, pos) / poten(total);
}
/*Cálculo da posição*/
int main() {
    char c; /*Declara a variável char c*/
    int pos1 = 0, pos2 = 0, desc = 0; /*Declara as variáveis pos1/pos2/desc como 0*/
    while ((c = getchar()) != '\n' && c != ' ') {
        if (c == '+')
            pos1++; /*Adiciona 1 na variável pos1*/
        else
            pos1--; /*Remove 1 na variável pos1*/
    }
    /*Cálculo da posição final*/
    while ((c = getchar()) != '\n' && c != ' ') {
        if (c == '+')
            pos2++; /*Adiciona 1 na variável pos2*/
        else if (c == '-')
            pos2--; /*Remove 1 na variável pos2*/
        else
            desc++; /*Adiciona 1 na variável desc*/
    }
    /*Cálculo da diferença entre as posições finais*/
    int dif = pos1 - pos2; /*Declara a variável de diferença*/
    int necess = (dif + desc) / 2; /*Declara a variável de números positivos*/
    /*Teste para verificar se é possível*/
    if ((dif + desc) % 2 != 0 || necess < 0 || necess > desc) {
        printf("%.12f\n", 0.0); /*Imprime o resultado*/
    } else {
        printf("%.12f\n", prob(desc, necess)); /*Imprime o resultado*/
    }
    return 0; /*Encerra o programa*/
}

/*O código funciona, pois ele calcula a probabilidade de Dreamoon alcançar a posição final esperada, considerando os comandos como escolhas aleatórias.
Ele faz isso em três etapas, primeiro calcula as posições esperadas e compara com as recebidas, em segundo ele calcula as diferenças e quantos positivos são necessários,
e em terceiro o código calcula a probabilidade, dando como resultado 0 ou usando o coeficiente para calcular e divide pelo n de possibilidades.*/
