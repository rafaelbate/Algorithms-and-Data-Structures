#ifndef TICKET_H_INCLUDED
#define TICKET_H_INCLUDED

typedef struct _ticket *ticket;

ticket criar_ticket(char matricula[], int hE, int mE);
void regista_hora_saida_ticket(ticket myticket, int hS, int mS);
char *da_matricula(ticket t);
int calcula_horas_ticket(ticket t);
void destroiTicket(ticket t);
char *daMatriculaTicket(ticket t);

#endif // TICKET_H_INCLUDED
