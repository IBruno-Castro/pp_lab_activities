/*
49. Faça um programa para leia o horário (hora, minuto e segundo) de início e a duração, em 
segundos, de uma experiência biológica. O programa deve resultar com o novo horário (hora, 
minuto e segundo) do termino da mesma.

*/

#include <stdio.h>

int main(){

    int sec, min, h, secSobra, duracao;

    printf("Digite o horário (hora, minuto e segundo) de início do experimento: ");
    scanf("%d", &h, &min, &sec);

    printf("Digite a duracao do experimento em segundos: ");
    scanf("%d", &duracao);

    duracao = duracao + (h*3600) + (min*60) + sec;

    h = duracao-(duracao%3600)/3600;    
    secSobra = duracao%3600;

    min = secSobra-(secSobra%60)/60;
    secSobra = secSobra%60;

    printf("Isso eh igual a %d horas, %d minutos e %d segundos", h, min, secSobra);
    
    return 0;
}