// 10. Escrever um algoritmo que lê um valor em reais e calcule
// qual o menor número possível de notas de 100, 50, 10,
// 5 e 1 em que o valor lido pode ser decomposto. Escrever
// o valor lido e a relação de notas necessárias.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int reais, n100, n50, n10, n5, n1;

    printf("Informe o valor R$: ");
    scanf("%d", &reais);

    n100 = reais / 100;
    reais = reais - (n100 * 100);
    n50 = reais / 50;
    reais = reais - (n100 * 50);
    n10 = reais / 10;
    reais = reais - (n100 * 10);
    n5 = reais / 5;
    reais = reais - (n100 * 5);
    n1 = reais / 1;
    reais = reais - (n100 * 1);

    printf("O valor decomposto é:  %d ", reais);
    printf("\nNotas de 100: %d", n100);
    printf("\nNotas de 50: %d", n50);
    printf("\nNotas de 10: %d", n10);
    printf("\nNotas de 5: %d", n5);
    printf("\nNotas de 1: %d", n1);
}
