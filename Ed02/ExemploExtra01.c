/*
ExemploExtra01 - v0.0. - __ / __ / _____
Author: ________________________
Para compilar em terminal (janela de comandos):
Linux
: gcc -o exemploExtra01
exemploExtra01.c
Windows: gcc -o exemploExtra01
exemploExtra01.c
Para executar em terminal (janela de comandos):
Linux
: ./exemploExtra01
Windows: exemploExtra01
*/
// dependencias
#include <stdio.h>
// para as entradas e saidas
#include <stdlib.h>
// para outras funcoes de uso geral
#include "io.h"
/**
Method_01.
*/
void method_01(void)
{
    // identificar
    printf("%s\n", "Method_01");
    // definir dado
    int x = 0;
    printf("\n%s\n", "Entrar com um valor inteiro: ");
    scanf("%d", &x);
    getchar();
    if (x % 2 == 0)
    {
        printf("\n%s\n", "Valor par.");
    }
    else
    {
        printf("\n%s\n", "Valor impar.");
    }

    // encerrar
    printf("\nApertar ENTER para continuar.\n");
    getchar();
} // end method_01 ( )

/**
Method_02
*/
void method_02(void)
{
    // identificar
    printf("%s\n", "Method_02");
    // definir dado
    int x = 0;
    printf("\n%s\n", "Entrar com um valor inteiro: ");
    scanf("%d", &x);
    getchar();
    if (x % 2 == 0 && x > 15)
    {
        printf("\n%s\n", "Valor par e maior que 15.");
    }
    else if (x % 2 != 0 && x < -15)
    {
        printf("\n%s\n", "Valor impar e menor que -15.");
    }
    else
    {
        printf("\n%s\n", "Valor nao atende aos criterios.");
    }
} // end method_02

/**
  Method_03
*/
void method_03(void){
    // identificar
    printf("%s\n", "Method_03");
    // definir dado
    int x = 0;
    printf("\n%s\n", "Entrar com um valor inteiro: ");
    scanf("%d", &x);
    getchar();

    if (x > 25 && x < 65)
    {
        printf("\n%s\n", "Valor pertence ao intervalo aberto entre (25:65).");
    }
    else
    {
        printf("\n%s\n", "Valor nao pertence ao intervalo aberto entre (25:65).");
    }
} // end method_03

/**
  Method_04
*/
void method_04(void){
    // identificar
    printf("%s\n", "Method_04");
    // definir dado
    int x = 0;
    printf("\n%s\n", "Entrar com um valor inteiro: ");
    scanf("%d", &x);
    getchar();

    if (x >= 20 && x<= 60)
    {
        printf("\n%s\n", "Valor pertence ao intervalo fechado entre [20:60].");
    }
    else
    {
        printf("\n%s\n", "Valor nao pertence ao intervalo fechado entre [20:60].");
    }
} // end method_04

/**
  Method_05
*/
void method_05(void){
    // identificar
    printf("%s\n", "Method_05");
    // definir dado
    int x = 0;
    printf("\n%s\n", "Entrar com um valor inteiro: ");
    scanf("%d", &x);
    getchar();

    if((x >= 15 && x <= 30) && (x > 25 && x < 50))
    {
        printf("\n%s\n", "Valor pertence aos dois intervalos.");
    }
    else if (x >= 15 && x <= 30)
    {
        printf("\n%s\n", "Valor pertence somente ao intervalo fechado entre [15:30].");
    }
    else if(x > 25 && x < 50)
    {
        printf("\n%s\n", "Valor pertence somente ao intervalo aberto entre (25:50).");
    }
    else
    {
        printf("\n%s\n", "Valor nao pertence a nenhum dos intervalos.");
    }
} // end method_05

/**
  Method_06
*/
void method_06(void){
    // identificar
    printf("%s\n", "Method_06");
    // definir dado
    int x = 0;
    int y = 0;
    printf("\n%s\n", "Entrar com dois valores inteiros, um de cada vez: ");
    scanf("%d", &x);
    getchar();
    scanf("%d", &y);
    getchar();
    if (x % 2 == 0 && y % 2 != 0)
    {
        printf("\n%s\n", "O primeiro valor e' par e o segundo valor e' impar.");
    }
    else
    {
        printf("\n%s\n", "O primeiro valor nao e' par ou o segundo valor nao e' impar.");
    }   
} // end method_06

/**
  Method_07
*/
void method_07(void){
    // identificar
    printf("%s\n", "Method_07");
    // definir dado
    int x = 0;
    int y = 0;
    printf("\n%s\n", "Entrar com dois valores inteiros, um de cada vez: ");
    scanf("%d", &x);
    getchar();
    scanf("%d", &y);
    getchar();
    if ((x % 2 != 0 && x < 0) && (y % 2 == 0 && y > 0))
    {
        printf("\n%s\n", "O primeiro valor e' impar e negativo e o segundo valor e' par e positivo.");
    }
    else
    {
        printf("\n%s\n", "O primeiro valor nao e' impar e negativo ou o segundo valor nao e' par e positivo.");
    }
} // end method_07

