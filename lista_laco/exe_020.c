#include <stdio.h>

int main() {
    char resposta;
    float HT, VH, salarioBruto, salarioLiquido, inss, impostoRenda, deducaoIR;

    do {
        printf("Digite as horas trabalhadas: ");
        scanf("%f", &HT);
        printf("Digite o valor da hora trabalhada: ");
        scanf("%f", &VH);
        salarioBruto = HT * VH;

        inss = 0.11 * salarioBruto;

        salarioLiquido = salarioBruto - inss;

        if (salarioLiquido <= 900) {
            impostoRenda = 0;
        } else if (salarioLiquido <= 1800) {
            impostoRenda = 0.15 * salarioLiquido - 135;
        } else {
            impostoRenda = 0.275 * salarioLiquido - 360;
        }

        salarioLiquido -= impostoRenda;

        printf("Salário Líquido: %.2f\n", salarioLiquido);

        do {
            printf("Deseja calcular o salário de outro funcionário? (S/N): ");
            scanf(" %c", &resposta);
        } while (resposta != 'S' && resposta != 's' && resposta != 'N' && resposta != 'n');

    } while (resposta == 'S' || resposta == 's');

    return 0;
}
