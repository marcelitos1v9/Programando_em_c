#include <stdio.h>

int main() {
    int numero, maior, menor;

    // Solicita ao usu�rio inserir o primeiro n�mero
    printf("Digite o 1� n�mero inteiro: ");
    scanf("%d", &numero);

    // Inicializa as vari�veis maior e menor com o primeiro n�mero inserido
    maior = numero;
    menor = numero;

    // L� os pr�ximos 19 n�meros e encontra o maior e o menor valor
    for (int i = 2; i <= 20; ++i) {
        printf("Digite o %d� n�mero inteiro: ", i);
        scanf("%d", &numero);

        // Verifica se o n�mero � maior que o atual maior
        if (numero > maior) {
            maior = numero;
        }
        // Verifica se o n�mero � menor que o atual menor
        if (numero < menor) {
            menor = numero;
        }
    }

    // Exibe o maior e o menor valor fornecido
    printf("O maior n�mero �: %d\n", maior);
    printf("O menor n�mero �: %d\n", menor);

    return 0;
}
