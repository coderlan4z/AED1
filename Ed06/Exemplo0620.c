/*
Exemplo0620 - v0.0. - __ / __ / _____
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
int method0611(int x)
{
    int y;

    if (x > 0)
    {
        method0611(x - 1);
        printf("%d\n", 7 * x);
    }
}
void method_0611()
{
    int x = 0;
    printf("Digite um numero: ");
    scanf("%d", &x);
    getchar();
    method0611(x);
    IO_pause("Aperte ENTER para continuar");
}

int method0612(int x)
{
    if (x > 0)
    {
        printf("%d\n", 7 * x);
        method0612(x - 1);
    }
}
void method_0612()
{
    int x;
    printf("Digite um numero: ");
    scanf("%d", &x);
    getchar();
    method0612(x);
    IO_pause("Aperte ENTER para continuar");
}

double method0613(int x)
{
    if (x > 0)
    {
        double inverso = 1.0 / (7 * x);
        method0613(x - 1);
        printf("%lf\n", inverso);
    }
    else
    {
        printf("%lf\n", 1.0);
    }
}
void method_0613()
{
    int x;
    printf("Digite um numero: ");
    scanf("%d", &x);
    getchar();
    method0613(x);
    IO_pause("Aperte ENTER para continuar");
}

double method0614(int x)
{
    if (x > 0)
    {
        printf("%lf\n", 1.0 / (7 * x));
        method0614(x - 1);
    }
    else
    {
        printf("%lf\n", 1.0);
    }
}
void method_0614()
{
    int x;
    printf("Digite um numero: ");
    scanf("%d", &x);
    getchar();
    method0614(x);
    IO_pause("Aperte ENTER para continuar");
}

int method0615(int n, int y)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return y + method0615(n - 1, y + 2);
    }
}
void method_0615()
{
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    getchar();
    printf("%d", method0615(n, 7));
    IO_pause("Aperte ENTER para continuar");
}

double method0616(int n, int valor)
{
    if (n == 0)
    {
        return 0.0;
    }
    else
    {
        return 1.0 / (valor) + method0616(n - 1, valor + 7);
    }
}
void method_0616()
{
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    getchar();
    printf("%lf", method0616(n, 7));
    IO_pause("Aperte ENTER para continuar");
}

void method0617(char *string)
{
    if (*string == '\0')
    {
        return;
    }
    else
    {
        printf("%c\n", *string);
        method0617(string + 1);
    }
}
void method_0617()
{
    char string[100];
    printf("Digite uma string: ");
    scanf("%s", string);
    getchar();
    method0617(string);
    IO_pause("Aperte ENTER para continuar");
}

int method0618(const char *string)
{
    if (*string == '\0')
    {
        return 0;
    }
    else
    {
        int digito = *string - '0';
        if (digito % 2 == 0)
        {
            return 1 + method0618(string + 1);
        }
        else
        {
            return method0618(string + 1);
        }
    }
}
void method_0618()
{
    char string[100];
    printf("Digite uma string: ");
    scanf("%s", string);
    getchar();
    printf("%d", method0618(string));
    IO_pause("Aperte ENTER para continuar");
}
int method0619(const char *string)
{
    if (*string == '\0')
    {
        return 0;
    }
    else
    {
        if (*string >= 'K' && *string <= 'Z')
        {
            return 1 + method0619(string + 1);
        }
        else
        {
            return method0619(string + 1);
        }
    }
}
void method_0619()
{
    char string[100];
    printf("Digite uma string: ");
    scanf("%s", string);
    getchar();
    printf("%d", method0619(string));
    IO_pause("Aperte ENTER para continuar");
}
int method0620(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 2;
    }
    else
    {
        return 4 * method0620(n - 1) + method0620(n - 2);
    }
}
void method_0620()
{
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    getchar();
    printf("%d", method0620(n));
    IO_pause("Aperte ENTER para continuar");
}
double method0621(double x, int n)
{
    if (n == 0)
    {
        return 1.0;
    }
    else
    {
        double termoAtual = pow(x, 2 * n);
        return termoAtual + method0621(x, n - 1);
    }
}
void method_0621()
{
    double x;
    int n;
    printf("Digite um numero: ");
    scanf("%lf", &x);
    getchar();
    printf("Digite um numero: ");
    scanf("%d", &n);
    getchar();
    printf("%lf", method0621(x, n));
    IO_pause("Aperte ENTER para continuar");
}
int fatorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * fatorial(num - 1);
    }
}

double calcularSerieE(int n) {
    if (n == 0) {
        return 1.0;
    } else {
        int numerador = (2 * n);
        int denominador = fatorial(2 * n + 1);
        double termoAtual = (double)numerador / denominador;
        return termoAtual + calcularSerieE(n - 1);
    }
}
void method_0622()
{
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    getchar();
    printf("%lf", calcularSerieE(n));
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
            method_0611();
            break;
        case 2:
            method_0612();
            break;
        case 3:
            method_0613();
            break;
        case 4:
            method_0614();
            break;
        case 5:
            method_0615();
            break;
        case 6:
            method_0616();
            break;
        case 7:
            method_0617();
            break;
        case 8:
            method_0618();
            break;
        case 9:
            method_0619();
            break;
        case 10:
            method_0620();
            break;
        case 11:
            method_0621();
            break;
        case 12:
            method_0622();
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