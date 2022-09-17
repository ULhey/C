// 3. Elabore um algoritmo que leia do teclado o sexo de uma
// pessoa. Se o sexo digitado for M ou F, escrever na tela
// “Sexo válido!”. Caso contrário, informar “Sexo inválido!”;

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo;

    printf("Informe o sexo : ");
    scanf("%s", &sexo);

    if (sexo == "M"){
        printf("Sexo válido!");
    }else if (sexo == "F"){
        printf("Sexo inválido!");
    }else{
        printf("Sexo inválido!");
    }
}