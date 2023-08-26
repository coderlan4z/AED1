/*
Exemplo0120 - v0.0. - __ / __ / _____
Author: ________________________
Para compilar em terminal (janela de comandos):
Linux
: gcc -o exemplo0120
exemplo0120.c
Windows: gcc -o exemplo0120
exemplo0120.c
Para executar em terminal (janela de comandos):
Linux
: ./exemplo0120
Windows: exemplo0120
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
    float radius = 0.0;
    float volume = 0.0;

    printf("Entre com um valor real para o raio da esfera: \n");
    scanf("%f", &radius);
    getchar();

    radius = radius * 0.375;
    volume = (4 * M_PI * pow(radius, 3)) / 3;

    printf("O volume da esfera e: %0.2f\n", volume);

    return 0;
}
