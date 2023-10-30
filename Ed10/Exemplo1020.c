/*
Exemplo0900 - v0.0. - __ / __ / _____
Author: Guilherme Lana
*/
// dependencias
#include "io.h"
#include <stdbool.h>
// para definicoes proprias
#define MAX_SIZE 1000 // Tamanho máximo do array
#define MAX_ROWS 100  // Número máximo de linhas da matriz
#define MAX_COLS 100  // Número máximo de colunas da matriz

/**
Method_00 - nao faz nada.
*/
int readArrayFromFile(const char *filename, int arranjo[], int *size)
{
    FILE *file = fopen(filename, "r");

    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return 0;
    }

    fscanf(file, "%d", size);

    if (*size > MAX_SIZE)
    {
        printf("Tamanho do arranjo excede o limite máximo.\n");
        fclose(file);
        return 0;
    }

    for (int i = 0; i < *size; i++)
    {
        fscanf(file, "%d", &arranjo[i]);
    }

    fclose(file);
    return 1;
}
int arraySearch(int valor, int arranjo[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arranjo[i] == valor)
        {
            return 1;
        }
    }
    return 0;
}
int RandomIntGenerate(int inferior, int superior)
{
    return rand() % (superior - inferior + 1) + inferior;
}
int arrayCompare(int arranjo1[], int size1, int arranjo2[], int size2)
{
    if (size1 != size2)
    {
        return 0;
    }

    for (int i = 0; i < size1; i++)
    {
        if (arranjo1[i] != arranjo2[i])
        {
            return 0;
        }
    }

    return 1;
}
int arrayAdd(int arranjo1[], int size, int arranjo2[], int constante, int resultado[])
{
    if (size <= 0)
    {
        return 0;
    }

    for (int i = 0; i < size; i++)
    {
        resultado[i] = arranjo1[i] + (arranjo2[i] * constante);
    }

    return 1;
}
int isArrayDecrescent(int arranjo[], int size)
{
    if (size <= 0)
    {
        return 0;
    }

    for (int i = 1; i < size; i++)
    {
        if (arranjo[i] > arranjo[i - 1])
        {
            return 0;
        }
    }

    return 1;
}
void readMatrixFromFile(const char *filename, int matriz[][MAX_COLS], int *rows, int *cols)
{
    FILE *file = fopen(filename, "r");

    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return;
    }

    fscanf(file, "%d %d", rows, cols);

    if (*rows > MAX_ROWS || *cols > MAX_COLS)
    {
        printf("Tamanho da matriz excede o limite máximo.\n");
        fclose(file);
        return;
    }

    for (int i = 0; i < *rows; i++)
    {
        for (int j = 0; j < *cols; j++)
        {
            fscanf(file, "%d", &matriz[i][j]);
        }
    }

    fclose(file);
}

void matrixTranspose(int matriz[][MAX_COLS], int rows, int cols, int resultado[][MAX_ROWS])
{
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            resultado[i][j] = matriz[j][i];
        }
    }
}

void printMatrix(int matriz[][MAX_COLS], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}
int matrixZero(int matriz[][MAX_COLS], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matriz[i][j] != 0)
            {
                return 0;
            }
        }
    }
    return 1;
}
int matrixCompare(int matriz1[][MAX_COLS], int rows1, int cols1, int matriz2[][MAX_COLS], int rows2, int cols2)
{
    if (rows1 != rows2 || cols1 != cols2)
    {
        return 0;
    }

    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            if (matriz1[i][j] != matriz2[i][j])
            {
                return 0;
            }
        }
    }
    return 1;
}
void matrixAdd(int matriz1[][MAX_COLS], int rows, int cols, int matriz2[][MAX_COLS], int constante, int resultado[][MAX_COLS])
{
    if (rows <= 0 || cols <= 0)
    {
        return;
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            resultado[i][j] = matriz1[i][j] + (matriz2[i][j] * constante);
        }
    }
}
void matrixProduct(int matriz1[][MAX_COLS], int rows1, int cols1, int matriz2[][MAX_COLS], int rows2, int cols2, int resultado[][MAX_COLS])
{
    if (cols1 != rows2)
    {
        return;
    }

    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            resultado[i][j] = 0;
            for (int k = 0; k < cols1; k++)
            {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}

void sortArrayUp(int arranjo[], int size)
{
    int temp, trocou;

    do
    {
        trocou = 0;

        for (int i = 0; i < size - 1; i++)
        {
            if (arranjo[i] > arranjo[i + 1])
            {
                temp = arranjo[i];
                arranjo[i] = arranjo[i + 1];
                arranjo[i + 1] = temp;
                trocou = 1;
            }
        }
    } while (trocou);
}

void printArray(int arranjo[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arranjo[i]);
    }
    printf("\n");
}
int isIdentityMatrix(int matriz[][MAX_COLS], int rows, int cols)
{
    if (rows != cols)
    {
        return 0;
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == j && matriz[i][j] != 1)
            {
                return 0;
            }
            else if (i != j && matriz[i][j] != 0)
            {
                return 0;
            }
        }
    }
    return 1;
}

