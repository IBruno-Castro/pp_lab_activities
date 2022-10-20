/*
24. Leia um valor de área em metros quadrados m2 e apresente-o convertido em acres. A 
fórmula de conversão é: A = M*0.000247, sendo M a área em metros quadrados e A a área em 
acres.
*/

#include <stdio.h>

int main(){
    float m2, ac;

    printf("Digite quantos metros quadrados: ");
    scanf("%f", &m2);

    ac = m2*0.000247;

    printf("%f acres eh igual a %f metros quadrados", ac, m2);

    return 0;
}