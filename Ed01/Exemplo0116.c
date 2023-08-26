/*
Exemplo0116 - v0.0. - __ / __ / _____
Author: ________________________
Para compilar em terminal (janela de comandos):
Linux
: gcc -o exemplo0116
exemplo0116.c
Windows: gcc -o exemplo0116
exemplo0116.c
Para executar em terminal (janela de comandos):
Linux
: ./exemplo0116
Windows: exemplo0116
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
    float perimeter = 0.0;
    float height = 0.0;
    float area = 0.0;

    printf("Entre com um valor inteiro para o lado do triangulo: \n");
    scanf("%f", &base);
    getchar();

    height = (base * sqrt(3))/ 2;
    perimeter = base * 3;
    area = (base * height) / 2;

    printf("A altura do triangulo e: %0.2f\n", height);
    printf("O perimetro do triangulo e: %0.2f\n", perimeter);
    printf("A area do triangulo e: %0.2f\n", area);

    return 0;

}