#include <stdio.h>

int main() {
    char resposta;
    float largura, comprimento, areaTotal = 0;

    do {
        printf("Digite a largura do comodo: ");
        scanf("%f", &largura);
        printf("Digite o comprimento do comodo: ");
        scanf("%f", &comprimento);

        areaTotal += largura * comprimento;

        do {
            printf("Deseja adicionar outro comodo? (S/N): ");
            scanf(" %c", &resposta);
        } while (resposta != 'S' && resposta != 's' && resposta != 'N' && resposta != 'n');

    } while (resposta == 'S' || resposta == 's');

    printf("A area total da casa e: %.2f metros quadrados\n", areaTotal);

    return 0;
}
