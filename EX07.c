// 7. A escola “JMT” faz o pagamento de seus professores por
// hora/aula. Faça um algoritmo que calcule e exiba o
// salário de um professor. Sabe-se que o valor da
// hora/aula segue a tabela abaixo:
// Professor Nível 1 R$ 12,00 por hora/aula
// Professor Nível 2 R$ 20,31 por hora/aula
// Professor Nível 3 R$ 37,81,00 por hora/aula

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nivel;
    float horas, salario;

    printf("Informe seu horário de aula: ");
    scanf("%f", &horas);
    printf("Informe seu nivel de Professor: ");
    scanf("%d", &nivel);

    switch (nivel){
    case 1:
        salario = horas * 12.00;
        printf("O salário atualmente é: %f", salario);
        break;
    case 2:
        salario = horas * 20.31;
        printf("O salário atualmente é: %f", salario);
        break;
    case 3:
        salario = horas * 37.81;
        printf("O salário atualmente é: %f", salario);
        break;
    default:
        printf("Nível inválido");
        break;
    }
}