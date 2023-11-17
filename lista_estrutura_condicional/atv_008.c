#include <stdio.h>
#include <string.h>

int main() {
    char nomeFuncionario[100], departamento;
    float salario;

    printf("Digite o nome do funcionario: ");
    scanf("%s", nomeFuncionario);

    printf("Digite o salario do funcionario: R$ ");
    scanf("%f", &salario);

    printf("Digite o departamento do funcionario (P para Producao, E para Engenharia): ");
    scanf(" %c", &departamento);

    if ((salario >= 1000.00 && salario <= 1500.00) && (departamento == 'P' || departamento == 'p' || departamento == 'E' || departamento == 'e')) {
        printf("Nome do funcionario: %s\n", nomeFuncionario);
        printf("Salario: R$ %.2f\n", salario);
    } else {
        printf("O funcionario nao atende aos criterios especificados.\n");
    }

    return 0;
}
