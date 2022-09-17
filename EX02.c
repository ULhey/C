// 2. Escrever um algoritmo que leia dois valores inteiros
// distintos e informe qual é o maior.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;

    printf("Informe 1° número : ");
    scanf("%d", &num1);

    printf("Informe 2° número: ");
    scanf("%d", &num2);

    if (num1 > num2){
        printf("O maior número é: %d", num1);
    }else{
        printf("O maior número é: %d", num2);
    }
}