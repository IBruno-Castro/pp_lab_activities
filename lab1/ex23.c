/*
23. Leia um valor de comprimento em metros e apresente-o convertido em jardas. A fórmula de 
conversão é: J = M/0.91, sendo J o comprimento em jardas e M o comprimento em metros
*/

#include <stdio.h>

int main(){
    float m, j;

    printf("Digite quantos metros: ");
    scanf("%f", &m);

    j = m/0.91;

    printf("%f jardas eh igual a %f metros", m, j;

    return 0;
}