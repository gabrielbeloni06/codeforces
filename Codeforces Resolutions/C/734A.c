/*Codeforces 734A - Gabriel Egídio Santos Beloni   Professor: Felipe Belém*/
#include <stdio.h>
int main(){
    long n;               // Variável para armazenar o número de jogos
    scanf("%ld%*c", &n);  // Lê o número de jogos e descarta o caractere '\n' após a entrada
    char v[n];            // Vetor para armazenar o resultado de cada jogo ('A' ou 'D')
    int A = 0, D = 0;     // Contadores para vitórias do Anton (A) e Danik (D)
    // Loop para ler os resultados dos n jogos
    for(int i = 0; i < n; i++){
        scanf("%c", &v[i]);  // Lê um caractere por vez (resultado do jogo)
    }
    // Loop para contar quantas vezes Anton e Danik ganharam
    for(int i = 0; i < n; i++){
        if(v[i] == 'A'){    // Se o resultado for 'A', incrementa contador de Anton
            A++;
        }
        if(v[i] == 'D'){    // Se o resultado for 'D', incrementa contador de Danik
            D++;
        }
    }
    // Compara as quantidades de vitórias para definir o resultado final
    if(A > D){
        printf("Anton");        // Anton ganhou mais jogos
    }
    else if(D > A){
        printf("Danik");        // Danik ganhou mais jogos
    }
    else{
        printf("Friendship");   // Empate entre Anton e Danik
    }
    return 0;   // Finaliza o programa com sucesso
}
/*Porque o código funciona?*/
/*O código funciona porque ele lê a quantidade de jogos e depois armazena cada resultado em um vetor de caracteres. 
Em seguida, percorre esse vetor contando quantas vezes cada jogador venceu, incrementando o contador de Anton quando encontra 'A' e o de Danik quando encontra 'D'. 
Após contar todas as vitórias, ele compara esses valores para determinar quem venceu mais partidas ou se houve empate. 
Como o programa processa os dados exatamente nessa ordem, sem perder ou alterar informações, ele consegue indicar corretamente o vencedor ou declarar empate. 
Assim, ele implementa a lógica do problema de forma simples, direta e eficiente.*/