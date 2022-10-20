#include <stdio.h>

/*
18. Leia um valor de volume em metros cúbicos m3 e apresente-o convertido em litros. A 
fórmula de conversão é: L = 1000*M, sendo L o volume em litros e M o volume em metros 
cúbicos.
*/

void main(){
    float l, m3;

    printf("Digita um volume em metros cubicos: ");
    scanf("%f", &m3);

    l = 1000*m3;

    printf("%f metros cubicos sao %fL", m3, l);
    
}