/*
ExemploExtra02 - v0.0. - __ / __ / _____
Author: ________________________
Para compilar em terminal (janela de comandos):
Linux
: gcc -o ExemploExtra02
ExemploExtra02.c
Windows: gcc -o ExemploExtra02
ExemploExtra02.c
Para Executar em terminal (janela de comandos):
Linux
: ./ExemploExtra02
Windows: ExemploExtra02
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
    float volume = 0.0;
    float radius = 0.0;
    float area   = 0.0;

    printf("Entre com um valor real para o volume da esfera: \n");
    scanf("%f", &volume);
    system("clear");
    
    radius = cbrt(volume / (4 * M_PI));
    area   = 4 * M_PI * pow(radius, 2);

    printf("O raio da esfera e: %0.2f\n", radius);
    printf("A area da esfera e: %0.2f\n", area);

    return 0;

}