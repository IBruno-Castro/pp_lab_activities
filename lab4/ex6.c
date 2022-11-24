/*
6. Faça uma função que receba 3 números inteiros como parâmetro, representando horas,
minutos e segundos, e os converta em segundos.
*/
#include <stdio.h>

int conversor(int h, int min, int s){
    h = h*3600;
    min = min*60;
    
    return s+h+min;
}

int main(){
    int h, min, s;

    printf("Digite um numero de horas, minutos e segundos: ");
    scanf("%d %d %d", &h, &min, &s);

    s = conversor(h, min, s);

    printf("Isso eh igual a %d segundos");

    return 0;
}