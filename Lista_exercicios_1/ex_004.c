#include <stdio.h>

int main() {
    // Declaração das variáveis
    float precoProduto, desconto, valorPago;

    // Solicita ao usuário que informe o preço do produto
    printf("Digite o preço do produto: ");
    scanf("%f", &precoProduto);

    // Solicita ao usuário que informe o valor do desconto
    printf("Digite o valor do desconto: ");
    scanf("%f", &desconto);

    // Calcula o valor a ser pago pelo produto (subtrai o desconto do preço)
    valorPago = precoProduto - desconto;

    // Apresenta o valor a ser pago
    printf("O valor a ser pago pelo produto e: %.2f\n", valorPago);

    return 0;
}

