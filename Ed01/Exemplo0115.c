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
    float base = 0.0;
    float height = 0.0;
    float area = 0.0;

    printf("Entre com um valor real para o lado do triangulo: \n");
    scanf("%f", &base);
    getchar();

    printf("Entre com um valor real para o outro lado do triangulo: \n");
    scanf("%f", &height);
    getchar();

    area = ((base / 2)*(height / 2)) / 2;

    printf("A area do triangulo e: %f\n", area);

    return 0;
}