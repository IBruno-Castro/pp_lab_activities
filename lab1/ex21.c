/*
21. Leia um valor de massa em libras e apresente-o convertido em quilogramas. A fórmula de 
conversão é: K = L*0.45, sendo K a massa em quilogramas e L a massa em libras.
*/

#include <stdio.h>

int main(){
    float kg, lb;

    printf("Digite quantas libras: ");
    scanf("%f", &lb);

    kg = lb*0.45;

    printf("%f libras eh igual a %f kilos", lb, kg);

    return 0;
}