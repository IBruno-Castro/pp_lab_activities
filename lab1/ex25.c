/*
25. Leia um valor de área em acres e apresente-o convertido em metros quadrados m2. 
A fórmula de conversão é: M = A*4048.58, sendo M a área em metros quadrados e A a área em acres.
*/

#include <stdio.h>

int main(){
    float ac, m2;

    prinf("Digite uma área em acres: ");
    scanf("%f", &ac);

    m2 = ac*4048.58;

    printf("%F metros quadrados eh igual a %f acres", m2, ac);

    return 0;
}