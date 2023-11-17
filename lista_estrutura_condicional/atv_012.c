#include <stdio.h>

int main() {
    float temperatura;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &temperatura);

    if (temperatura < 100) {
        printf("A temperatura esta muito baixa.\n");
    } else if (temperatura >= 100 && temperatura <= 200) {
        printf("A temperatura esta baixa.\n");
    } else if (temperatura > 200 && temperatura < 500) {
        printf("A temperatura esta normal.\n");
    } else {
        printf("A temperatura esta muito alta.\n");
    }

    return 0;
}
