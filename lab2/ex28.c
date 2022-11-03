/*
28. Faça um programa que leia três números inteiros positivos e efetue o cálculo de uma das
seguintes médias de acordo com um valor numérico digitado pelo usuário:
*/

#include <stdio.h>
#include <math.h>

int main(){
    int x, y, z;
    float r;
    char opcao;

    printf("Digite tres numeros inteiros positivos: ");
    scanf("%d %d %d", &x, &y, &z);

    if(x < 0 || y < 0 || z < 0){
        printf("Numero invalido");
    } else {
        printf("Escolha a opcao:\n1- Media geometrica\n2- Media ponderada\n3- Media Harmonica\n4- Media Aritmetica\nOpcao: ");
        scanf(" %c", &opcao);

        switch (opcao)
        {
        case '1':
            r = cbrt(x*y*z);
            printf("Resultado = %f", r);
            break;
        case '2':

            r = x + (2*y) + (3*z);

            if (r < 0)
            {
                r = (-r);
            }
            
            r = r/3;

            printf("Resultado = %f", r);
            break;
        case '3':
            if (x == 0 || y == 0 || z == 0){
                printf("Nao existe");
            } else {
                r = 1/((1/x)+(1/y)+(1/z));

                printf("Resultado = %f", r);
            }
            
            break;
        case '4':
            r = (x+y+z)/3;

            printf("Resultado = %f", r);
            break;
        default:
            printf("Opcao invalida");
            break;
        }


    }

    return 0;
}