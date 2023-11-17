#include <stdio.h>

int main() {
    float preco;

    printf("Digite o preco do produto: R$ ");
    scanf("%f", &preco);

    if (preco >= 50.00 && preco <= 100.00) {
        printf("Em promocao\n");
    } else {
        printf("Preco Normal\n");
    }

    return 0;
}
