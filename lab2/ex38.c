/*
38. Leia uma data de nascimento de uma pessoa fornecida através de três números inteiros: Dia,
Mês e Ano. Teste a validade desta data para saber se está é uma data válida. Teste se o dia
fornecido é um dia válido: dia > 0, dia  28 para o mês de fevereiro (29 se o ano for bissexto),
dia  30 em abril, junho, setembro e novembro, dia  31 nos outros meses. Teste a validade do
mês: mês > 0 e mês < 13. Teste a validade do ano: ano  ano atual (use uma constante definida
com o valor igual a 2022). Imprimir: “data válida” ou “data inválida” no final da execução do
programa.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int dia, mes, ano;
    int diaAtual, mesAtual, anoAtual;

    printf("Digite sua data de nascimento: ");
    scanf("%d %d %d", &dia, &mes, &ano);
    
    printf("Digite a data atual: ");
    scanf("%d %d %d", &diaAtual, &mesAtual, &anoAtual);

    //se o ano atual for menor do que o ano registrado
    if(anoAtual < ano){
        printf("Data invalida");
    } else if (anoAtual == ano && mesAtual < mes){
        //se o ano atual for o mesmo do ano dado, se o mes dado for maior do que o mes atual       
        printf("Data invalida");
    } else if(mesAtual == mes && diaAtual < dia){
        //se o mes for o mesmo que o atual, verifica se o dia nao eh maior que o atual
        printf("Data invalida");       
    }else if(ano%4 == 0 && mes == 2){
        //verifica se o ano eh bissesto
        dia <= 29 && dia > 0 ? printf("Data valida"): printf("Data invalida");       
    } else {
        //quando nao eh fevereiro, verifica se o mes eh valido
        if(mes != 2 && mes > 0 && mes <= 12){
            //verifica se o dia eh valido em meses com 30 dias
            if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
                dia < 31 && dia > 0 ? printf("Data valida") : printf("Data invalida");
            } else {
                //verifica em meses com 31 dias
                dia < 32 && dia > 0 ? printf("Data valida") : printf("Data invalida");
            }
        } else if(mes == 2 && dia <= 28 && dia > 0){
            //quando eh fevereiro, verifica se o dia eh valido
            printf("Data valida");
        } else {
            printf("Data invalida");
        }
    }   
   
    return 0;
}