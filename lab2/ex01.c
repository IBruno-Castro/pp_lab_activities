//1Faça um programa que receba dois números e mostre qual deles é o maior.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y;

    printf("Digite dois numeros: ");
    scanf("%f %f", &x, &y);

    if(x > y){
        printf("%f maior que %f", x, y);
    }
    if(y > x){
        printf("%f maior que %f", y, x);
    }

    return 0;
}
