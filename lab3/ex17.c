/*
17. Chico tem 1.50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1.10 metros e cresce
3 centímetros por ano. Escreva um programa que calcule e imprima quantos anos serão
necessários para que Zé seja maior que Chico.
*/

#include <stdio.h>

int main(){
    int z = 110;
    int c = 150;
    int i = 0;

    while(c >= z){
        c = c + 2;
        z = z + 3;
        i++;
    }

    printf("%d anos", i);
    
    return 0;
}