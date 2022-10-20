#include <stdio.h>

/*
41. Faça um programa que leia o valor da hora de trabalho (em reais) e número de horas 
trabalhadas no mês. Imprima o valor a ser pago ao funcionário, adicionando 10% sobre o valor 
calculado
*/

int main(){
    float valor, horas, pay;

    printf("Digite o valor da hora de trabalho em reais e o número de horas trabalhadas no mês: ");
    scanf("%f %f", &valor, &horas);

    pay = valor*horas;

    printf("Valor a ser pago = %fRS", pay*1.1);

    return 0;
}