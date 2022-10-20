#include <stdio.h>

/*
40. Uma empresa contrata um encanador a R$30,00 por dia. Faça um programa que solicite o 
número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga, 
sabendo-se que são descontados 8% para imposto de renda.

*/

int main(){
    float dias, pay;

    printf("Digita quantos dias o encanador trabalhou: ");
    scanf("%f", &dias);

    pay = dias*30;

    printf("pagamento a ser feito = %f", pay - (pay*0.08));

    return 0;
}