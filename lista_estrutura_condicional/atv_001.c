// Inclusão de bibliotecas
#include <stdio.h>
#include <stdlib.h>
int main() {
    // Declaração de variáveis
    float vlr_fatura,vlr_limit;

    vlr_limit = 50;

    printf("Digite o valor da fatura de energia: ");
    scanf("%f", &vlr_fatura);

    if(vlr_fatura>=vlr_limit){
        printf("Voce esta gastando muita energia");
    }

    return 0;
}