void method_00(void)
{
    // nao faz nada
} // end method_00 ( )
void method_01()
{
    int inferior, superior, n;

    printf("Informe o limite inferior do intervalo: ");
    scanf("%d", &inferior);
    getchar();
    printf("Informe o limite superior do intervalo: ");
    scanf("%d", &superior);
    getchar();

    printf("Informe a quantidade de elementos a serem gerados: ");
    scanf("%d", &n);
    getchar();

    FILE *arquivo = fopen("DADOS.TXT", "w");

    fprintf(arquivo, "%d\n", n);

    for (int i = 0; i < n; i++)
    {
        int valor = RandomIntGenerate(inferior, superior);
        fprintf(arquivo, "%d\n", valor);
    }

    fclose(arquivo);

    IO_pause("Aperte ENTER para continuar");

} // end method_01 ( )
void method_02()
{
    const char *filename = "DADOS.TXT";
    int size, valor, resposta;
    int arranjo[MAX_SIZE];

    if (!readArrayFromFile(filename, arranjo, &size))
    {
        printf("ERRO ao ler arquivo");
    }

    printf("Informe o valor que deseja procurar: \n");
    scanf("%d", &valor);
    getchar();

    resposta = arraySearch(valor, arranjo, size);

    if (resposta == 1)
    {
        printf("\nO valor %d foi encontrado no arranjo.\n", valor);
    }
    else
    {
        printf("\nO valor %d não foi encontrado no arranjo.\n", valor);
    }

    IO_pause("Aperte ENTER para continuar");
} // end method_02
void method_03()
{
    const char *filename1 = "DADOS1.TXT";
    const char *filename2 = "DADOS2.TXT";
    int size1, size2, resposta;
    int arranjo1[MAX_SIZE];
    int arranjo2[MAX_SIZE];

    if (!readArrayFromFile(filename1, arranjo1, &size1) ||
        !readArrayFromFile(filename2, arranjo2, &size2))
    {
        printf("ERRO ao ler arquivo");
    }

    resposta = arrayCompare(arranjo1, size1, arranjo2, size2);

    if (resposta == 1)
    {
        printf("\nOs arranjos são iguais.\n");
    }
    else
    {
        printf("\nOs arranjos são diferentes.\n");
    }

    IO_pause("\nAperte ENTER para continuar");
}
void method_04()
{
    const char *filename1 = "DADOS1.TXT";
    const char *filename2 = "DADOS2.TXT";
    int size, resposta;
    int arranjo1[MAX_SIZE];
    int arranjo2[MAX_SIZE];
    int resultado[MAX_SIZE];
    int constante;

    if (!readArrayFromFile(filename1, arranjo1, &size) ||
        !readArrayFromFile(filename2, arranjo2, &size))
    {
        printf("ERRO ao ler arquivo");
    }

    printf("Informe a constante de escala: ");
    scanf("%d", &constante);

    resposta = arrayAdd(arranjo1, size, arranjo2, constante, resultado);

    if (resposta == 0)
    {
        printf("Tamanhos incompatíveis.\n");
    }
    else
    {
        printf("\nResultado da soma:\n");
        for (int i = 0; i < size; i++)
        {
            printf("%d\n", resultado[i]);
        }
    }

    IO_pause("\nAperte ENTER para continuar");
}
void method_05()
{
    const char *filename = "DADOS1.TXT";
    int size, resposta;
    int arranjo[MAX_SIZE];

    if (!readArrayFromFile(filename, arranjo, &size))
    {
        printf("ERRO ao ler arquivo");
    }

    resposta = isArrayDecrescent(arranjo, size);

    if (resposta == 1)
    {
        printf("O arranjo está em ordem decrescente.\n");
    }
    else
    {
        printf("O arranjo não está em ordem decrescente.\n");
    }

    IO_pause("\nAperte ENTER para continuar");
}
void method_06()
{
    const char *filename = "DADOS1.TXT";
    int rows, cols;
    int matriz[MAX_ROWS][MAX_COLS];
    int resultado[MAX_COLS][MAX_ROWS];

    readMatrixFromFile(filename, matriz, &rows, &cols);

    if (rows > 0 && cols > 0)
    {
        matrixTranspose(matriz, rows, cols, resultado);
        printf("Matriz original:\n");
        printMatrix(matriz, rows, cols);
        printf("Matriz transposta:\n");
        printMatrix(resultado, cols, rows);
    }

    IO_pause("\nAperte ENTER para continuar");
}
void method_07()
{
    const char *filename = "DADOS1.TXT";
    int rows, cols;
    int matriz[MAX_ROWS][MAX_COLS];
    int resposta;

    readMatrixFromFile(filename, matriz, &rows, &cols);

    if (rows > 0 && cols > 0)
    {
        resposta = matrixZero(matriz, rows, cols);

        if (resposta == 1)
        {
            printf("A matriz contém apenas zeros.\n");
        }
        else
        {
            printf("A matriz não contém apenas zeros.\n");
        }
    }

    IO_pause("\nAperte ENTER para continuar");
}
void method_08()
{
    const char *filename1 = "DADOS1.TXT";
    const char *filename2 = "DADOS2.TXT";
    int rows1, cols1, rows2, cols2;
    int matriz1[MAX_ROWS][MAX_COLS];
    int matriz2[MAX_ROWS][MAX_COLS];
    int resposta;

    readMatrixFromFile(filename1, matriz1, &rows1, &cols1);
    readMatrixFromFile(filename2, matriz2, &rows2, &cols2);

    if (rows1 > 0 && cols1 > 0 && rows2 > 0 && cols2 > 0)
    {
        resposta = matrixCompare(matriz1, rows1, cols1, matriz2, rows2, cols2);

        if (resposta == 1)
        {
            printf("As matrizes são iguais.\n");
        }
        else
        {
            printf("As matrizes não são iguais.\n");
        }
    }

    IO_pause("");
    IO_pause("\nAperte ENTER para continuar");
}
void method_09()
{
    const char *filename1 = "DADOS1.TXT";
    const char *filename2 = "DADOS2.TXT";
    int rows, cols;
    int matriz1[MAX_ROWS][MAX_COLS];
    int matriz2[MAX_ROWS][MAX_COLS];
    int resultado[MAX_ROWS][MAX_COLS];
    int constante;

    readMatrixFromFile(filename1, matriz1, &rows, &cols);
    readMatrixFromFile(filename2, matriz2, &rows, &cols);

    if (rows > 0 && cols > 0)
    {
        printf("Informe a constante de escala: ");
        scanf("%d", &constante);

        matrixAdd(matriz1, rows, cols, matriz2, constante, resultado);

        printf("Matriz original 1:\n");
        printMatrix(matriz1, rows, cols);
        printf("Matriz original 2:\n");
        printMatrix(matriz2, rows, cols);
        printf("\nResultado da soma com escalonamento:\n");
        printMatrix(resultado, rows, cols);
    }

    IO_pause("");
    IO_pause("\nAperte ENTER para continuar");
}
void method_10()
{
    const char *filename1 = "DADOS1.TXT";
    const char *filename2 = "DADOS2.TXT";
    int rows1, cols1, rows2, cols2;
    int matriz1[MAX_ROWS][MAX_COLS];
    int matriz2[MAX_ROWS][MAX_COLS];
    int resultado[MAX_ROWS][MAX_COLS];

    readMatrixFromFile(filename1, matriz1, &rows1, &cols1);
    readMatrixFromFile(filename2, matriz2, &rows2, &cols2);

    if (cols1 > 0 && rows2 > 0 && cols1 == rows2)
    {
        matrixProduct(matriz1, rows1, cols1, matriz2, rows2, cols2, resultado);

        printf("Matriz 1:\n");
        printMatrix(matriz1, rows1, cols1);
        printf("Matriz 2:\n");
        printMatrix(matriz2, rows2, cols2);
        printf("Resultado da multiplicação:\n");
        printMatrix(resultado, rows1, cols2);
    }
    else
    {
        printf("Tamanhos incompatíveis para multiplicação de matrizes.\n");
    }

    IO_pause("\nAperte ENTER para continuar");
}
void method_11()
{
    const char *filename = "DADOS1.TXT";
    int size;
    int arranjo[MAX_SIZE];

    readArrayFromFile(filename, arranjo, &size);

    if (size > 0)
    {
        printf("Arranjo original:\n");
        printArray(arranjo, size);

        sortArrayUp(arranjo, size);

        printf("Arranjo ordenado em ordem crescente:\n");
        printArray(arranjo, size);
    }
    IO_pause("\nAperte ENTER para continuar");
}
void method_12()
{
    const char *filename1 = "DADOS1.TXT";
    const char *filename2 = "DADOS2.TXT";
    int rows1, cols1, rows2, cols2;
    int matriz1[MAX_ROWS][MAX_COLS];
    int matriz2[MAX_ROWS][MAX_COLS];
    int resultado[MAX_ROWS][MAX_COLS];
    int resposta;

    readMatrixFromFile(filename1, matriz1, &rows1, &cols1);
    readMatrixFromFile(filename2, matriz2, &rows2, &cols2);

    if (cols1 > 0 && rows2 > 0 && cols1 == rows2)
    {
        matrixProduct(matriz1, rows1, cols1, matriz2, rows2, cols2, resultado);
        resposta = isIdentityMatrix(resultado, rows1, cols2);

        if (resposta == 1)
        {
            printf("O produto das matrizes é igual à matriz identidade.\n");
        }
        else
        {
            printf("O produto das matrizes não é igual à matriz identidade.\n");
        }
    }
    else
    {
        printf("Tamanhos incompatíveis para multiplicação de matrizes.\n");
    }

    IO_pause("\nAperte ENTER para continuar");
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
        default:
            IO_pause(IO_concat("Valor diferente das opcoes [0,1,2,3,4,5,6,7,8,9,10] (",

                               IO_concat(IO_toString_d(x), ")")));
        } // end switch
    } while (x != 0);
    // encerrar
    IO_pause("Apertar ENTER para terminar");
    return (0);
} // end main ( )