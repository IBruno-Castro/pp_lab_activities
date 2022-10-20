#include <stdio.h>

/*
34. Leia o valor do raio de um círculo e calcule e imprima a área do círculo correspondente. A 
área do círculo é *raio2
, considere  = 3.141592.
*/

int main(){
    int r, pi=3.141592;

    printf("Digita o valor do raio: ");
    scanf("%d", &r);

    printf("Area do circulo = %d", (r*r)*pi);

    return 0;
}