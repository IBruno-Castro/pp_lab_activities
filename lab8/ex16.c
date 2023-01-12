/*
16. Considere a seguinte declaração: int A, *B, **C, ***D; Escreva um programa que 
leia a variável ‘a’ e calcule e exiba o dobro, o triplo e o quádruplo desse valor utilizando 
apenas os ponteiros B, C e D. O ponteiro B deve ser usada para calcular o dobro, C o triplo e 
D o quádruplo.
*/
#include <stdio.h>

int main(){
    int a, *b, **c, ***d;

    *b = &a;
    **c = &b;
    ***d = &c;

    scanf("%d", &a);
    printf("%d", a);
    printf("%d", 2 * (*b));
    printf("%d", 3 * (**c));
    printf("%d", 4 * (***d));

    return 0;
}
