#include <stdio.h>

int main() {
    float salario, salarioNovo;

    printf("Digite o salario do funcionario: R$ ");
    scanf("%f", &salario);

    if (salario < 500) {
      salarioNovo = salario * 1.15;
    } else if (salario >= 500 && salario <= 1000) {
        salarioNovo = salario * 1.10;
    } else {
        salarioNovo = salario * 1.05;
    }

    printf("O novo salario do funcionario e: R$ %.2f\n", salarioNovo);

    return 0;
}
