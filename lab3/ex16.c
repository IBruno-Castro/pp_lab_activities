/*
16. Faça um programa que apresente um menu de opções para o cálculo das seguintes
operações entre dois números:
O programa deve possibilitar ao usuário a escolha da operação desejada, a exibição do resultado
e a volta ao menu de opções. O programa só termina quando for escolhida a opção de saída
(opção 5).
*/

#include <stdio.h>

int main(){
    int op, num1, num2;

    do
    {
        do
        {
            printf("Escolha:\nAdicao-1)\nSubtracao-2\nMultiplicacao-3\nDivisao-4\nSaida-5\nOpcao: ");
            scanf("%d", &op);

            if (op < 1 || op > 5){
                printf("Opcao invalida\n");
            } else if (op >= 1 && op <= 4){
                printf("Digite dois numeros para a operacao: ");
                scanf("%d %d", &num1, &num2);
            }
        } while (op < 1 || op > 5);
        
        switch (op)
        {
        case 1:
            printf("Resultado = %d\n", num1 + num2);
            break;
        case 2:
            printf("Resultado = %d\n", num1 - num2);
            break;    
        case 3:
            printf("Resultado = %d\n", num1 * num2);
            break;
        case 4:
            printf("Resultado = %.2f\n", (float)(num1) / num2);
            break;
        }

    } while (op != 5);
    

    return 0;
}