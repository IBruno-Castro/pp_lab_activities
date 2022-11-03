/*
14. A nota final de um estudante é calculada a partir de três notas atribuídas entre o intervalo
de 0 até 10, respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um
exame final. A média das três notas mencionadas anteriormente obedece aos pesos: Trabalho
de Laboratório: 2; Avaliação Semestral: 3; Exame Final: 5. De acordo com o resultado, mostre na
tela se o aluno está reprovado (média entre 0 e 2,9), de recuperação (entre 3 e 4,9) ou se foi
aprovado. Faça todas as verificações necessárias.
*/

#include <stdio.h>

int main(){
    float lab, provaSemestre, exameFinal, notaFinal;

    printf("Digite suas notas: ");
    scanf("%f %f %f", &lab, &provaSemestre, &exameFinal);

    if (lab >= 0 && lab <=10 && provaSemestre >= 0 && provaSemestre <=10 && exameFinal >= 0 && exameFinal <=10)
    {
        notaFinal = (2*lab + 3*provaSemestre + exameFinal*5)/10;

        if(notaFinal < 3){
            printf("Voce foi reprovado");
        } else {
            if(notaFinal < 5){
                printf("Voce esta de recuperacao");
            } else {
                printf("Voce foi aprovado");
            }
        }
    } else {
        printf("Notas invalidas");
    }

    return 0;
}