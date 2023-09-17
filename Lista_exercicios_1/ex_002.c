#include <stdio.h>

int main() {
    // Declara��o das vari�veis
    float comprimento, largura, area, perimetro;

    // Solicita ao usu�rio que informe o comprimento da sala
    printf("Digite o comprimento da sala (em metros): ");
    scanf("%f", &comprimento);

    // Solicita ao usu�rio que informe a largura da sala
    printf("Digite a largura da sala (em metros): ");
    scanf("%f", &largura);

    // Calcula a �rea da sala
    area = comprimento * largura;

    // Calcula o per�metro da sala
    perimetro = 2 * (comprimento + largura);

    // Apresenta a �rea e o per�metro calculados
    printf("A area da sala e: %.2f metros quadrados\n", area);
    printf("O perimetro da sala e: %.2f metros\n", perimetro);

    return 0;
}
