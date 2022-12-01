/*
6. Leia 10 números inteiros e armazene em um vetor. Em seguida escreva os elementos que 
são primos e suas respectivas posições no vetor.
*/

#include <stdio.h>
#include <stdlib.h>

int ehPrimo(int n){

    if(n == 1 || n == 0 ){
        return 0;
    }

    if(n == 2|| n == 3 || n == 5 || n == 7){
        return 1;
    }

    if(n%2 == 0 || n%3 == 0 || n%5 == 0 || n%7 == 0){
        return 0;
    }

    for(int i = 3; i <= n/2; i++){
        if(n%i == 0){
            return 0;
        }
    }

    return 1;
}

int main()
{
    int A[10];

    for(int i = 0; i < 10; i++){
        scanf("%d", &A[i]);
    }

    for(int j = 0; j < 10; j++){
        if(ehPrimo(A[j])){
            printf("%d da posicao %d eh primo\n", A[j], j);
        }
    }

    return 0;
}