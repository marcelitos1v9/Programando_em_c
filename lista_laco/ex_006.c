#include <stdio.h>

int main() {
    int nf,vlr,i;
    vlr=0;
    printf("digite o ultimo numero da sequencia: ");
    scanf("%d", &nf);


    for (i = 1; i <= nf; i++) {
        vlr += vlr + 1;

    }
    printf("o valor final e:%d\n", vlr);

    return 0;
}
