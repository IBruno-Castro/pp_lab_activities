/*
30. Faça um programa que receba três números e mostre-os em ordem crescente.
*/

#include <stdio.h>

int main(){
    float num1, num2, num3;

    printf("Digite tres numeros: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    if(num1 < num2 && num1 < num3){
        printf("%.2f\n", num1);

        num2 < num3 ? printf("%.2f\n%.2f", num2, num3) : printf("%.2f\n%.2f", num3, num2);
    }
    if(num2 < num1 && num2 < num3){
        printf("%.2f\n", num2);

        num1 < num3 ? printf("%.2f\n%.2f", num1, num3) : printf("%.2f\n%.2f", num3, num1);
    }
    if (num3 < num1 && num3 < num2)
    {
        printf("%.2f\n", num3);

        num1 < num2 ? printf("%.2f\n%.2f", num1, num2) : printf("%.2f\n %.2f", num2, num1);
    }
    

    return 0;
}