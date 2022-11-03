/*
25. Calcule as raízes da equação de 2o grau.

 Se Delta < 0, não existe real. Imprima a mensagem “Não existe raiz”.
 Se Delta = 0, existe uma raiz real. Imprima a raiz e a mensagem “Raiz única”.
 Se Delta  0, imprima as duas raízes reais.
*/

#include <stdio.h>

int main(){
    float a, b, c, x1, x2, delta;

    printf("Digite a, b e c da equacao: ");
        scanf("%f %f %f", &a, &b, &c);

    if (a == 0){
        printf("Nao eh equacao de segundo grau");
    } else {
        delta = (b*b) - (4*a*c);

        if(delta < 0){
            printf("Nao existe raiz");
        }
        if(delta == 0){
            x1 = ((-b)+sqrt(delta))/(2*a);
            printf("Raiz unica, %f", x1);
        }
        if(delta > 0){
            x1 = ((-b)+sqrt(delta))/(2*a);
            x2 = ((-b)-sqrt(delta))/(2*a);
            printf("x1 = %f\nx2 = %f", x1, x2);        
        }

    }
    

    return 0;
}