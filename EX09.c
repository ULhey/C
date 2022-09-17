// 9. Faça um algoritmo que leia um número e mostre uma
// mensagem indicando se este número é par ou ímpar e
// se é positivo ou negativo.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Informe um número: ");
    scanf("%d", &num);

    if (num % 2 == 0){
        printf("O número informado é par ");
    }else{
        printf("O número informado é ímpar ");
    }

    if (num < 0){
        printf("\nO número informado é negativo");
    }else{
        printf("\nO número informado é positivo");
    }
}