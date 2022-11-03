//3
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x;

    printf("Digite um numeros: ");
    scanf("%f", &x);

    if(x >= 0){
        x = sqrt(x);
        printf("raiz quadrada de x eh %f", x);
    } else {
        x = x*x;
        printf("x ao quadrado eh %f", x);
    }

    return 0;
}