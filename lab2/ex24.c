/*
24. Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui
uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS 8%). Faça um
programa em que o usuário entre com o valor e o estado destino do produto e o programa
retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. Se o
estado digitado não for válido, mostrar uma mensagem de erro.
*/

#include <stdio.h>

int main(){
    float valor;
    char estado;
    
    printf("Selecione um estado:\n1.MG\n2.SP\n3.RJ\n4.MS\nOpcao: ");
    scanf("%c", &estado);

    printf("Entre com o valor do produto: ");
    scanf("%f", &valor);

    switch (estado)
    {
    case '1':
        valor = valor*1.07;
        printf("Valor final = %f", valor);
        break;
    case '2':
        valor = valor*1.12;
        printf("Valor final = %f", valor);
        break;
    case '3':
        valor = valor*1.15;
        printf("Valor final = %f", valor);
        break;
    case '4':
        valor = valor*1.08;
        printf("Valor final = %f", valor);
        break;
    default:
        printf("Essa opcao nao existe");
        break;
    }


    return 0;
}