#include <stdio.h>

int main() {
    int quantidade, i;
    float preco, totalGasto = 0;

    for (i = 1; i <= 45; i++) {
        printf("Digite a quantidade do produto %d: ", i);
        scanf("%d", &quantidade);
        printf("Digite o pre�o do produto %d: ", i);
        scanf("%f", &preco);
        totalGasto += quantidade * preco;
    }
    printf("O total gasto pela empresa �: R$ %.2f\n", totalGasto);

    return 0;
}
