/*
27. Leia um valor de área em hectares e apresente-o convertido em metros quadrados m2. 
A fórmula de conversão é: M = H*10000, sendo M a área em metros quadrados e H a área em 
hectares.
*/
#include <stdio.h>

int main(){
    float hec, m2;

    prinf("Digite uma área em hectares: ");
    scanf("%f", &hec);

    m2 = hec*10000;

    printf("%F metros quadrados eh igual a %f hectares", m2, hec);

    return 0;
}