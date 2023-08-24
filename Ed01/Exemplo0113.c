/*
Exemplo0113 - v0.0. - __ / __ / _____
Author: ________________________
Para compilar em terminal (janela de comandos):
Linux
: gcc -o exemplo0113
exemplo0113.c
Windows: gcc -o exemplo0113
exemplo0113.c
Para executar em terminal (janela de comandos):
Linux
: ./exemplo0113
Windows: exemplo0113
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
    int side1 = 0;
    int side2 = 0;
    int area = 0;

    printf("Entre com um valor inteiro para o lado do triangulo: \n");
    scanf("%d", &side1);
    getchar();

    printf("Entre com um valor inteiro para o outro lado do triangulo: \n");
    scanf("%d", &side2);
    getchar();

    area = ((side1 * 4)*(side2 * 4)) / 2;
    printf("A area do triangulo e: %d\n", area);

    return 0;
}