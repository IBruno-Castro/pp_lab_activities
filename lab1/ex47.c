/*
47. Leia um número inteiro de 4 dígitos (de 1000 a 9999) e imprima 1 dígito por linha.
*/

#include <stdio.h>

int main(){
    int num, num1, num2, num3, num4;

    printf("Digite um número inteiro positivo de quatro dígitos: ");
    scanf("%d", &num);

    num1 = num/1000;
    num2 = (num/100)%10;
    num3 = (num/10)%10;
    num4 = num%10;

    printf(" %d\n %d\n %d\n %d", num1, num2, num3, num4);
    return 0;
}