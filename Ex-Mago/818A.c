/*Gabriel Egídio Santos Beloni - Professor: Felipe Belém - AED - 818A*/
#include <stdio.h>
int main(){
    long long n, k;
    /*Escaneia os valores de entrada do problema n e k*/
    scanf("%lld %lld", &n, &k);
    /*Número máximo de pessoas que ganharam ambos*/
    long long maxWinner = n/2;
    /*Número de diplomas*/
    long long dip = maxWinner/(k+1);
    /*Número de certificados*/
    long long cert = dip * k;
    /*Número de quem ganhou certficados e diplomas*/
    long long winner = cert + dip;
    /*Número de participantes excluindo os ganhadores de diplomas e certificados juntos*/
    long long loser = n - winner;
    /*Mostra o resultado de quem ganhou diploma, certificado e a quantidade de participantes que não ganharam os dois juntos*/
    printf("%lld %lld %lld\n", dip, cert, loser);
    /*Programa encerrado*/
    return 0;
}