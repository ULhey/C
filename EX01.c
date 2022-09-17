// 1. Escrever um algoritmo que leia o nome e as três notas
// obtidas por um aluno durante o semestre. Calcular a sua
// média (aritmética), informar o nome e sua menção
// aprovado (media >= 7), Reprovado (media <= 4) e
// Recuperação (media entre 4.1 a 6.9).

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome;
    float n1, n2, n3, media;

    printf("Digite o nome do aluno: ");
    scanf("%s", &nome);

    printf("Informe a primeira nota do aluno: ");
    scanf("%f", &n1);

    printf("Informe a segunda nota do aluno: ");
    scanf("%f", &n2);

    printf("Informe a terceira nota do aluno: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;

    if (media >= 7){
        printf("Aluno(a) Aprovado");
    }else if (media <= 4){
        printf("Aluno(a) Reprovado(a)");
    }else if (media <= 4.1){
        printf("Aluno(a) Recuperação");
    }else{
        printf("Aluno(a) Recuperação");
    }
}
