/*
Exemplo0111 - v0.0. - __ / __ / _____
Author: ________________________
Para compilar em terminal (janela de comandos):
Linux
: gcc -o exemplo0111
exemplo0111.c
Windows: gcc -o exemplo0111
exemplo0111.c
Para executar em terminal (janela de comandos):
Linux
: ./exemplo0111
Windows: exemplo0111
*/
// dependencias
#include <stdio.h>
// para as entradas e saidas
#include <stdlib.h>
// para outras funcoes de uso geral
#include <stdbool.h>
// para definicoes booleanas
#include <string.h>
// para cadeias de caracteres
#include <math.h>
// para funcoes matematicas
#include "io.h"
// para definicoes proprias

int main(){
    int side = 0;
    int area = 0;
    int area6 = 0;

    printf("Entre com um valor inteiro para o lado do quadrado: \n");
    scanf("%d", &side);
    getchar();
    area = side * 6;
    area6 = area * area;
    printf("Area do quadrado 6x maior: %d\n", area6);

    return 0;
}