/*
Exemplo0114 - v0.0. - __ / __ / _____
Author: ________________________
Para compilar em terminal (janela de comandos):
Linux
: gcc -o exemplo0114
exemplo0114.c
Windows: gcc -o exemplo0114
exemplo0114.c
Para executar em terminal (janela de comandos):
Linux
: ./exemplo0114
Windows: exemplo0114
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
// para definicoes propria

int main(){
    int side1 = 0;
    int side2 = 0;
    int area = 0;
    int perimeter = 0;

    printf("Entre com um valor inteiro para o lado do retangulo: \n");
    scanf("%d", &side1);
    getchar();

    printf("Entre com um valor inteiro para o outro lado do retangulo: \n");
    scanf("%d", &side2);
    getchar();

    area = (side1 / 5)*(side2 / 5);
    perimeter = (side1 / 5) * 2 + (side2 / 5) * 2;

    printf("A area do retangulo e: %d\n", area);
    printf("O perimetro do retangulo e: %d\n", perimeter);

    return 0;
}