/*
Exemplo0400 - v0.0. - __ / __ / _____
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

// funcao mostrar multiplos de 7
int method0501(int x)
{
    int i, n = 0;
    for (i = 1; i <= x; i = i + 1)
    {
        n = i * 7;
        printf("%d\n", n);
    }
}
void method_0501()
{
    int x = 0;
    printf("Digite um numero: ");
    scanf("%d", &x);
    getchar();
    method0501(x);

    IO_pause("Aperte ENTER para continuar");
}
int method0502(int x)
{
    int i = 1;
    int count = 0;
    while (count < x)
    {
        if (i % 3 == 0 && i % 4 == 0)
        {
            printf("%d\n", i);
            count = count + 1;
        }
        i = i + 1;
    }
    printf("\n");
    return 0;
}
void method_0502()
{
    int x = 0;
    printf("Digite um numero: ");
    scanf("%d", &x);
    getchar();
    method0502(x);

    IO_pause("Aperte ENTER para continuar");
}

int method0503(int x)
{
    int i = 2 * x - 1;
    long int result = 0;
    int count = 0;
    while (count < x)
    {
        if (i % 2 != 0)
        {
            result = pow(i, 5);
            printf("%ld\n", result);
            count = count + 1;
        }
        i = i - 2;
    }
}

void method_0503()
{
    int x = 0;
    printf("Digite um numero: ");
    scanf("%d", &x);
    getchar();
    method0503(x);

    IO_pause("Aperte ENTER para continuar");
}
int metho0504(int x)
{
    // sequencia dos inveros multiplos de 6
    int i = 1;
    int count = 0;
    for (int i = 1; i <= x; i++)
    {
        double inverso = 1.0 / (6.0 * i);
        printf("1/6 * %d = %.2lf\n", i, inverso);
    }
}
void method_0504()
{
    int x = 0;
    printf("Digite um numero: ");
    scanf("%d", &x);
    getchar();
    metho0504(x);

    IO_pause("Aperte ENTER para continuar");
}
int method0505(int n, double x)
{
    int i = 0;
    for (int i = 0; i < n; i++)
    {
        double termo = 1.0 / pow(x, 2 * i + 1);
        printf("%.6lf\n", termo);
    }
}
void method_0505()
{
    double x;
    int n;

    printf("Digite um valor real x: ");
    scanf("%lf", &x);

    printf("Digite a quantidade de termos na sequência (n): ");
    scanf("%d", &n);

    method0505(n, x);

    IO_pause("Aperte ENTER para continuar");
}
int method0506(int x)
{
    int i = 0;
    int z = 3;
    while (x > 0)
    {
        if (z % 3 == 0 && z % 4 != 0)
        {
            i += z;
            x = x - 1;
        }
        z = z + 1;
    }
    return i;
}
void method_0506()
{
    int x = 0;
    printf("Digite um numero: ");
    scanf("%d", &x);
    getchar();
    int result = method0506(x);
    printf("Resultado da soma e': %d\n", result);

    IO_pause("Aperte ENTER para continuar");
}
double method0507(int x)
{
    double i = 0.0;
    int z = 7;
    while (x > 0)
    {
        if (z % 7 == 0 && z % 5 != 0)
        {
            i += 1.0 / z;
            x = x - 1;
        }
        z = z + 7;
    }
    return i;
}
void method_0507()
{
    int x = 0;
    printf("Digite um numero: ");
    scanf("%d", &x);
    getchar();
    double result = method0507(x);
    printf("Resultado da soma e': %lf\n", result);

    IO_pause("Aperte ENTER para continuar");
}
int method0508(int x)
{
    int i = 0;
    int y = 0;
    int z = 7;

    for (i = 0; i < x; i = i + 1)
    {
        y += z;
        z = z + 1;
        z += i;
    }
    return y;
}
void method_0508()
{
    int x = 0;
    printf("Digite um numero: ");
    scanf("%d", &x);
    getchar();
    int result = method0508(x);
    printf("Resultado da soma e': %d\n", result);

    IO_pause("Aperte ENTER para continuar");
}
int method0509(int x)
{
    int i = 0;
    int y = 0;
    int z = 7;

    for (i = 0; i < x; i = i + 1)
    {
        y += (int)pow(z, 2);
        z = z + 1;
        z += i;
    }

    return y;
}

void method_0509()
{
    int x = 0;
    printf("Digite um numero: ");
    scanf("%d", &x);
    getchar();
    int result = method0509(x);
    printf("Resultado da soma e': %d\n", result);

    IO_pause("Aperte ENTER para continuar");
}

double method0510(int x)
{
    int i = 0;
    double y = 0;
    int z = 6;

    for (i = 0; i < x; i = i + 1)
    {
        y += 1.0 / z;
        z = z + 1;
        z += i;
    }
    return y;
}
void method_0510()
{
    int x = 0;
    printf("Digite um numero: ");
    scanf("%d", &x);
    getchar();
    double result = method0510(x);
    printf("Resultado da soma e': %lf\n", result);

    IO_pause("Aperte ENTER para continuar");
}
int method05E1(int x)
{
    if (x == 0 || x == 1)
    {
        return 1;
    }
    else
    {
        return x * method05E1(x - 1);
    }
}
void method_05E1()
{
    int x = 0;
    printf("Digite um numero: ");
    scanf("%d", &x);
    getchar();
    int result = method05E1(x);
    printf("Resultado do fatorial eh': %d\n", result);

    IO_pause("Aperte ENTER para continuar");
}

double method05E2(int x)
{
    int y = method05E1(3);
    double resultado = 1.0;

    for (int i = 3; i <= x; i += 2)
    {
        double termo = (double)i / (double)method05E1(i + 2);
        resultado *= (1 + termo);
    }

    return resultado;
}
void method_05E2()
{
    int x = 0;
    printf("Digite um numero: ");
    scanf("%d", &x);
    getchar();
    double result = method05E2(x);
    printf("Resultado e': %lf\n", result);

    IO_pause("Aperte ENTER para continuar");
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
            method_0501();
            break;
        case 2:
            method_0502();
            break;
        case 3:
            method_0503();
            break;
        case 4:
            method_0504();
            break;
        case 5:
            method_0505();
            break;
        case 6:
            method_0506();
            break;
        case 7:
            method_0507();
            break;
        case 8:
            method_0508();
            break;
        case 9:
            method_0509();
            break;
        case 10:
            method_0510();
            break;
        case 11:
            method_05E1();
            break;
        case 12:
            method_05E2();
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
  /*
  ---------------------------------------------- documentacao complementar
  ---------------------------------------------- notas / observacoes / comentarios
  ---------------------------------------------- previsao de testes
  a.) -1
  b.) 0
  c.) 5 e { 1, 2, 3, 4, 5 }
  ---------------------------------------------- historico
  Versao
  0.1
  Data
  __/__
  Modificacao
  esboco
  ---------------------------------------------- testes
  Versao
  0.1
  Teste
  01. ( OK )
  identificacao de programa
  */