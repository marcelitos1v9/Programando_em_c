#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaração de variáveis
    float altura, peso_ideal;
    char s, nome[10];

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Qual sua altura?: ");
    scanf("%f", &altura);

    printf("Qual seu sexo?: use 'F' ou 'M' ");
    scanf(" %c", &s);

    if (s == 'M' || s == 'm') {
        peso_ideal = (72.7 * altura) - 58;
        printf("%s, seu peso ideal e de: %.2f\n", nome, peso_ideal);
    } else if (s == 'F' || s == 'f') {
        peso_ideal = (62.1 * altura) - 44.7;
        printf("%s, seu peso ideal e de: %.2f\n", nome, peso_ideal);
    } else {
        printf("Sexo inválido.\n");
    }

    return 0;
}
