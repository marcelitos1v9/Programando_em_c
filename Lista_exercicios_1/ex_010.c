#include <stdio.h>

int main() {
    int A, B, temp;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    // Troca os valores entre as variáveis A e B usando uma variável temporária (temp)
    temp = A;
    A = B;
    B = temp;

    // Exibe os valores finais de A e B após a troca
    printf("Valores trocados: A = %d, B = %d\n", A, B);

    return 0;
}

