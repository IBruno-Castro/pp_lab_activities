/*
17. Escreva uma função que dado um número real passado como parâmetro, retorne a parte
inteira e a parte fracionária deste número. Escreva um programa que chama esta função.
Protótipo:
void frac(float num, int *inteiro, float *frac);
*/

#include <stdio.h>

void separa(float num, int *inteiro, float *frac){
    float temp = num;
    
    if (num > 0)
    {
        while (num > 1)
        {
            num--;
        }

        *frac = num;
        *inteiro = temp - *frac;
    } else {
        while (num < -1)
        {
            num++;
        }

        *frac = num;
        *inteiro = temp - *frac;
    }

}

int main(){
    int inteiro;
    float num, frac;

    printf("Digite um numero para separar sua parte fracionaria: ");
    scanf("%f", &num);

    separa(num, &inteiro, &frac);

    printf("%d %f", inteiro, frac);

    return 0;
}