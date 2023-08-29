/*
Exemplo0215 - v0.0. - __ / __ / _____
Author: ________________________
Para compilar em terminal (janela de comandos):
Linux
: gcc -o exemplo0215
exemplo0215.c
Windows: gcc -o exemplo0215
exemplo0215.c
Para executar em terminal (janela de comandos):
Linux
: ./exemplo0215
Windows: exemplo0215
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
    printf("%s\n", "Exemplo0215 - Programa = v0.0");
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