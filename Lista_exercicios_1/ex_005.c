#include <stdio.h>

int main() {
    float PRECO, PRECOF, DESC, PORCENTAGEM;

    printf("Digite o preco original do produto : ");
    scanf("%f", &PRECO);

    printf("Digite o preco cobrado apos o desconto : ");
    scanf("%f", &PRECOF);

    if (PRECOF >= PRECO) {
        printf("O preco apos o desconto nao pode ser maior ou igual ao preco original.\n");
    } else {
        DESC = PRECO - PRECOF;
        PORCENTAGEM = (DESC / PRECO) * 100;

        printf("O desconto foi de %.2f reais.\n", DESC);
        printf("A porcentagem de desconto foi de %.2f%%.\n", PORCENTAGEM);
    }

    return 0;
}
