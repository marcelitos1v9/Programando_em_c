#include <stdio.h>

int main() {
    float HT, VH, salarioBruto, salarioLiquido, inss, impostoRenda, aliquota, valorDeduzir;

    printf("Digite as horas trabalhadas: ");
    scanf("%f", &HT);
    printf("Digite o valor da hora trabalhada: ");
    scanf("%f", &VH);

    salarioBruto = HT * VH;

    if (salarioBruto <= 1257.12) {
        inss = 0.11 * salarioBruto;
    } else if (salarioBruto <= 2512.08) {
        inss = 0.11 * salarioBruto;
    } else {
        inss = 0.11 * 2512.08;
    }

    salarioLiquido = salarioBruto - inss;

    if (salarioLiquido <= 1257.12) {
        aliquota = 0;
        valorDeduzir = 0;
    } else if (salarioLiquido <= 2512.08) {
        aliquota = 0.15;
        valorDeduzir = 188.57;
    } else {
        aliquota = 0.275;
        valorDeduzir = 502.58;
    }

    impostoRenda = aliquota * (salarioLiquido - inss) - valorDeduzir;
    salarioLiquido -= impostoRenda;

    printf("Salario Liquido: R$ %.2f\n", salarioLiquido);

    return 0;
}
