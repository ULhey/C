// 8. Elabore um algoritmo que leia 5 valores inteiros e
// apresente na tela o maior e o menor deles.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3, num4, num5, maior, menor;

    printf("Informe o 1° número: ");
    scanf("%d", &num1);
    printf("Informe o 2° número: ");
    scanf("%d", &num2);
    printf("Informe o 3° número: ");
    scanf("%d", &num3);
    printf("Informe o 4° número: ");
    scanf("%d", &num4);
    printf("Informe o 5° número: ");
    scanf("%d", &num5);

    maior = num1;
    menor = num1;

    if (num1 > maior){
        maior = num1;
    }
    if (num2 > maior){
        maior = num2;
    }
    if (num3 > maior){
        maior = num3;
    }
    if (num4 > maior){
        maior = num4;
    }
    if (num5 > maior){
        maior = num5;
    }

    if (num1 < menor){
        menor = num1;
    }
    if (num2 < menor){
        menor = num2;
    }
    if (num3 < menor){
        menor = num3;
    }
    if (num4 < menor){
        menor = num4;
    }
    if (num5 < menor){
        menor = num5;
    }

    printf("O maior foi: %d e o menor foi: %d ", maior, menor);
}