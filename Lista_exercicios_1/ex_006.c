
#include <stdio.h>

int main() {
    int AA, AN, IDADE;

    printf("Digite o ano atual: ");
    scanf("%d", &AA);
    //e se eu usasse a data atual do computador?

    printf("Digite o ano de nascimento da pessoa: ");
    scanf("%d", &AN);

    IDADE = AA - AN;

    printf("A idade da pessoa e: %d anos.\n", IDADE);

    return 0;
}
