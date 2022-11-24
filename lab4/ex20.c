/*
20. Escreva uma função para determinar a quantidade de números primos abaixo de N.
*/

#include <stdio.h>

int ehPrimo(int n){
    int primo = 0;

    for (int i = 2; i < n; i++){

        for (int j = 2; j <= i; j++){
            
            
            if (i % j == 0){
                if (i==j){
                    primo++;
                }
                break;
            }
        }

    }

    return primo;
}

int main(){
    int n;

    printf("Digite um numero para verificar os primos abaixo dele: ");
    scanf("%d", &n);

    printf("Existe %d primos abaixo de %d", ehPrimo(n), n);

    return 0;
}