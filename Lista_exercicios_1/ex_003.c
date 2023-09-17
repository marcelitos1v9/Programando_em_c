#include <stdio.h>

int main() {
    // Declaração das variáveis
    float precoProduto, desconto;

    // Solicita ao usuário que informe o preço do produto
    printf("Digite o preço do produto: ");
    scanf("%f", &precoProduto);

    // Calcula o valor do desconto (5% do preço)
    desconto = precoProduto * 0.05;

    // Apresenta o valor do desconto
    printf("O valor do desconto e: %.2f\n", desconto);

    return 0;
}
