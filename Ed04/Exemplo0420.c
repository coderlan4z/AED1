/*
Exemplo0420 - v0.0. - __ / __ / _____
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

void method_11()
{
    int quantidade = 0;
    int contador = 0;
    int controle = 1;
    int x = 0;
    int y = 0;
    int valorfora = 0;

    printf("Entre com o inicio do intervalo: ");
    scanf("%d", &x);
    getchar();
    printf("Entre com o fim do intervalo: ");
    scanf("%d", &y);
    getchar();

    printf("Entre com a quantidade de valores: ");
    scanf("%d", &quantidade);
    getchar();

    while (controle <= quantidade)
    {
        int valor = 0;
        printf("Digite o valor %d:", controle);
        scanf("%d", &valor);
        getchar();

        if (valor >= x && valor <= y)
        {
            contador = contador + 1;
        }
        controle = controle + 1;
    }

    valorfora = quantidade - contador;

    printf("\n");
    printf("A quantidade de valores dentro do intervalo [%d,%d] eh: %d\n", x, y, contador);
    printf("A quantidade de valores fora do intervalo [%d,%d] eh: %d\n", x, y, valorfora);

    IO_pause("Apertar ENTER para continuar");
} // end method_11

void method_12()
{
    char string[100];
    int contador = 0;
    int controle = 1;
    int i = 0;

    printf("Entre com uma sequencia de caracteres: ");
    scanf("%s", string);
    getchar();

    for (i = 0; i <= strlen(string); i = i + 1)
    {
        if (string[i] > 'K' && string[i] < 'Z')
        {
            contador = contador + 1;
        }
    }

    printf("A quantidade de caracteres maiores que 'K' eh: %d\n", contador);

    IO_pause("Apertar ENTER para continuar");

} // end method_12

int maiuscula(char string[])
{
    int contador = 0;
    int i = 0;

    for (i = 0; i < strlen(string); i = i + 1)
    {
        if (string[i] >= 'K' && string[i] <= 'Z')
        {
            contador = contador + 1;
        }
    }
    return (contador);
}

void method_13()
{
    char string[100];

    printf("Digite uma sequencia de caracteres: ");
    scanf("%s", string);
    getchar();

    int quantidade = maiuscula(string);

    printf("A quantidade de caracteres maiusculos maiores que 'K' eh: %d\n", quantidade);

    IO_pause("Apertar ENTER para continuar");
} //  end method_13

void mostrarMaiusculas(char string[], char mostrar[])
{
    int contador = 0;
    int i = 0;

    for (i = 0; i < strlen(string); i = i + 1)
    {
        if (string[i] >= 'K' && string[i] <= 'Z')
        {
            mostrar[contador] = string[i];
            contador = contador + 1;
        }
    }
    mostrar[contador] = '\0';
}

void method_14()
{
    char string[100];

    printf("Digite uma sequencia de caracteres: ");
    scanf("%s", string);
    getchar();

    char mostrar[100];
    mostrarMaiusculas(string, mostrar);

    printf("Os caracteres maiusculos maiores que 'K' sao: %s\n", mostrar);

    IO_pause("Apertar ENTER para continuar");
} // end method_14

void mostrarMaiusculasEminusculas(char string[], char mostrar[])
{
    int contador = 0;
    int i = 0;

    for (i = 0; i < strlen(string); i = i + 1)
    {
        if (string[i] >= 'K' && string[i] <= 'Z' || string[i] > 'k' && string[i] < 'z')
        {
            mostrar[contador] = string[i];
            contador = contador + 1;
        }
    }
    mostrar[contador] = '\0';
}
void method_15()
{
    char string[100];

    printf("Digite uma sequencia de caracteres: ");
    scanf("%s", string);
    getchar();

    char mostrar[100];
    mostrarMaiusculasEminusculas(string, mostrar);

    printf("Os caracteres maiusculos maiores que 'K' e minusculos menores que 'z' sao: %s\n", mostrar);

    IO_pause("Apertar ENTER para continuar");
} // end method_15

void mostrarMaiusculasEminusculasComEspaco(char string[], char mostrar[])
{
    int contador = 0;

    for (int i = 0; i < strlen(string); i++)
    {
        if ((string[i] >= 'K' && string[i] <= 'Z') || (string[i] >= 'k' && string[i] <= 'z'))
        {
            mostrar[contador] = string[i];
            contador++;
            mostrar[contador] = ' ';
            contador++;
        }
    }

    mostrar[contador] = '\0';
}

void method_16()
{
    char string[100];

    printf("Digite uma sequência de caracteres: ");
    scanf("%s", string);
    getchar();

    char mostrar[200];
    mostrarMaiusculasEminusculasComEspaco(string, mostrar);

    printf("Os caracteres maiúsculos e minúsculos com espaços são: %s\n", mostrar);

    IO_pause("Apertar ENTER para continuar");
} // end method_16

int contarDigitosImpar(char string[])
{
    int contador = 0;
    int i = 0;

    for (i = 0; i < strlen(string); i = i + 1)
    {
        if (string[i] >= '0' && string[i] <= '9' && string[i] % 2 != 0)
        {
            contador = contador + 1;
        }
    }
    return (contador);
}

void method_17()
{
    char string[100];

    printf("Digite uma sequencia de caracteres: ");
    scanf("%s", string);
    getchar();

    int quantidade = contarDigitosImpar(string);

    printf("A quantidade de caracteres impares eh: %d\n", quantidade);

    IO_pause("Apertar ENTER para continuar");
} //  end method_17

void letrasEnumeros(char string[], char mostrar[])
{
    int contador = 0;
    int i = 0;

    for (i = 0; i < strlen(string); i = i + 1)
    {
        if (string[i] >= 'A' && string[i] <= 'Z' || string[i] >= 'a' && string[i] <= 'z' || string[i] >= '0' && string[i] <= '9')
        {
            mostrar[contador] = string[i];
            contador = contador + 1;
        }
    }
    mostrar[contador] = '\0';
}
void method_18()
{
    char string[100];

    printf("Digite uma sequencia de caracteres: ");
    scanf("%s", string);
    getchar();

    char mostrar[100];
    letrasEnumeros(string, mostrar);

    printf("As letras e numeros sao: %s\n", mostrar);

    IO_pause("Apertar ENTER para continuar");
} // end method_18

void letrasEnumerosSeparados(char string[], char mostrar[])
{
    int contador = 0;
    int i = 0;

    for (i = 0; i < strlen(string); i = i + 1)
    {
        if (string[i] >= 'A' && string[i] <= 'Z' || string[i] >= 'a' && string[i] <= 'z' || string[i] >= '0' && string[i] <= '9')
        {
            mostrar[contador] = string[i];
            contador = contador + 1;
            mostrar[contador] = ' ';
            contador = contador + 1;
        }
    }
    mostrar[contador] = '\0';
}
void method_19()
{
    char string[100];

    printf("Digite uma sequencia de caracteres: ");
    scanf("%s", string);
    getchar();

    char mostrar[100];
    letrasEnumerosSeparados(string, mostrar);

    printf("As letras e numeros separados por espaco sao: %s\n", mostrar);

    IO_pause("Apertar ENTER para continuar");
} // end method_19

int contarSimbolosAlfanumericos(const char palavra[], char mostrar[])
{
    int contador = 0;
    for (int i = 0; palavra[i] != '\0'; i++)
    {
        if ((palavra[i] >= 'A' && palavra[i] <= 'Z') ||
            (palavra[i] >= 'a' && palavra[i] <= 'z') ||
            (palavra[i] >= '0' && palavra[i] <= '9'))
        {
            mostrar[contador] = palavra[i];
            contador++;
            mostrar[contador] = ' ';
            contador++;
        }
    }
    mostrar[contador] = '\0';
    return contador / 2; 
}

void method_20()
{
    int totalAcumulado = 0;
    int quantidadePalavras;

    printf("Quantas palavras você deseja inserir? ");
    scanf("%d", &quantidadePalavras);
    getchar(); 

    for (int i = 0; i < quantidadePalavras; i++)
    {
        char palavra[100]; 
        char mostrar[200]; 

        printf("Digite a palavra %d: ", i + 1);
        scanf("%s", palavra);
        getchar(); 

        int simbolosAlfanumericos = contarSimbolosAlfanumericos(palavra, mostrar);
        printf("Os símbolos alfanuméricos na palavra %d são: %s\n", i + 1, mostrar);

        totalAcumulado += simbolosAlfanumericos;
    }
    printf("\n");
    printf("O total acumulado de símbolos alfanuméricos em todas as palavras é: %d\n", totalAcumulado);

    IO_pause("Apertar ENTER para continuar");
} // end method_20

void extra01()
{
    int numSequencias;
    int totalSimbolos = 0;

    printf("Digite a quantidade de sequências a serem lidas: ");
    scanf("%d", &numSequencias);
    getchar(); 

    for (int i = 0; i < numSequencias; i++)
    {
        char sequencia[1000]; 

        printf("Digite a sequência de caracteres %d: ", i + 1);
        fgets(sequencia, sizeof(sequencia), stdin);

        for (int j = 0; sequencia[j] != '\0'; j++)
        {
            char c = sequencia[j];
            if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9') || c == ' ')
            {
                totalSimbolos++;
            }
        }
    }
    printf("Total de símbolos alfanuméricos em todas as palavras: %d\n", totalSimbolos);

    IO_pause("Apertar ENTER para continuar");
}

int contarDigitos(const char *sequencia)
{
    int contador = 0;
    for (int i = 0; sequencia[i] != '\0'; i = i + 1)
    {
        if (sequencia[i] >= '0' && sequencia[i] <= '9')
        {
            contador++;
        }
    }
    return contador;
}
void extra02()
{
    char sequencia1[100]; 
    char sequencia2[100];

    printf("Digite a primeira sequência de caracteres: ");
    scanf("%s", sequencia1);
    getchar();
    printf("Digite a segunda sequência de caracteres: ");
    scanf("%s", sequencia2);
    getchar();

    int digitosNaSequencia1 = contarDigitos(sequencia1);
    int digitosNaSequencia2 = contarDigitos(sequencia2);

    if (digitosNaSequencia1 > digitosNaSequencia2)
    {
        printf("A primeira sequência tem mais dígitos.\n");
    }
    else if (digitosNaSequencia2 > digitosNaSequencia1)
    {
        printf("A segunda sequência tem mais dígitos.\n");
    }
    else
    {
        printf("As duas sequências têm a mesma quantidade de dígitos.\n");
    }

    IO_pause("Apertar ENTER para continuar");
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
        IO_println("1 - Method_11");
        IO_println("2 - Method_12");
        IO_println("3 - Method_13");
        IO_println("4 - Method_14");
        IO_println("5 - Method_15");
        IO_println("6 - Method_16");
        IO_println("7 - Method_17");
        IO_println("8 - Method_18");
        IO_println("9 - Method_19");
        IO_println("10 - Method_20");
        IO_println("11 - Extra01");
        IO_println("12 - Extra02");
        IO_println("");
        x = IO_readint("Entrar com uma opcao: ");
        // testar valor
        switch (x)
        {
        case 0:
            method_00();
            break;
        case 1:
            method_11();
            break;
        case 2:
            method_12();
            break;
        case 3:
            method_13();
            break;
        case 4:
            method_14();
            break;
        case 5:
            method_15();
            break;
        case 6:
            method_16();
            break;
        case 7:
            method_17();
            break;
        case 8:
            method_18();
            break;
        case 9:
            method_19();
            break;
        case 10:
            method_20();
            break;
        case 11:
            extra01();
            break;
        case 12:
             extra02();
            break;
        default:
            IO_pause(IO_concat("Valor diferente das opcoes [0,1,2,3,4,5,6,7,8,9,10,11,12] (",
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