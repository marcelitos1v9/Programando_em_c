
#include <stdio.h>

int main() {
    float VAL_DOLAR, COT, VAL_REAL;

    // Solicita a quantidade de dólares guardados no cofre
    printf("Digite a quantidade de dólares guardados no cofre: ");
    scanf("%f", &VAL_DOLAR);

    // Solicita a cotação do dólar naquele dia(so funciona com "."
    printf("Digite a cotação do dólar naquele dia: ");
    scanf("%f", &COT);

    // Calcula o valor em Reais correspondente aos dólares
    VAL_REAL = VAL_DOLAR * COT;

    // Exibe o resultado
    printf("O valor em Reais correspondente aos dólares é: %.2f Reais\n", VAL_REAL);

    return 0;
}
