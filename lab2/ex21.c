/*
21. Escreva o menu de opções abaixo. Leia a opção do usuário e execute a operação escolhida.
Escreva uma mensagem de erro se a opção for inválida.
*/

#include <stdio.h>

int main(){
    char option;
    float num1, num2;

    printf("Escolha a opcao:\n1- Soma de 2 numeros.\n2- Diferenca entre 2 numeros (maior pelo menor).\n3- Produto entre 2 numeros.\n4- Divisao entre 2 numeros (o denominador não pode ser zero).\nOpcao: ");
    scanf("%c", &option);

    switch (option)
    {
    case '2':
        printf("Digite os dois numeros: ");
        scanf("%f %f", &num1, &num2);

        num1 > num2 ? printf("resultado = %f", num1 - num2) : printf("resultado = %f", num2 - num1);
        break;
    case '1':
        printf("Digite os dois numeros: ");
        scanf("%f %f", &num1, &num2);

        printf("resultado = %f", num1 + num2);
        break;
    case '3':
        printf("Digite os dois numeros: ");
        scanf("%f %f", &num1, &num2);

        printf("resultado = %f", num1 * num2);
        break;
    case '4':
        printf("Digite os dois numeros: ");
        scanf("%f %f", &num1, &num2);

        if (num2)
        {
            printf("resultado = %f", num1/num2);
        } else {
            printf("Denominador invalidor");
        }
        break;
    default:
        printf("Opcao invalida");
        break;
    }
    return 0;
}