/*
Exemplo0317 - v0.0. - __ / __ / _____
Author: Guilherme Lana
*/
// dependencias
#include "io.h"
// para definicoes proprias
/**
Method_00 - nao faz nada.
*/
void method_00(void)
{
    // nao faz nada
} // end method_00 ( )
/**
Method_01 - Repeticao com teste no inicio.
*/
void method_01(void)
{
    // definir dado
    int x = 0;
    // identificar
    IO_id("Method_01 - v0.0");
    // ler do teclado o valor inicial
    x = IO_readint("Entrar com uma quantidade: ");
    // repetir (x) vezes
    while (x > 0)
    {
        // mostrar valor atual
        IO_println(IO_toString_d(x));
        // passar ao proximo valor
        x = x - 1;
    } // end while
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // end method_01 ( )

/**
Method_02 - Repeticao com teste no inicio.
*/
void method_02(void)
{
    // definir dado
    int x = 0;
    int y = 0;
    // identificar
    IO_id("Method_02 - v0.0");
    // ler do teclado
    x = IO_readint("Entrar com uma quantidade: ");
    // repetir (x) vezes
    y = x;
    // copiar o valor lido (e' melhor)
    while (y > 0)
    {
        // mostrar valor atual
        IO_println(IO_toString_d(x));
        // passar ao proximo valor
        y = y - 1;
    } // end while
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // end method_02 ( )

/**
Method_03 - Repeticao com teste no inicio.
*/
void method_03(void)
{
    // definir dado
    int x = 0;
    int y = 0;
    // identificar
    IO_id("Method_03 - v0.0");
    // ler do teclado
    x = IO_readint("Entrar com uma quantidade: ");
    // repetir (x) vezes
    y = 1;
    // o valor lido devera' ser preservado
    while (y <= x)
    {
        // mostrar valor atual
        IO_printf("%d\n", y);
        // passar ao proximo valor
        y = y + 1;
    } // end while
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // end method_03 ( )

/**
Method_04 - Repeticao com teste no inicio e variacao.
*/
void method_04(void)
{
    // definir dado
    int x = 0;
    int y = 0;
    int z = 0;
    // identificar
    IO_id("Method_04 - v0.0");
    // ler do teclado
    x = IO_readint("Entrar com uma quantidade: "); // repetir (x) vezes
    // inicio teste variacao
    for (y = 1; y <= x; y = y + 1)
    {
        // ler valor do teclado
        z = IO_readint("Valor = ");
        // mostrar valor atual
        IO_printf("%d. %d\n", y, z);
    } // end for
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // end method_04 ( )

/**
Method_05 - Repeticao com teste no inicio e variacao.
*/
void method_05(void)
{
    // definir dado
    int x = 0;
    int y = 0;
    int z = 0;
    // identificar
    IO_id("Method_05 - v0.0");
    // ler do teclado
    x = IO_readint("Entrar com uma quantidade: ");
    // repetir (x) vezes
    // inicio teste variacao
    for (y = x; y >= 1; y = y - 1)
    {
        // ler valor do teclado
        z = IO_readint("Valor = ");
        // mostrar valor atual
        IO_printf("%d. %d\n", y, z);
    } // end for
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // end method_05 ( )

/**
Method_06 - Repeticao sobre cadeia de caracateres.
*/
void method_06(void)
{
    // definir dado
    int x = 0;
    int y = 0;
    chars palavra = IO_new_chars(STR_SIZE);
    int tamanho = 0;
    // identificar
    IO_id("Method_06 - v0.0");
    // ler do teclado
    palavra = IO_readstring("Entrar com uma palavra: ");
    // repetir para cada letra
    tamanho = strlen(palavra) - 1;
    // OBS: A cadeia de caracteres iniciam suas posições em zero.
    // inicio teste variacao
    for (y = tamanho; y >= 0; y = y - 1)
    {
        // mostrar valor atual
        IO_printf("%d: [%c]\n", y, palavra[y]);
    } // end for
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // end method_06 ( )

/**
Method_07 - Repeticao sobre cadeia de caracateres.
*/
void method_07(void)
{
    // definir dado
    int x = 0;
    int y = 0;
    char palavra[STR_SIZE];
    int tamanho = 0;
    // identificar
    IO_id("Method07 - v0.0");
    // ler do teclado
    IO_printf("Entrar com uma palavra: ");
    scanf("%s", palavra);
    getchar();
    // OBS: A cadeia de caracteres dispensa a indicacao de endereco (&) na leitura.// repetir para cada letra
    tamanho = strlen(palavra);
    // OBS: A cadeia de caracteres iniciam suas posições em zero.
    // inicio teste variacao
    for (y = 0; y < tamanho; y = y + 1)
    {
        // mostrar valor atual
        IO_printf("%d: [%c]\n", y, palavra[y]);
    } // end for
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // end method_07 ( )

/**
Method_08 - Repeticao com intervalos.
*/
void method_08(void)
{
    // definir dado
    int inferior = 0;
    int superior = 0;
    int x = 0;
    // identificar
    IO_id("Method08 - v0.0");
    // ler do teclado
    inferior = IO_readint("Limite inferior do intervalo: ");
    superior = IO_readint("Limite superior do intervalo : ");
    // inicio teste variacao
    for (x = inferior; x <= superior; x = x + 1)
    {
        // mostrar valor atual
        IO_printf("%d\n", x);
    } // end for
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // end method_08 ( )

/**
Method_09 - Repeticao com intervalos.
*/
void method_09(void)
{
    // definir dado
    double inferior = 0;
    double superior = 0;
    double passo = 0;
    double x = 0;
    // identificar
    IO_id("Method_09 - v0.0");
    // ler do teclado
    inferior = IO_readdouble("Limite inferior do intervalo : ");
    superior = IO_readdouble("Limite superior do intervalo : ");
    passo = IO_readdouble("Variacao no intervalo (passo): ");
    // inicio teste variacao
    for (x = superior; x >= inferior; x = x - passo)
    {
        // mostrar valor atual
        IO_printf("%lf\n", x);
    } // end for
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // end method_09 ( )

/**
Method_10 - Repeticao com confirmacao.
*/
void method_10(void)
{
    // definir dado
    double inferior = 0;
    double superior = 0;
    double passo = 0;
    double x = 0;
    // identificar
    IO_id("Method10 - v0.0");
    // ler do teclado
    inferior = IO_readdouble("Limite inferior do intervalo : "); // repetir ate' haver confirmacao de validade
    do
    {
        superior = IO_readdouble("Limite superior do intervalo: ");
    } while (inferior >= superior);
    // repetir ate' haver confirmacao de validade
    do
    {
        passo = IO_readdouble("Variacao no intervalo (passo): ");
    } while (passo <= 0.0);
    // inicio teste variacao
    for (x = inferior; x <= superior; x = x + passo)
    {
        // mostrar valor atual
        IO_printf("%lf\n", x);
    } // end for
    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // end method_10 ( )

void method_11(void)
{
    int i = 0;
    char palavra[80];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    getchar();

    for (i = 0; i < strlen(palavra); i = i + 1)
    {
        if (palavra[i] >= 'A' && palavra[i] <= 'Z')
        {
            printf("%c", palavra[i]);
        }
    }
    printf("\n");

    IO_pause("\nApertar ENTER para continuar");
} // end method_11

void method_12(void)
{
    int i = 0;
    int count = 0;
    char palavra[80];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    getchar();

    for (i = 0; i < strlen(palavra); i = i + 1)
    {
        if (palavra[i] >= 'A' && palavra[i] <= 'Z')
        {
            printf("%c", palavra[i]);
            count = count + 1;
        }
    }
    printf("\nO numero de maiusculas e': %d", count);
    printf("\n");

    IO_pause("\nApertar ENTER para continuar");
} // end method_12

void method_13(void)
{
    int i = 0;
    int count = 0;
    int tamanho = 0;
    char palavra[80];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    getchar();

    tamanho = strlen(palavra) - 1;

    for (i = tamanho; i >= 0; i = i - 1)
    {
        if (palavra[i] >= 'A' && palavra[i] <= 'Z')
        {
            printf("%c", palavra[i]);
            count = count + 1;
        }
    }
    printf("\nO numero de maiusculas e': %d", count);
    printf("\n");
    IO_pause("\nApertar ENTER para continuar");
} // end method_13

void method_14(void)
{
    int i = 0;
    int count = 0;
    char palavra[80];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    getchar();

    for (i = 0; i < strlen(palavra); i = i + 1)
    {
        if (palavra[i] >= 'A' && palavra[i] <= 'Z' || palavra[i] >= 'a' && palavra[i] <= 'z')
        {
            printf("%c", palavra[i]);
            count = count + 1;
        }
    }
    printf("\nO numero de letras e': %d", count);
    printf("\n");
    IO_pause("\nApertar ENTER para continuar");
} // end method_14

void method_15(void)
{
    int i = 0;
    int count = 0;
    int tamanho = 0;
    char palavra[80];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    getchar();

    tamanho = strlen(palavra) - 1;

    for (i = tamanho; i >= 0; i = i - 1)
    {
        if (palavra[i] >= '0' && palavra[i] <= '9')
        {
            printf("%c", palavra[i]);
            count = count + 1;
        }
    }
    printf("\ntamanho: %d", count);
    printf("\n");

    IO_pause("\nApertar ENTER para continuar");
} // end method_15

void method_16(void)
{
    int i = 0;
    int count = 0;
    char palavra[80];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    getchar();

    for (i = 0; i < strlen(palavra); i = i + 1)
    {
        if (!(palavra[i] >= 'A' && palavra[i] <= 'Z' ||
              palavra[i] >= 'a' && palavra[i] <= 'z' ||
              palavra[i] >= '0' && palavra[i] <= '9'))
        {
            printf("%c", palavra[i]);
            count = count + 1;
        }
    }
    printf("\n%d", count);
    IO_pause("Aperte ENTER para continuar");
} // end method_16

void method_17(void)
{
    char num[80];
    int i, x, n, a, b, count = 0;

    printf("Digite dois valores inteiros para definir um intervalo: \n");
    scanf("%d", &a);
    getchar();
    scanf("%d", &b);
    getchar();
    printf("Digite a quantidade de valores a serem testados: \n");
    scanf("%d", &n);
    getchar();

    for (i = 0; i < n; i = i + 1)
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &x);
        getchar();
        if (x % 5 == 0 && x >= a && x <= b)
        {
            sprintf(num + strlen(num), "\n%d", x);
            count = count + 1;
        }
    }
    printf("Quantidade de valores múltiplos de 5 no intervalo [%d:%d]: %d\n", a, b, count);
    printf("Os numeros multiplos de 5 no intervalo sao: %s\n", num);

    IO_pause("Aperte ENTER para continuar");
} // end method_17

/** Funcao principal.
    @ return codigo de encerramento
*/
int main()
{
    // definir dado
    int x = 0;
    // repetir até desejar parar
    do
    {
        // identificar
        IO_id("EXEMPLO0317 - Programa - v0.0");
        // ler do teclado
        IO_println("Opcoes");
        IO_println("0 - parar");
        IO_println("1 - repeticao com teste no inicio");
        IO_println("2 - repeticao com teste no inicio (melhor)");
        IO_println("3 - repeticao com teste no inicio (melhor)");
        IO_println("4 - repeticao com teste no inicio e variacao");
        IO_println("5 - repeticao com teste no inicio e variacao (melhor)");
        IO_println("6 - repeticao sobre cadeia de caracteres");
        IO_println("7 - repeticao sobre cadeia de caracteres (melhor)");
        IO_println("8 - repeticao com intervalos");
        IO_println("9 - repeticao com intervalos (melhor)");
        IO_println("10 - repeticao com confirmacao");
        IO_println("11 - mostrar maiuscula");
        IO_println("12 - mostrar maiuscula e contar");
        IO_println("13 - mostrar maiuscula e contar (do fim para o incio)");
        IO_println("14 - mostrar e contar todos os caracteres que forem letras");
        IO_println("15 - mostrar a palavra ao contrario");
        IO_println("16 - mostrar e contar tudo que nao for digito e letra");
        IO_println("17 - method_17");
        IO_println("");
        x = IO_readint("Entrar com uma opcao: ");
        // testar valor
        switch (x)
        {
        case 0:
            method_00();
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
        case 12:
            method_12();
            break;
        case 13:
            method_13();
            break;
        case 14:
            method_14();
            break;
        case 15:
            method_15();
            break;
        case 16:
            method_16();
            break;
        case 17:
            method_17();
            break;
        default:
            IO_pause(IO_concat("Valor diferente das opcoes [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17] (",
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