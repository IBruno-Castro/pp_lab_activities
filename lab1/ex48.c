/*
48. Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.
*/

#include <stdio.h>

int main(){
    int sec, min, h, secSobra;

    printf("Digite quantos segundos: ");
    scanf("%d", &sec);

    h = (sec-(sec%3600))/3600;    
    secSobra = sec%3600;

    min = (secSobra-(secSobra%60))/60;
    secSobra = secSobra%60;

    printf("Isso eh igual a %d horas, %d minutos e %d segundos", h, min, secSobra);


    return 0;
}