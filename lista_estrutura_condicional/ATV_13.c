#include <stdio.h>

int main() {
    float caixa, preco, valorCompra, valorPrazo, valorVista;
    int quantidade;

    printf("Digite a quantidade de dinheiro no caixa: ");
    scanf("%f", &caixa);
    printf("Digite a quantidade de produtos a ser comprada: ");
    scanf("%d", &quantidade);
    printf("Digite o preco de cada unidade: ");
    scanf("%f", &preco);

    valorCompra = quantidade * preco;

    if (valorCompra > 0.8 * caixa) {
        valorPrazo = valorCompra * 1.1;
        printf("Compra a prazo em 3x de R$ %.2f.\n", valorPrazo / 3);
        printf("Valor total a prazo: R$ %.2f\n", valorPrazo);
    } else {
        valorVista = valorCompra * 0.95;
        printf("Compra a vista com 5%% de desconto: R$ %.2f.\n", valorVista);
        printf("Valor total a vista: R$ %.2f\n", valorVista);
    }

    return 0;
}
