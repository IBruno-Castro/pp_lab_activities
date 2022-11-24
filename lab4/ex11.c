/*
11. Elabore uma função que receba três notas de um aluno como parâmetros e uma letra. Se a 
letra for A, a função deverá calcular a média aritmética das notas do aluno; se for P, deverá 
calcular a média ponderada, com pesos 5, 3 e 2.
*/
#include <stdio.h>

void media(float n1, float n2, float n3, char c){
    float r;
    
    if (c == 'a' || c =='A'){
        r = (n1+n2+n3)/3;
        printf("Media aritmetica = %f", r);
    } else if(c == 'p' || c == 'P'){
        r = (n1*5 + n2*3 + n3*2)/10;
        printf("Media ponderada com pesos 5, 3 e 2 = %f", r);
    } else {
        printf("Operacao invalida");
    }
}

int main(){
    float n1, n2, n3;
    char c;

    printf("Digite A para media aritmetica ou P para ponderada: ");
    scanf("%c", &c);

    printf("Digite suas tres notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    media(n1, n2, n3, c);

    return 0;
}