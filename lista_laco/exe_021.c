#include <stdio.h>

int main() {
    float PE, totalCompra = 0;
    int CP;
    char continuar;

    do {
        // Solicita ao usuário o preço da etiqueta do produto
        printf("Digite o preco da etiqueta do produto: R$");
        scanf("%f", &PE);

        // Solicita ao usuário o código da condição de pagamento
        printf("Escolha a forma de pagamento:\n");
        printf("1 - A vista em dinheiro ou cheque, com 10%% de desconto\n");
        printf("2 - A vista com cartão de credito, com 5%% de desconto\n");
        printf("3 - Em 2 vezes, preco normal de etiqueta sem juros\n");
        printf("4 - Em 3 vezes, preco de etiqueta com acrescimo de 10%%\n");
        printf("Digite o numero correspondente à forma de pagamento: ");
        scanf("%d", &CP);

        // Validação do código da condição de pagamento
        while (CP < 1 || CP > 4) {
            printf("Codigo de condicao de pagamento invalido. Por favor, digite novamente: ");
            scanf("%d", &CP);
        }

        // Calcula o total da compra com base na condição de pagamento
        switch (CP) {
            case 1:
                totalCompra += PE * 0.9; // À vista em dinheiro ou cheque, com 10% de desconto
                printf("Forma de pagamento: A vista em dinheiro ou cheque (10%% de desconto)\n");
                break;
            case 2:
                totalCompra += PE * 0.95; // À vista com cartão de crédito, com 5% de desconto
                printf("Forma de pagamento: A vista com cartão de credito (5%% de desconto)\n");
                break;
            case 3:
                totalCompra += PE; // Em 2 vezes, preço normal de etiqueta sem juros
                printf("Forma de pagamento: Em 2 vezes (preço normal de etiqueta)\n");
                break;
            case 4:
                totalCompra += PE * 1.1; // Em 3 vezes, preço de etiqueta com acréscimo de 10%
                printf("Forma de pagamento: Em 3 vezes (preco de etiqueta com acrescimo de 10%%)\n");
                break;
        }

        // Pergunta ao usuário se deseja adicionar mais produtos à compra
        do {
            printf("Deseja adicionar mais produtos a compra? (S/N): ");
            scanf(" %c", &continuar);
        } while (continuar != 'S' && continuar != 's' && continuar != 'N' && continuar != 'n');

    } while (continuar == 'S' || continuar == 's');

    // Exibe o total da compra realizada pelo cliente
    printf("Total da compra: R$%.2f\n", totalCompra);

    return 0;
}
