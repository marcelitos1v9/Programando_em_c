#include <stdio.h>

int main() {
    int numero, maior, menor;
    char continuar;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    maior = numero;
    menor = numero;

    do {
        printf("Digite um n�mero inteiro: ");
        scanf("%d", &numero);
        if (numero > maior) {
            maior = numero;
        }
        if (numero < menor) {
            menor = numero;
        }

        do {
            printf("Deseja continuar? (S/N): ");
            scanf(" %c", &continuar);
        } while (continuar != 'S' && continuar != 's' && continuar != 'N' && continuar != 'n');

    } while (continuar == 'S' || continuar == 's');

    printf("O maior n�mero �: %d\n", maior);
    printf("O menor n�mero �: %d\n", menor);

    return 0;
}
