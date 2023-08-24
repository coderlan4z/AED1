/*
Exemplo0112 - v0.0. - __ / __ / _____
Author: ________________________
Para compilar em terminal (janela de comandos):
Linux
: gcc -o exemplo0112
exemplo0112.c
Windows: gcc -o exemplo0112
exemplo0112.c
Para executar em terminal (janela de comandos):
Linux
: ./exemplo0112
Windows: exemplo0112
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
    int perimeter = 0;

    printf("Entre com um valor inteiro para o lado do quadrado: \n");
    scanf("%d", &side);
    getchar();

    area = side * side;
    perimeter = (side / 3) * 4;

    printf("Area do quadrado: %d\n", area);
    printf("Perimetro do quadrado: %d\n", perimeter);
    
    return 0;
}