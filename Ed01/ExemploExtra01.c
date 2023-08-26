/*
ExemploExtra01 - v0.0. - __ / __ / _____
Author: ________________________
Para compilar em terminal (janela de comandos):
Linux
: gcc -o ExemploExtra01
ExemploExtra01.c
Windows: gcc -o ExemploExtra01
ExemploExtra01.c
Para Executar em terminal (janela de comandos):
Linux
: ./ExemploExtra01
Windows: ExemploExtra01
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
    float area = 0.0;
    float radius = 0.0;

    printf("Entre com um valor real para a area do circulo: \n");
    scanf("%f", &area);
    getchar();

    area = area / 3;
    radius = sqrt(area / M_PI);

    printf("O raio do circulo e: %0.2f\n", radius);

    return 0;

}
