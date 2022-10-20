/*
26. Leia um valor de área em metros quadrados m2 e apresente-o convertido em hectares. A 
fórmula de conversão é: H = M*0.0001, sendo M a área em metros quadrados e H a área em 
hectares
*/
#include <stdio.h>

int main(){
    float hec, m2;

    prinf("Digite uma área em metros quadrados: ");
    scanf("%f", &m2);

    hec = m2*0.0001;

    printf("%F hectares eh igual a %f metros quadrados", hec, m2;

    return 0;
}