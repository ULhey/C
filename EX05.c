// 5. Elabore um algoritmo a ler 4 notas de um aluno (de 1 a
// 10). Após calcular a média das notas, apresentar a
// mensagem “Aprovada” se o aluno tiver obtido média
// maior ou igual a 6, caso contrário, apresentar
// “Reprovado

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2, num3, num4, media;

    printf("Informe a 1° nota do Aluno(a) de 1 a 10: ");
    scanf("%f", &num1);
    printf("Informe a 2° nota do Aluno(a) de 1 a 10: ");
    scanf("%f", &num2);
    printf("Informe a 3° nota do Aluno(a) de 1 a 10: ");
    scanf("%f", &num3);
    printf("Informe a 4° nota do Aluno(a) de 1 a 10: ");
    scanf("%f", &num4);

    media = (num1 + num2 + num3 + num4) / 4;

    if (media >= 6){
        printf("Aprovado(a)");
    }else{
        printf("Reprovado(a)");
    }
}