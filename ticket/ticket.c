#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include "ticket.h"

struct _ticket{

    char matricula[10];
    int hE, hS, mE, mS;
};

ticket criar_ticket(char matricula[], int h, int m)
{
    ticket t;
    t = (ticket)malloc(sizeof(struct _ticket));
    if (t == NULL) return NULL;

    strcpy(t -> matricula, matricula);
    t -> hE = h;
    t -> mE = m;

    return t;
}

void regista_hora_saida_ticket(ticket t, int hS, int mS)
{
    t -> hS = hS;
    t -> mS = mS;
}

int calcula_horas_ticket(ticket t)
{
    int dm, dh, total;
    dm = t->mS - t->mE;
    dh = t->hS - t->hE;
    total = dh;
    if (dm != 0){
        total = dh + 1;
    }
    return total;
}

char *daMatriculaTicket(ticket t)
{
    return (t->matricula);
}

void destroiTicket(ticket t)
{
    free(t);
}
