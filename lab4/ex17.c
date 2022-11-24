/*
17. Faça uma função que receba dois números inteiros positivos por parâmetro e retorne a 
soma dos N números inteiros existentes entre eles.
*/

#include <stdio.h>

int somaPeriodo(int a, int b){
    int x = 0;
    
    for (int i = (a+1); i < b; i++)
    {
        x = x + i;
    }

    return x;
}

int main(){
    int a, b, x;

    do
    {
        printf("Digite dois numeros para somar os numeros entre eles: ");
        scanf("%d %d", &a, &b);
    } while (a < 0 || b < 0);
    
    x = somaPeriodo(a, b);

    printf("A soma dos numeros entre %d e %d eh %d", a, b, x);

}