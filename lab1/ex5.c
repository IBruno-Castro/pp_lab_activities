#include <stdio.h>

int main(){
    //5. Leia um número real e imprima a quinta parte deste número.
    float todo, quinto;

    printf("Digita um número: ");
    scanf("%f", &todo);

    quinto = todo/5;

    printf("Quinta parte do número: %f", quinto);

    return 0;
}