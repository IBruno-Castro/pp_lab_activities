#include <stdio.h>

/*
7. Leia um valor de comprimento em centímetros e apresente-o convertido em polegadas. A 
fórmula de conversão é: P = C/2.54, sendo C o comprimento em centímetros e P o comprimento 
em polegadas
*/

void main(){
    float cm, in;

    printf("Digita um comprimento em cm: ");
    scanf("%f", &cm);

    in = cm/2.54;

    printf("%fcm sao %f polegadas", cm, in);
    
}