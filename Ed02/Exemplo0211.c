/*
Exemplo0211 - v0.0. - __ / __ / _____
Author: ________________________
Para compilar em terminal (janela de comandos):
Linux
: gcc -o exemplo0211
exemplo0211.c
Windows: gcc -o exemplo0211
exemplo0211.c
Para executar em terminal (janela de comandos):
Linux
: ./exemplo0211
Windows: exemplo0211
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
/*
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
    printf("%s\n", "Exemplo0211 - Programa = v0.0");
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