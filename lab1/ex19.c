/*
19. Leia um valor de volume em litros e apresente-o convertido em metros cúbicos m3. A 
fórmula de conversão é: M = L /1000, sendo L o volume em litros e M o volume em metros 
cúbicos.
*/

#include <stdio.h>

int main(){
    float l, m3;

    printf("Digite um volume em litros: ");
    scanf("%f", &l);

    m3 = l/1000;

    printf("%fmetros cubicos eh igual a %fLitros", m3, l);

    return 0;
}