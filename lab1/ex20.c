/*
20. Leia um valor de massa em quilogramas e apresente-o convertido em libras. A fórmula de 
conversão é: L = K/0.45, sendo K a massa em quilogramas e L a massa em libras
*/

#include <stdio.h>

int main(){
    float kg, lb;

    printf("Digite quantos kg: ");
    scanf("%f", &kg);

    lb = kg/0.45;

    printf("%f kilos eh igual a %f libras", lb, kg);

    return 0;
}