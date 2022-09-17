// 11. Num determinado Estado, para transferências de
// veículos, o DETRAN cobra uma taxa de 1% para carros
// fabricados antes de 1990 e uma taxa de 1.5% para os
// fabricados de 1990 em diante, taxa está incidindo sobre
// o valor de tabela do carro. O algoritmo abaixo lê o ano
// e o preço do carro e a seguir calcula e imprime imposto
// a ser pago.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor, taxa;
    int ano;

    printf("Digite o valor de tabela do carro: ");
    scanf("%f", &valor);
    printf("Digite o ano do carro: ");
    scanf("%d", &ano);

    if (ano >= 1990){
        taxa = valor * 0.015;
    }else{
        taxa = valor * 0.01;
    }

    printf("O valor do carro: %f do ano: %d", valor, ano);
    printf("\nImposto a ser pago: %f", taxa);
}