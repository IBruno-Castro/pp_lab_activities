/*
46. Faça um programa que leia um número inteiro positivo de três dígitos (de 100 a 999). Gere 
outro número formado pelos dígitos invertidos do número lido.
*/

#include <stdio.h>

int main(){
    int num, num1, num2, num3, numFinal;

    printf("Digite um número inteiro positivo de três dígitos: ");
    scanf("%d", &num);

    num1 = num/100;
    
    num2 = ((num/10)%10)*10;

    num3 = (num%10)*100;

    numFinal = num3+num2+num1;
    printf("%d", numFinal);

    return 0;
}