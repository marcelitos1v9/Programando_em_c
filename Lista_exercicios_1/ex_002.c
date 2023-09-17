#include <stdio.h>

int main() {
    // Declaração das variáveis
    float comprimento, largura, area, perimetro;

    // Solicita ao usuário que informe o comprimento da sala
    printf("Digite o comprimento da sala (em metros): ");
    scanf("%f", &comprimento);

    // Solicita ao usuário que informe a largura da sala
    printf("Digite a largura da sala (em metros): ");
    scanf("%f", &largura);

    // Calcula a área da sala
    area = comprimento * largura;

    // Calcula o perímetro da sala
    perimetro = 2 * (comprimento + largura);

    // Apresenta a área e o perímetro calculados
    printf("A area da sala e: %.2f metros quadrados\n", area);
    printf("O perimetro da sala e: %.2f metros\n", perimetro);

    return 0;
}
