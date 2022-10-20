#include <stdio.h>

/*
30. Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente em 
dólares.
*/

int main(){
    float real, dolarCot, dolar;

    printf("Digita uma quantia em reais e depois a cotacao do dolar: ");
    scanf("%f %f", &real, &dolarCot);

    dolar = real/dolarCot;

    printf("%fRS = %fUSD", real, dolar);

    return 0;
}