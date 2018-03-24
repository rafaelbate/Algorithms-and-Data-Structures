#include <stdio.h>
#include <stdlib.h>

//prot�tipos das fun��es
void ler_dados(int *l, int *comp, int *largura); //int com o asterisco porque est� a declarar uma variavel do tipo apontador //ler dados introduzidos pelo utilizador
int calcular_azulejos(int l, int comp, int largura); //calculo do numero de azulejos

int main()
{
    int n;
    int l, comp, largura;

    ler_dados(&l, &comp, &largura);
    n=calcular_azulejos(l, comp, largura);
    printf("Azulejos inteiros: %d\n", n);

    return 0;
}

void ler_dados(int *l, int *comp, int *largura){
    scanf("%d", l);
    scanf("%d %d", comp, largura);
}

int calcular_azulejos(int l, int comp, int largura){
    return ((largura/l)*(comp/l));
}
