/*
6. Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles, assim
como a diferença existente entre ambos.
*/

#include <stdio.h>

int main(){
    int x, y;
    
    if(x > y){
        printf("O maior numero eh %d\n", x);
        printf("A diferença entre eles eh %d", x - y);
    }
    if(y > x){
        printf("O maior numero eh %d\n", y);
        printf("A diferença entre eles eh %d", y - x);
    } else {
        printf("Os dois sao iguais");
    }
    
    return 0;
}