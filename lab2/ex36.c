/*
36. Escreva um programa que, dado o valor da venda, imprima a comissão que deverá ser paga
ao vendedor.
*/

#include <stdio.h>

int main(){
    float venda, comissao;

    printf("Digite o valor da venda: ");
    scanf("%f", &venda);

    if (venda > 0){
        if (venda < 20000){
            comissao = 400 + (venda*0.14);
            printf("Valor da comissao: %.2f", comissao);
        } else if (venda < 40000){
            comissao = 500 + (venda*0.14);
            printf("Valor da comissao: %.2f", comissao);
        } else if (venda < 60000){
            comissao = 550 + (venda*0.14);
            printf("Valor da comissao: %.2f", comissao);
        } else if (venda < 80000){
            comissao = 600 + (venda*0.14);
            printf("Valor da comissao: %.2f", comissao);
        } else if (venda < 100000){
            comissao = 650 + (venda*0.14);
            printf("Valor da comissao: %.2f", comissao);
        } else {
            comissao = 700 + (venda*0.16);
            printf("Valor da comissao: %.2f", comissao);
        }
    } else {
        printf("Nao valido como uma venda");
    }
    
    return 0;
}