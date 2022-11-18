/*
19. Escreva um programa que receba como entrada o valor do saque realizado pelo cliente de
um banco e retorne quantas notas de cada valor serão necessárias para atender ao saque com
a menor quantidade de notas possível. Serão utilizadas notas de 100, 50, 20, 10, 5, 2 e 1 real
*/

#include <stdio.h>

int main(){
    int saque;
    int n100, n50, n20, n10, n5, n2, n1;
    n100 = n50 = n20 = n10 = n5 = n2 = n1 = 0;

    printf("Digite o valor do saque: ");
    scanf("%d", &saque);
    
    while (saque - 100 >= 0){
        n100++;
        saque = saque - 100;
    }

    while (saque - 50 >= 0){
        n50++;
        saque = saque - 50;
    }

    while (saque -20 >= 0){
        n20++;
        saque = saque - 20;
    }

    while (saque- 10 >= 0){
        n10++;
        saque = saque - 10;
    }

    while (saque - 5 >= 0){
        n5++;
        saque = saque - 5;
    }

    while (saque- 2 >= 0){
        n2++;
        saque = saque - 2;
    }

    n1 = saque;

    printf("Notas:\n100: %d\n50: %d\n20: %d\n10: %d\n5: %d\n2: %d\n1: %d\n", n100, n50, n20, n10, n5, n2, n1);
    

    return 0;
}