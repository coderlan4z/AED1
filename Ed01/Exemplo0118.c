/*
Exemplo0118 - v0.0. - __ / __ / _____
Author: ________________________
Para compilar em terminal (janela de comandos):
Linux
: gcc -o exemplo0118
exemplo0118.c
Windows: gcc -o exemplo0118
exemplo0118.c
Para executar em terminal (janela de comandos):
Linux
: ./exemplo0118
Windows: exemplo0118
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
    float length = 0.0;
    float width = 0.0;
    float height = 0.0;
    float volume = 0.0;

    printf("Entre com um valor real para o comprimento da paralelepipedo: \n");
    scanf("%f", &length);
    getchar();

    printf("Entre com um valor real para a largura da paralelepipedo: \n");
    scanf("%f", &width);
    getchar();

    printf("Entre com um valor real para a altura da paralelepipedo: \n");
    scanf("%f", &height);
    getchar();

    length = length / 6;
    width = width / 6;
    height = height / 6;
    volume = length * width * height;

    printf("O volume do paralelepipedo e: %0.2f\n", volume);

    return 0;

}