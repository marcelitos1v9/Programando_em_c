#include <stdio.h>

int main() {
    float PE, totalCompra = 0;
    int CP;
    char continuar;

    do {
        // Solicita ao usu�rio o pre�o da etiqueta do produto
        printf("Digite o preco da etiqueta do produto: R$");
        scanf("%f", &PE);

        // Solicita ao usu�rio o c�digo da condi��o de pagamento
        printf("Escolha a forma de pagamento:\n");
        printf("1 - A vista em dinheiro ou cheque, com 10%% de desconto\n");
        printf("2 - A vista com cart�o de credito, com 5%% de desconto\n");
        printf("3 - Em 2 vezes, preco normal de etiqueta sem juros\n");
        printf("4 - Em 3 vezes, preco de etiqueta com acrescimo de 10%%\n");
        printf("Digite o numero correspondente � forma de pagamento: ");
        scanf("%d", &CP);

        // Valida��o do c�digo da condi��o de pagamento
        while (CP < 1 || CP > 4) {
            printf("Codigo de condicao de pagamento invalido. Por favor, digite novamente: ");
            scanf("%d", &CP);
        }

        // Calcula o total da compra com base na condi��o de pagamento
        switch (CP) {
            case 1:
                totalCompra += PE * 0.9; // � vista em dinheiro ou cheque, com 10% de desconto
                printf("Forma de pagamento: A vista em dinheiro ou cheque (10%% de desconto)\n");
                break;
            case 2:
                totalCompra += PE * 0.95; // � vista com cart�o de cr�dito, com 5% de desconto
                printf("Forma de pagamento: A vista com cart�o de credito (5%% de desconto)\n");
                break;
            case 3:
                totalCompra += PE; // Em 2 vezes, pre�o normal de etiqueta sem juros
                printf("Forma de pagamento: Em 2 vezes (pre�o normal de etiqueta)\n");
                break;
            case 4:
                totalCompra += PE * 1.1; // Em 3 vezes, pre�o de etiqueta com acr�scimo de 10%
                printf("Forma de pagamento: Em 3 vezes (preco de etiqueta com acrescimo de 10%%)\n");
                break;
        }

        // Pergunta ao usu�rio se deseja adicionar mais produtos � compra
        do {
            printf("Deseja adicionar mais produtos a compra? (S/N): ");
            scanf(" %c", &continuar);
        } while (continuar != 'S' && continuar != 's' && continuar != 'N' && continuar != 'n');

    } while (continuar == 'S' || continuar == 's');

    // Exibe o total da compra realizada pelo cliente
    printf("Total da compra: R$%.2f\n", totalCompra);

    return 0;
}
