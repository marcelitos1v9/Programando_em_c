#include <stdio.h>

int main() {
    // Declara��o das vari�veis
    float precoProduto, desconto;

    // Solicita ao usu�rio que informe o pre�o do produto
    printf("Digite o pre�o do produto: ");
    scanf("%f", &precoProduto);

    // Calcula o valor do desconto (5% do pre�o)
    desconto = precoProduto * 0.05;

    // Apresenta o valor do desconto
    printf("O valor do desconto e: %.2f\n", desconto);

    return 0;
}
