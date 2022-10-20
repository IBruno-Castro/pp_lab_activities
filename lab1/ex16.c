#include <stdio.h>

/*
16. Leia um valor de comprimento em polegadas e apresente-o convertido em centímetros. A 
fórmula de conversão é: C = P*2.54, sendo C o comprimento em centímetros e P o comprimento 
em polegadas.
*/

void main(){
    float cm, in;

    printf("Digite um comprimento em polegadas: ");
    scanf("%f", &in);

    cm = in*2.54;

    printf("%f polegadas sao %fcm", in, cm);
    
}