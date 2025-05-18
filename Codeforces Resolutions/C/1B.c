/*Codeforces 1B - Gabriel Egídio Santos Beloni   Professor:Felipe Belém*/
#include <stdio.h>
// Função que verifica se o caractere é uma letra (entre A e Z, maiúsculas ou minúsculas)
int is_letra(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}
// Função que verifica se o caractere é um número (entre '0' e '9')
int is_digito(char c) {
    return (c >= '0' && c <= '9');
}
int main() {
    int n;             // Variável para guardar quantos testes (casos) serão lidos
    char ch[20];       // Vetor de caracteres para guardar a string de entrada
    // Lê a quantidade de entradas que o usuário vai fornecer
    scanf("%d", &n);
    // Loop para processar cada entrada
    while (n--) {
        scanf("%s", ch); // Lê a string (por exemplo: "R23C55" ou "BC23")
        // Calcula o tamanho da string manualmente (sem usar strlen)
        int tam = 0;
        while (ch[tam] != '\0') tam++;
        int C = 1; // Começa da posição 1 porque a posição 0 geralmente é uma letra
        // Avança enquanto os caracteres forem dígitos (0 a 9)
        // Isso serve para separar a parte da linha da parte da coluna
        while (C < tam && is_digito(ch[C])) {
            C++;
        }
        // Verifica se a string está no formato tipo "R23C55"
        // Ou seja, começa com uma letra, depois números, depois mais letras e números
        if (C > 1 && C < tam) {
            int col = 0; // Vai guardar o número da coluna
            // Converte os dígitos depois do 'C' em um número inteiro (por exemplo: '55' → 55)
            for (int i = C + 1; i < tam; ++i) {
                col = col * 10 + (ch[i] - '0'); // Faz a conversão caractere → número
            }
            // Essa parte calcula quantas letras serão necessárias para representar o número da coluna
            int pot = 26;
            while (col > pot) {
                col -= pot;
                pot *= 26;
            }
            // Ajusta para o índice começar em 0
            col -= 1;
            // Converte número para letras de coluna, como 55 → "BC"
            while (pot != 1) {
                pot /= 26;
                printf("%c", col / pot + 'A'); // Imprime a letra correspondente
                col %= pot;
            }
            ch[C] = 0; // Coloca um fim de string na posição do 'C', para isolar a parte do número da linha
            printf("%s\n", ch + 1); // Imprime a linha (pula o 'R' inicial da string)
        } else {
            // Caso a string esteja no formato tipo "BC23" (coluna em letras, linha em número)
            int col = 0, val = 0, pot = 1;
            int i = 0;
            // Converte as letras da coluna para número (ex: "BC" → 55)
            while (is_letra(ch[i])) {
                col += pot; // Soma a potência atual ao total
                pot *= 26;  // Aumenta a potência para base 26 (como em sistema alfabético)
                val = val * 26 + ch[i] - 'A'; // Converte letra para número (A = 0, B = 1, ...)
                i++;
            }
            col += val; // Soma o valor final ao total da coluna
            // Imprime no formato "RlinhaCcoluna", por exemplo: R23C55
            printf("R%sC%d\n", ch + i, col);
        }
    }
    return 0;
}



/*Porque o código funciona?*/
/*O código funciona porque O código funciona porque ele identifica dois formatos, que representa a coluna em letras. 
Ele transforma letras em números e vice-versa usando matemática de base 26. O código usa laços para percorrer os caracteres e converter os valores manualmente. 
Ele trata corretamente os dois formatos e imprime a conversão certa para cada caso.*/