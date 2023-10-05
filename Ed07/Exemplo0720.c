/*
Exemplo0720 - v0.0. - __ / __ / _____
Author: Guilherme Lana
*/
// dependencias
#include "io.h"
#include <stdbool.h>
// para definicoes proprias
/**
Method_00 - nao faz nada.
*/
void method_00(void)
{
    // nao faz nada
} // end method_00 ( )

void method0711(int x)
{
    FILE *arquivo = fopen("0711.txt", "wt");
    int i, y;
    for (i = 0; i < x; i++)
    {
        y = 9 + (i * 3);
        fprintf(arquivo, "%d\n", y);
    }
    fclose(arquivo);
}
void method_0711()
{
    int x;
    printf("Digite um valor: \n");
    scanf("%d", &x);
    getchar();
    method0711(x);

    IO_pause("Aperte ENTER para continuar");
}
void method0712(int x)
{
    FILE *arquivo = fopen("0712.txt", "wt");
    int i, y, count;
    for (int i = x - 1; i >= 0; i--)
    {
        y = 21 + (i * 14);
        if (y >= 21 && y % 2 != 0)
        {
            fprintf(arquivo, "%d\n", y);
        }
    }
    fclose(arquivo);
}
void method_0712()
{
    int x;
    printf("Digite um valor: \n");
    scanf("%d", &x);
    getchar();
    method0712(x);

    IO_pause("Aperte ENTER para continuar");
}
void method0713(int x)
{
    FILE *arquivo = fopen("0713.txt", "wt");
    int i, y;
    y = 1;
    for (i = 0; i < x; i++)
    {
        fprintf(arquivo, "%d\n", y);
        y *= 7;
    }

    fclose(arquivo);
}
void method_0713()
{
    int x;
    printf("Digite um valor: \n");
    scanf("%d", &x);
    getchar();
    method0713(x);

    IO_pause("Aperte ENTER para continuar");
}
void method0714(int x)
{
    FILE *arquivo = fopen("0714.txt", "wt");
    int i;
    double y = 1;
    for (int i = 0; i < x; i++)
    {
        fprintf(arquivo, "%.10lf\n", 1 / y);
        y *= 7;
    }
    fclose(arquivo);
}
void method_0714()
{
    int x;
    printf("Digite um valor: \n");
    scanf("%d", &x);
    getchar();
    method0714(x);

    IO_pause("Aperte ENTER para continuar");
}
void method0715(int x, double y)
{
    FILE *arquivo = fopen("0715.txt", "wt");
    int i;
    double z = 1;
    for (i = 0; i < x; i++)
    {
        fprintf(arquivo, "%.10lf\n", 1 / pow(y, i));
    }
    fclose(arquivo);
}
void method_0715()
{
    int x;
    double y;
    printf("Digite um valor inteiro: \n");
    scanf("%d", &x);
    getchar();
    printf("Digite um valor real: \n");
    scanf("%lf", &y);
    getchar();
    method0715(x, y);

    IO_pause("Aperte ENTER para continuar");
}
void method0716(int x)
{
    double valor, soma = 0.0;
    FILE *arquivo = fopen("0715.txt", "rt");
    int cont = 0;
    while (fscanf(arquivo, "%lf", &valor) == 1)
    {
        cont++;
    }

    if (cont >= x)
    {
        rewind(arquivo);

        for (int i = 0; i < x; i++)
        {
            fscanf(arquivo, "%lf", &valor);
            soma += valor;
        }

        fclose(arquivo);

        FILE *arquivoRes = fopen("RESULTADO06.TXT", "a");

        fprintf(arquivoRes, "Quantidade: %d\nResultado: %.10lf\n", x, soma);

        fclose(arquivoRes);
    }
    else
    {
        printf("Digite um número menor ou igual a %d: ", cont);
        fclose(arquivo);
    }
}

void method_0716()
{
    int x;
    printf("Digite um valor inteiro: \n");
    scanf("%d", &x);
    getchar();
    method0716(x);

    IO_pause("Aperte ENTER para continuar");
}
void method_0717()
{
}
void method_0718()
{
}
void method_0719()
{
}
void method_0720()
{
}
void method_0721()
{
}
void method_0722()
{
}
int main()
{
    // definir dado
    int x = 0;
    // repetir até desejar parar
    do
    {
        // identificar
        IO_id("EXEMPLO0321 - Programa - v0.0");
        // ler do teclado
        IO_println("Opcoes");
        IO_println("0 - parar");
        IO_println("1 - Method_01");
        IO_println("2 - Method_02");
        IO_println("3 - Method_03");
        IO_println("4 - Method_04");
        IO_println("5 - Method_05");
        IO_println("6 - Method_06");
        IO_println("7 - Method_07");
        IO_println("8 - Method_08");
        IO_println("9 - Method_09");
        IO_println("10 - Method_10");
        IO_println("11 - Method_11");
        IO_println("12 - Method_12");
        x = IO_readint("Entrar com uma opcao: ");
        // testar valor
        switch (x)
        {
        case 1:
            method_0711();
            break;
        case 2:
            method_0712();
            break;
        case 3:
            method_0713();
            break;
        case 4:
            method_0714();
            break;
        case 5:
            method_0715();
            break;
        case 6:
            method_0716();
            break;
        case 7:
            method_0717();
            break;
        case 8:
            method_0718();
            break;
        case 9:
            method_0719();
            break;
        case 10:
            method_0720();
            break;
        case 11:
            method_0721();
            break;
        case 12:
            method_0722();
            break;
        default:
            IO_pause(IO_concat("Valor diferente das opcoes [0,1,2,3,4,5,6,7,8,9,10] (",

                               IO_concat(IO_toString_d(x), ")")));
        } // end switch
    } while (x != 0);
    // encerrar
    IO_pause("Apertar ENTER para terminar");
    return (0);
} // end main ( )