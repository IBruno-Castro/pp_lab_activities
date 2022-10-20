#include <stdio.h>

/*
15. Leia um ângulo em radianos e apresente-o convertido em graus. A fórmula de conversão é: 
G = R*180/pi, sendo G o ângulo em graus e R em radianos e  = 3.141592.

*/

void main(){
    float rad, ang, pi;
    pi = 3.141592;

    printf("Digita uma medida em radianos: ");
    scanf("%f", &rad);
    
    ang = R*180/pi;

    printf("%f radianos sao %f graus", rad, ang);
    
}