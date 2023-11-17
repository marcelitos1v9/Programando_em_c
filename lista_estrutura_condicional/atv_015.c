#include <stdio.h>

int main() {
    float HT, VH, salarioBruto, salarioLiquido, inss, impostoRenda, aliquota, valorDeduzir;

    printf("Digite as horas trabalhadas: ");
    scanf("%f", &HT);
    printf("Digite o valor da hora trabalhada: ");
    scanf("%f", &VH);

    salarioBruto = HT * VH;

    if (salarioBruto <= 800.45) {
        aliquota = 0.0765;
    } else if (salarioBruto <= 900.00) {
        aliquota = 0.0865;
    } else if (salarioBruto <= 1334.07) {
        aliquota = 0.09;
    } else if (salarioBruto <= 2668.15) {
        aliquota = 0.11;
    } else {
        aliquota = 0;
        inss = 293.50;
    }

    inss = salarioBruto * aliquota;
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
