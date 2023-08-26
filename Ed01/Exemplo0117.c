/*
Exemplo0117 - v0.0. - __ / __ / _____
Author: ________________________
Para compilar em terminal (janela de comandos):
Linux
: gcc -o exemplo0117
exemplo0117.c
Windows: gcc -o exemplo0117
exemplo0117.c
Para executar em terminal (janela de comandos):
Linux
: ./exemplo0117
Windows: exemplo0117
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
    float side = 0.0;
    float volume = 0.0;

    printf("Entre com um valor real para o lado do cubo: \n");
    scanf("%f", &side);
    getchar();

    side = side * 7;
    volume = pow(side, 3);

    printf("O volume do cubo e: %0.2f\n", volume);

    return 0;
    
}