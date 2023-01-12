/*
26. Implemente uma função que calcule as raízes de uma equação do segundo grau do tipo
Ax2+ Bx + C = 0.
Lembrando que:
𝑥 =
−𝑏 ± √
2𝑎

Onde:
 = 𝑏
2 − 4𝑎𝑐

A variável a tem que ser diferente de zero. 
 Se  < 0, não existe real;
 Se  = 0, existe uma raiz real;
 Se   0, existem duas raízes reais.

Essa função deve obedecer ao seguinte protótipo:

int raizes(float A, float B, float C, float *X1, float *X2);

Essa função deve ter como valor de retorno o número de raízes reais e distintas da equação. Se 
existirem raízes reais, seus valores devem ser armazenados nas variáveis apontadas por X1 e X2
*/

#include <math.h>
#include <stdio.h>

int raizes(float a, float b, float c, float *x1, float *x2){
    float delta;

    delta = (b*b) - 4*a*c;

    if (delta < 0){
        return 0;
    }

    *x1 = ((-b) + sqrt(delta))/(2*a);
    *x2 = ((-b) - sqrt(delta))/(2*a);
    
    if (delta == 0){
        return 1;
    }

    if (delta >= 0){
        return 2;
    }
}