#include <stdio.h>

int main() {
    int N, H = 0;

    printf("Digite um valor para N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; ++i) {
        printf("%d \n", H += i);
    }

    printf("O valor de H e: %d\n", H);

    return 0;
}
