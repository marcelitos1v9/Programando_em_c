#include <stdio.h>

int main() {
    int A, B, resultado;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    if (A == B) {
        resultado = A + B;
        printf("A soma de A e B é: %d\n", resultado);
    } else {
        if (A > B) {
            resultado = A - B;
        } else {
            resultado = B - A;
        }
        printf("A diferença entre A e B e: %d\n", resultado);
    }

    return 0;
}
