/*
10. Ler o nome e o valor de uma determinada mercadoria de uma loja. Sabendo que o desconto
para pagamento à vista é de 10% sobre o valor total, calcular o valor a ser pago à vista. Escrever
o nome da mercadoria, o valor total, o valor do desconto e o valor a ser pago à vista.
*/

#include <stdio.h>
#include <string.h>

int main(){
    char nome[20];
    float valor;
    float desconto, valorVista;

    printf("Nome da mercadoria: ");
    fgets(nome, 20, stdin);
    printf("Valor da mercadoria: ");
    scanf("%f", &valor);

    desconto = valor*0.1;
    valorVista = valor*0.9;

    fputs(nome, stdout);
    printf("Valor: RS%.2f\nDesconto: %.2f\nValor a vista: %.2f", valor, desconto, valorVista);

    return 0;
}