#include <stdio.h>

int main() {
    // Declara��o das vari�veis
    float precoProduto, desconto, valorPago;

    // Solicita ao usu�rio que informe o pre�o do produto
    printf("Digite o pre�o do produto: ");
    scanf("%f", &precoProduto);

    // Solicita ao usu�rio que informe o valor do desconto
    printf("Digite o valor do desconto: ");
    scanf("%f", &desconto);

    // Calcula o valor a ser pago pelo produto (subtrai o desconto do pre�o)
    valorPago = precoProduto - desconto;

    // Apresenta o valor a ser pago
    printf("O valor a ser pago pelo produto e: %.2f\n", valorPago);

    return 0;
}

