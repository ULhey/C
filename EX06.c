// 6. Altere o algoritmo anterior para que seja lido do teclado,
// além das notas, o sexo do aluno (M ou F). Se for
// masculino, o resultado deverá ser precedido de “Caro
// aluno, seu resultado é: “. Se for feminino, o resultado
// deverá ser precedido de “Cara aluna, seu resultado é:

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo;
    float num1, num2, num3, num4, media;

    printf("Informe seu sexo (M ou F): ");
    scanf("%s", &sexo);

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
        if (sexo == "F"){
            printf("Cara aluna, seu resultado é: Aprovada");
        }else{
            printf("Caro aluno, seu resultado é: Aprovado");
        }
    }else if (sexo == "F"){
        printf("Cara aluna, seu resultado é: Reprovada");
    }else{
        printf("Caro aluno, seu resultado é: Reprovado");
    }
}