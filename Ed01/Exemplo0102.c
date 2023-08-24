/*
Exemplo0102 - v0.0. - __ / __ / _____
Author: ________________________
Para compilar em terminal (janela de comandos):
Linux
: gcc -o exemplo0102
exemplo0102.c
Windows: gcc -o exemplo0102
exemplo0102.c
Para executar em terminal (janela de comandos):
Linux
: ./exemplo0102
Windows: exemplo0102
*/
// dependencias
#include <stdio.h>
// para as entradas e saidas
#include <stdlib.h>
// para outras funcoes de uso geral
/*
Method_01.
*/
void method_01(void)
{
    // definir dado
    int x = 0; // definir variavel com valor inicial
    // identificar
    printf("\n%s\n", "Method_01 - Programa = v0.0");
    // mostrar valor inicial
    printf("\n%s%d\n", "x = ", x);
    // OBS.: O formato para int -> %d (ou %i)
    printf("&%s%p\n", "x = ", &x);
    // OBS.: O formato para endereco -> %p)
    // ler do teclado
    printf("Entrar com um valor inteiro: ");
    scanf("%d", &x);
    // OBS.: Necessario indicar o endereco -> &
    getchar();
    // OBS.: Limpar a entrada de dados
    // mostrar valor lido
    printf("%s%i\n", "x = ", x);
    // encerrar
    printf("\n\nApertar ENTER para continuar.");
    getchar();
    // aguardar por ENTER
} // end method_01 ( )

/**
Method_02.
*/
void method_02(void)
{
    // definir dado
    double x = 0.0;
    // definir variavel com valor inicial
    // OBS.: Definir a parte fracionaria e' util
    // identificar
    printf("\n%s\n", "Method_02 - Programa - v0.0");
    // mostrar valor inicial
    printf("\n%s%lf\n", "x = ", x);
    // OBS.: O formato para double -> %lf
    // ler do teclado
    printf("Entrar com um valor real: ");
    scanf("%lf", &x);
    // OBS.: Necessario indicar o endereco -> &
    getchar();
    // OBS.: Limpar a entrada de dados
    // mostrar valor lido
    printf("%s%lf\n", "x = ", x);
    // encerrar
    printf("\n\nApertar ENTER para continuar.\n");
    getchar();
    // aguardar por ENTER
} // end method_02 ( )

/*
Funcao principal.
@return codigo de encerramento
@param argc - quantidade de parametros na linha de comandos
@param argv - arranjo com o grupo de parametros na linha de comandos
*/
int main(int argc, char *argv[])
{
    // definir dado
    int opcao = 0;
    // identificar
    printf("%s\n", "Exemplo0100 - Programa = v0.0");
    printf("%s\n", "Autor: _____________________");
    printf("\n");
    // mudar de linha
    // acoes
    // repetir
    do
    {
        // para mostrar opcoes
        printf("\n%s\n", "Opcoes:");
        printf("\n%s", "0 - Terminar");
        printf("\n%s", "1 - Method_01");
        printf("\n%s", "2 - Method_02");
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
        case 0: // nao fazer nada
            break;
        case 1: // executar method_01
            method_01();
            break;
        case 2: // executar method_02
            method_02();
            break;
        default: // comportamento padrao
            printf("\nERRO: Opcao invalida.\n");
            break;
        } // end switch
    }     // end do while
    while (opcao != 0);
    // encerrar
    printf("\n\nApertar ENTER para terminar.");
    getchar();
    // aguardar por ENTER
    return (0);
    // voltar ao SO (sem erros)
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
  Versao    Teste
  0.0       00. ( OK ) identificacao de programa
  */