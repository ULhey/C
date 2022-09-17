// 4. Elabore um algoritmo que leia dois números inteiros e
// mostre o resultado da diferença do maior valor pelo
// menor;

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, diferenca;

    printf("Digite 1° número: ");
    scanf("%d", &num1);

    printf("Digite 2° número: ");
    scanf("%d", &num2);

    if (num1 > num2){
        diferenca = num1 - num2;
    }else{
        diferenca = num2 - num1;
    }

    printf("A diferença entre os números: %d", diferenca);
}