#include <stdio.h>

/*
39. A importância de R$780.000,00 será dividida entre três ganhadores de um concurso. Sendo 
que da quantia total:
- O primeiro ganhador receberá 46%;
- O segundo receberá 32%;
- O terceiro receberá o restante;
Calcule e imprima a quantia ganha por cada um dos ganhadores
*/

int main(){
    float prize1, prize2, prize3;

    prize1 = 780000*0.46;
    prize2 = 780000*0.32;
    prize3 = 780000 - (prize1 + prize2);

    printf("Primeiro recebe = %f", prize1;)
    printf("Segundo recebe = %f", prize2;)
    printf("Terceiro recebe = %f", prize3;)

    return 0;
}