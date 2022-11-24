/*
10. Faça uma função que receba dois números e retorne qual deles é o maior.
*/
#include <stdio.h>

float compare(float a, float b){
    if (a > b){
        return a;
    } else {
        return b;
    } 
}

int main(){
    float a, b;

    printf("Digite dois numeros para comparar: ");
    scanf("%f %f", &a, &b);

    printf("O maior eh %f", compare(a, b));

    return 0;
}