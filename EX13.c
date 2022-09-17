// 13. Um banco concederá um crédito especial aos seus
// clientes, variável com o saldo médio no último ano. Faça
// um algoritmo que leia o saldo médio de um cliente e
// calcule o valor do crédito de acordo com a tabela abaixo.
// Mostre uma mensagem informando o saldo médio e o
// valor do crédito.

// Saldo médio Percentual
// de 0 a 200 nenhum crédito
// de 201 a 400 20% do valor do saldo médio
// de 401 a 600 30% do valor do saldo médio
// acima de 601 40% do valor do saldo médio

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Msalario, credito;

    printf("Digite o saldo médio do clinte: ");
    scanf("%f", &Msalario);

    if (Msalario <= 200){
        credito = Msalario * 0.0;
    }else if ((Msalario > 200) && (Msalario <= 400)){
        credito = Msalario * 0.2;
    }else if ((Msalario > 400) && (Msalario <= 600)){
        credito = Msalario * 0.3;
    }else if (Msalario > 600){
        credito = Msalario * 0.4;
    }

    printf("Saldo médio: %f \nCredito disponivel: %f", Msalario, credito);
}