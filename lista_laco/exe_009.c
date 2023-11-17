#include <stdio.h>

int main() {
    int numero, maior, menor;

    // Solicita ao usuário inserir o primeiro número
    printf("Digite o 1º número inteiro: ");
    scanf("%d", &numero);

    // Inicializa as variáveis maior e menor com o primeiro número inserido
    maior = numero;
    menor = numero;

    // Lê os próximos 19 números e encontra o maior e o menor valor
    for (int i = 2; i <= 20; ++i) {
        printf("Digite o %dº número inteiro: ", i);
        scanf("%d", &numero);

        // Verifica se o número é maior que o atual maior
        if (numero > maior) {
            maior = numero;
        }
        // Verifica se o número é menor que o atual menor
        if (numero < menor) {
            menor = numero;
        }
    }

    // Exibe o maior e o menor valor fornecido
    printf("O maior número é: %d\n", maior);
    printf("O menor número é: %d\n", menor);

    return 0;
}
