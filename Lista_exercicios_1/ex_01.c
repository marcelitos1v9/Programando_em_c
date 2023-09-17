#include <stdio.h>

int main() {
    // Declaração das variáveis
    float comprimento, largura, area;

    // Solicita ao usuário que informe o comprimento da sala
    printf("Digite o comprimento da sala (em metros): ");
    scanf("%f", &comprimento);

    // Solicita ao usuário que informe a largura da sala
    printf("Digite a largura da sala (em metros): ");
    scanf("%f", &largura);

    // Calcula a área da sala
    area = comprimento * largura;

    // Apresenta a área calculada
    printf("A área da sala é: %.2f metros quadrados\n", area);

    return 0;
}
