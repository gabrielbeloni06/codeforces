/* Codeforces 141A - Gabriel Egídio Santos Beloni    Professor:Felipe Belém*/
#include <stdio.h>
// Função para calcular o comprimento de uma string
int comprimento(char str[]) {
    int i = 0;
    while (str[i] != '\0') i++;
    return i;
}
// Função para ordenar uma string (Bubble Sort)
void ordenar(char str[]) {
    int i, j;
    int n = comprimento(str);
    char temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (str[j] > str[j + 1]) {
                // Troca os caracteres de lugar
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}
// Função para comparar duas strings (retorna 1 se iguais, 0 se diferentes)
int iguais(char a[], char b[]) {
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] != b[i]) return 0;
        i++;
    }
    // Se terminaram ao mesmo tempo, são iguais
    return a[i] == b[i];
}
int main() {
    char a[110], b[110], c[220], s[220];
    int i, j;
    // Lê as três palavras
    scanf("%s", a);
    scanf("%s", b);
    scanf("%s", c);
    // Junta a e b dentro de s
    i = 0;
    while (a[i] != '\0') {
        s[i] = a[i];
        i++;
    }
    j = 0;
    while (b[j] != '\0') {
        s[i] = b[j];
        i++;
        j++;
    }
    s[i] = '\0'; // Finaliza a string combinada
    // Ordena as duas strings
    ordenar(s);
    ordenar(c);
    // Compara se são iguais
    if (iguais(s, c)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}

/*Porque o código funciona?*/
/*O código funciona porque ele junta as duas primeiras em uma só e ordena as letras. 
Depois, ordena a terceira palavra. Se as duas versões ordenadas forem iguais, significa que a terceira palavra foi formada usando exatamente as letras das duas primeiras, 
sem faltar ou sobrar nenhuma. Por isso, imprime "YES" se for igual e "NO" se não for*/