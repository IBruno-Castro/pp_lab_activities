/*
12. Escreva uma função que receba um número inteiro maior do que zero e retorne a soma de 
todos os seus algarismos. Por exemplo, ao número 251 corresponderá o valor 8 (2 + 5 + 1). 
Se o número lido não for maior do que zero, o programa terminará com a mensagem 
“Número inválido”.
*/

#include <stdio.h>

int soma(int x){
    int z = 0;
    
    if (x > 0){
        while (x >= 10){
            z = z + (x%10);
            x = x/10;
        }

        return z + x;
    } else {
        printf("Numero invalido");
    }
    
    return 0;
}

int main(){
    int x;

    printf("Digite um numero inteiro e positivo: ");
    scanf("%d", &x);

    printf("Soma dos algarismos = %d", soma(x));

    return 0;
}