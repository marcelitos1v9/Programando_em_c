#include <stdio.h>

int main() {
    int quantidade;
    float preco;
    float totalGasto = 0;
    for (int i = 1; i <= 5; ++i) {
        printf("Digite a quantidade do produto %d: ", i);
        scanf("%d", &quantidade);

        printf("Digite o preço do produto %d: ", i);
        scanf("%f", &preco);

        float custoProduto = quantidade * preco;

        totalGasto += custoProduto;
    }

    printf("Total gasto pela empresa: R$%.2f\n", totalGasto);

    return 0;
}
