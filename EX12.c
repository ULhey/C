// 12. Uma empresa concederá um aumento de salário aos
// seus funcionários, variável de acordo com o cargo,
// conforme a tabela abaixo. Faça um algoritmo que leia o
// salário e o cargo de um funcionário e calcule o novo
// salário. Se o cargo do funcionário não estiver na tabela,
// ele deverá, então, receber 40% de aumento. Mostre o
// salário antigo, o novo salário e a diferença.
//             Código  Cargo       Percentual
//             1001    Gerente        10%
//             1002    Engenheiro     20%
//             1003    Técnico        30%

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, Nsalario, Dsalario;
    int codigo;

    printf("Informe o codigo: ");
    scanf("%d", &codigo);
    printf("Informe seu salario: ");
    scanf("%f", &salario);

    switch (codigo){
    case 1001:
        Nsalario = salario + ((salario + 10) / 100);
        printf("O seu cargo é Gerente ");
        printf("\nSalario ATUAL: %f \nSalario NOVO: %f", salario, Nsalario);
        Dsalario = Nsalario - salario;
        printf("\nA diferença foi de: %f", Dsalario);
        break;
    case 1002:
        Nsalario = salario + ((salario + 20) / 100);
        printf("O seu cargo é Engenheiro ");
        printf("\nSalario ATUAL: %f \nSalario NOVO: %f", salario, Nsalario);
        Dsalario = Nsalario - salario;
        printf("\nA diferença foi de: %f", Dsalario);
        break;
    case 1003:
        Nsalario = salario + ((salario + 30) / 100);
        printf("O seu cargo é Técnico ");
        printf("\nSalario ATUAL: %f \nSalario NOVO: %f", salario, Nsalario);
        Dsalario = Nsalario - salario;
        printf("\nA diferença foi de: %f", Dsalario);
        break;
    default:
        Nsalario = salario + ((salario + 50) / 100);
        printf("O seu cargo é Outro: ");
        printf("\nSalario ATUAL: %f \nSalario NOVO: %f", salario, Nsalario);
        Dsalario = Nsalario - salario;
        printf("\nA diferença foi de: %f", Dsalario);
        break;
    }
}
