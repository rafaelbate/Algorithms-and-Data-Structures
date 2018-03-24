#include <stdio.h>
#include <stdlib.h>
#include "ticket.h"
#define SIZE_M 10

void le_matricula (char matricula[]);
void le_hora_entrada (int *h, int *m);
void le_hora_saida (int *hS, int *mS);

int main()
{
    char matricula[SIZE_M];
    ticket myticket;
    int nh, h, m, hS, mS;

    //le a matricula do carro
    le_matricula(matricula);
    //le a hora de entrada do carro
    le_hora_entrada(&h, &m);
    // le a hora de saida do carro
    le_hora_saida(&hS, &mS);

    myticket = criar_ticket(matricula, h, m);
    regista_hora_saida_ticket(myticket, hS, mS);

    printf("O carro com matricula %s teve uma estadia de %d horas\n", matricula,calcula_horas_ticket(myticket));

    destroiTicket(myticket);

return 0;
}

void le_matricula(char matricula[])
{
    printf("Matricula: ");
    scanf("%s",matricula);
}

void le_hora_entrada(int *h, int *m)
{
    printf("Entrada (hh:mm): ");
    scanf("%d:%d", h, m);
}

void le_hora_saida(int *hS, int *mS)
{
    printf("Saida (hh:mm): ");
    scanf("%d:%d", hS, mS);
}

