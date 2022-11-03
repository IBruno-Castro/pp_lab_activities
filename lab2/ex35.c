/*
35. Leia uma data e determine se ela é válida. Ou seja, verifique se o mês está entre 1 e 12, e
se o dia existe naquele mês. Note que Fevereiro tem 29 dias em anos bissextos, e 28 dias em
anos não bissextos.
*/

#include <stdio.h>

int main(){
    int dia, mes, ano;

    printf("Digite sua data de nascimento: ");
    scanf("%d %d %d", &dia, &mes, &ano);

    if(ano%4 == 0 && mes == 2){
        //verifica se o ano eh bissesto
        dia <= 29 && dia > 0 ? printf("Data valida"): printf("Data invalida");       
    } else {
        //quando nao eh fevereiro, verifica se o mes eh valido
        if(mes != 2 && mes > 0 && mes <= 12){
            //verifica se o dia eh valido em meses com 30 dias
            if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
                dia < 31 && dia > 0 ? printf("Data valida") : printf("Data invalida");
            } else {
                //verifica em meses com 31 dias
                dia < 32 && dia > 0 ? printf("Data valida") : printf("Data invalida");
            }
        } else if(mes == 2 && dia <= 28 && dia > 0){
            //quando eh fevereiro, verifica se o dia eh valido
            printf("Data valida");
        } else {
            printf("Data invalida");
        }
    }  

    return 0;
}