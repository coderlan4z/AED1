/*
Exemplo0119 - v0.0. - __ / __ / _____
Author: ________________________
Para compilar em terminal (janela de comandos):
Linux
: gcc -o exemplo0119
exemplo0119.c
Windows: gcc -o exemplo0119
exemplo0119.c
Para executar em terminal (janela de comandos):
Linux
: ./exemplo0119
Windows: exemplo0119
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

int main (){
    float radius = 0.0;
    float area = 0.0;

    printf("Entre com um valor real para o raio do circulo: \n");
    scanf("%f", &radius);
    getchar();

    radius = radius / 2;
    area = M_PI * pow(radius, 2);
    area = area /2;

    printf("A area do circulo e: %0.2f\n", area);

    return 0;

}