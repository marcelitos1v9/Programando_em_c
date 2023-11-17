#include <stdio.h>

int main() {
    float CAIXA, QTD, PR, totalCompra = 0;
    char continuar = 'S';

    printf("Digite a quantidade de dinheiro no caixa: R$");
    scanf("%f", &CAIXA);

    while (continuar == 'S' || continuar == 's') {
        printf("Digite a quantidade do produto: ");
        scanf("%f", &QTD);
        if (QTD < 0) {
            break;
        }
        printf("Digite o preço do produto: R$");
        scanf("%f", &PR);

        totalCompra += QTD * PR;

        printf("Deseja adicionar mais produtos à compra? (S/N): ");
        scanf(" %c", &continuar);
    }

    float limiteCaixa = 0.8 * CAIXA;

    if (totalCompra > limiteCaixa) {
        totalCompra *= 1.1; // Aplica juros de 10%
        printf("Forma de pagamento: A prazo em 3x\n");
    } else {
        totalCompra *= 0.95; // Aplica desconto de 5%
        printf("Forma de pagamento: A vista com 5%% de desconto\n");
    }

    printf("Valor a ser pago: R$%.2f\n", totalCompra);

    return 0;
}
