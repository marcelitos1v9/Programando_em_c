
#include <stdio.h>

int main() {
    float VAL_DOLAR, COT, VAL_REAL;

    // Solicita a quantidade de d�lares guardados no cofre
    printf("Digite a quantidade de d�lares guardados no cofre: ");
    scanf("%f", &VAL_DOLAR);

    // Solicita a cota��o do d�lar naquele dia(so funciona com "."
    printf("Digite a cota��o do d�lar naquele dia: ");
    scanf("%f", &COT);

    // Calcula o valor em Reais correspondente aos d�lares
    VAL_REAL = VAL_DOLAR * COT;

    // Exibe o resultado
    printf("O valor em Reais correspondente aos d�lares �: %.2f Reais\n", VAL_REAL);

    return 0;
}
