#include <stdio.h>

int main() {
    char codigoLivro;

    printf("Digite o codigo do livro (A ou B): ");
    scanf(" %c", &codigoLivro);

    if (codigoLivro == 'A' || codigoLivro == 'a') {
        printf("Categoria do livro: Ficcao\n");
    } else if (codigoLivro == 'B' || codigoLivro == 'b') {
        printf("Categoria do livro: Nao-Ficcao\n");
    } else {
        printf("Codigo de livro invalido\n");
    }

    return 0;
}
