/*
18. Faça um programa que mostre ao usuário um menu com 4 opções de operações
matemáticas (as básicas, por exemplo). O usuário escolhe uma das opções e o seu programa
então pede dois valores numéricos e realiza a operação, mostrando o resultado e saindo.
*/

#include <stdio.h>

int main(){
    char operacao;
    float num1, num2;

    printf("Qual operacao voce deseja realizar?(+, -, *, /)");
    scanf("%c", &operacao);

    switch (operacao)
    {
    case '+':
        printf("Digite dois numeros: ");
        scanf("%f %f", &num1, &num2);

        printf("= %f", num1 + num2);
        break;
    case '-':
        printf("Digite dois numeros: ");
        scanf("%f %f", &num1, &num2);

        printf("= %f", num1 - num2);
        break;
    case '*':
        printf("Digite dois numeros: ");
        scanf("%f %f", &num1, &num2);

        printf("= %f", num1 * num2);
        break;
    case '/':
        printf("Digite dois numeros: ");
        scanf("%f %f", &num1, &num2);

        printf("= %f", num1 / num2);
        break;        
    default:
        printf("Operacao invalida");
        break;
    }

    return 0;
}