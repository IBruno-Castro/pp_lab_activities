/*5.implemente um programa que calcule a soma de dois
vetores.*/

#include <stdio.h>

struct vetor {
    float a;
    float b;
    float c;
};

int main(){
    struct vetor A, B, C;

    printf("Digite os x, y, e z da A: ");
    scanf("%f %f %f", &A.a, &A.b, &A.c);

    printf("Digite os x, y, e z da B: ");
    scanf("%f %f %f", &B.a, &B.b, &B.c);

    C.a = B.a - A.a;
    C.b = B.b - A.a;
    C.c = B.c - A.c;

    printf("C(%.2f, %.2f, %.2f)", C.a, C.b, C.c);

    return 0;
}