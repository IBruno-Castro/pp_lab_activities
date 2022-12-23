/*
1. Escreva um trecho de código para fazer a criação dos novos tipos de dados conforme
solicitado abaixo:
- Horário: composto de hora, minutos e segundos.
- Data: composto de dia, mês e ano.
- Compromisso: composto de uma data, horário e texto que descreve o compromisso.
*/

#include <stdio.h>

struct horario{
    int hora;
    int minuto;
    int segundos;
};

struct data{
    int dia;
    int mes;
    int ano;
};

struct compromisso
{
    struct data x;
    struct horario h;
    char descricao[100];
};
