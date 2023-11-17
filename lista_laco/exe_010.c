#include <stdio.h>

int main() {
    int quantidade;
    float preco, totalGasto = 0;
    char continuar;

    do {
        printf("Digite a quantidade do produto: ");
        scanf("%d", &quantidade);

        while (quantidade < 0) {
            printf("Quantidade invalida. Por favor, digite uma quantidade n�o negativa: ");
            scanf("%d", &quantidade);
        }
        printf("Digite o preco do produto: R$");
        scanf("%f", &preco);

        while (preco < 0) {
            printf("Pre�o invalido. Por favor, digite um pre�o n�o negativo: R$");
            scanf("%f", &preco);
        }

        totalGasto += quantidade * preco;
        printf("Deseja adicionar outro produto? (S/N): ");
        scanf(" %c", &continuar);
    } while (continuar == 'S' || continuar == 's');

    printf("Total gasto pela empresa: R$%.2f\n", totalGasto);

    return 0;
}