/**
  Method_08
*/
void method_08(void){
    // identificar
    printf("%s\n", "Method_08");
    // definir dado
    float x = 0.0;
    float y = 0.0;
    printf("\n%s\n", "Entrar com dois valores reais, um de cada vez: ");
    scanf("%f", &x);
    getchar();
    scanf("%f", &y);
    getchar();
    if (y > (x * 2))
    {
        printf("\n%s\n", "O segundo valor e' maior que o dobro do primeiro.");
    }
    else if(y < (x * 2))
    {
        printf("\n%s\n", "O segundo valor e' menor que o dobro do primeiro.");
    }
    else
    {
        printf("\n%s\n", "O segundo valor e' igual ao dobro do primeiro.");
    }
} // end method_08

/**
  Method_09
*/
void method_09(void){
    // identificar
    printf("%s\n", "Method_09");
    // definir dado
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;
    printf("\n%s\n", "Entrar com tres valores reais, um de cada vez: ");
    scanf("%f", &x);
    getchar();
    scanf("%f", &y);
    getchar();
    scanf("%f", &z);
    getchar();
    if(x != y)
    {
        if (z > x && z < y || z < x && z > y)
        {
            printf("\n%s\n", "O terceiro valor esta entre o primeiro e o segundo.");
        }
        else
        {
            printf("\n%s\n", "O terceiro valor nao esta entre o primeiro e o segundo.");
        }
    }
    else{
        printf("\n%s\n", "Os dois primeiros valores sao iguais.");
    }
}// end method_09

/**
  Method_10
*/
void method_10(void){
    // identificar
    printf("%s\n", "Method_10");
    // definir dado
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;
    printf("\n%s\n", "Entrar com tres valores reais, um de cada vez: ");
    scanf("%f", &x);
    getchar();
    scanf("%f", &y);
    getchar();
    scanf("%f", &z);
    getchar();
    if ( x != y && x != z && y != z)
    {
        if ((z > x && z < y) || (z < x && z > y))
        {
            printf("\n%s\n", "O terceiro valor esta entre o primeiro e o segundo.");
        }
        else
        {
            printf("\n%s\n", "O terceiro valor nao esta entre o primeiro e o segundo.");
        }
    }
    else
    {
        printf("\n%s\n", "Os tres valores sao iguais.");
    }
}// end method_10

/**
  Method_11
*/
void method_11(void){
    //identificar
    printf("%s\n", "Method_11");
    // definir dado
    char x ;
    char y ;
    char z ;
    printf("\n%s\n", "Entrar com tres caracteres, um de cada vez: ");
    scanf("%c", &x);
    getchar();
    scanf("%c", &y);
    getchar();
    scanf("%c", &z);
    getchar();
    if (x == y || x == z || y == z)
    {
        printf("\n%s\n", "O primeiro caractere igual ao segundo ou primeiro.");
    }
    else if(x > y && x < z || x < y && x > z)
    {
        printf("\n%s\n", "O primeiro caractere esta entre o segundo e o terceiro.");
    }
    else
    {
        printf("\n%s\n", "O primeiro caractere nao esta entre o segundo e o terceiro.");
    }
}// end method_11

/**
Funcao principal.
@return codigo de encerramento
@param argc - quantidade de parametros na linha de comandos
@param argv - arranjo com o grupo de parametros na linha de comandos
*/
int main(void)
{
    // definir dado
    int opcao = 0;
    // identificar
    printf("%s\n", "ExemploExtra01 - Programa = v0.0");
    printf("%s\n", "Autor: Guilherme Lana");
    printf("\n");
    // mudar de linha// acoes
    // repetir
    do
    {
        // para mostrar opcoes
        printf("\n%s\n", "Opcoes:");
        printf("\n%s", "0 - Terminar");
        printf("\n%s", "1 - Method_01");
        printf("\n%s", "2 - Method_02");
        printf("\n%s", "3 - Method_03");
        printf("\n%s", "4 - Method_04");
        printf("\n%s", "5 - Method_05");
        printf("\n%s", "6 - Method_06");
        printf("\n%s", "7 - Method_07");
        printf("\n%s", "8 - Method_08");
        printf("\n%s", "9 - Method_09");
        printf("\n%s", "10 - Method_10");
        printf("\n%s", "11 - Method_11");
        printf("\n");
        // ler a opcao do teclado
        printf("\n%s", "Opcao = ");
        scanf("%d", &opcao);
        getchar();
        // para limpar a entrada de dados
        // para mostrar a opcao lida
        printf("\n%s%d", "Opcao = ", opcao);
        // escolher acao dependente da opcao
        switch (opcao)
        {
        case 0: /* nao fazer nada */
            break;
        case 1:
            method_01();
            break;
        case 2:
            method_02();
            break;
        case 3:
            method_03();
            break;
        case 4:
            method_04();
            break;
        case 5:
            method_05();
            break;
        case 6:
            method_06();
            break;
        case 7:
            method_07();
            break;
        case 8:
            method_08();
            break;
        case 9:
            method_09();
            break;
        case 10:
            method_10();
            break;
        case 11:
            method_11();
            break;
        default: // comportamento padrao
            printf("\nERRO: Opcao invalida.\n");
            break;
        } // end switch
    } while (opcao != 0);
    // encerrar
    printf("\n\nApertar ENTER para terminar.");
    getchar();
    // aguardar por ENTER
} // end main ( )
  /*
  ---------------------------------------------- documentacao complementar
  ---------------------------------------------- notas / observacoes / comentarios
  ---------------------------------------------- previsao de testes
  ---------------------------------------------- historico
  Versao
  0.1
  Data
  __/__
  Modificacao
  esboco
  ---------------------------------------------- testes
  Versao   Teste
  0.0      00. ( __ )          identificacao de programa
  */