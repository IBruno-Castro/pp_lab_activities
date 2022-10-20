#include <stdio.h>

/*
14. Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de conversão é: 
R = G*pi/180, sendo G o ângulo em graus e R em radianos e  = 3.141592
*/

void main(){
    float rad, ang, pi;
    pi = 3.141592;

    printf("Digita um angulo: ");
    scanf("%f", &ang);
    
    rad = ang*pi/180;

    printf("%f graus sao %f radianos", ang, rad);
    
}