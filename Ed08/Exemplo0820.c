/*
Exemplo0700 - v0.0. - __ / __ / _____
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

void method_0801()
{
    int x = 0;
    int y = 0;
    int z = 0;
    int i = 0;

    while (x <= 0)
    {
        printf("Digite o tamanho do array: \n");
        scanf("%d", &x);
        getchar();
    }

    int array[x];

    while (i < x)
    {
        printf("\nDigite um valor: \n");
        scanf("%d", &z);
        getchar();
        if (z % 2 != 0 && z > 0)
        {
            array[i] = z;
            i = i + 1;
        }
    }

    IO_pause("Aperte ENTER para continuar");
}

void method0802(int array[], const char *filename)
{
    int contador_linhas = 0;
    char caractere;
    FILE *arquivo = fopen(filename, "rt");
    while ((caractere = fgetc(arquivo)) != EOF)
    {
        if (caractere == '\n')
        {
            contador_linhas++;
        }
    }
    rewind(arquivo);

    int y = 0;
    int z = 0;
    int k = 0;

    for (int i = 0; i < contador_linhas; i++)
    {
        fscanf(arquivo, "%d", &z);

        if (z > 0 && z % 2 != 0)
        {
            array[k] = z;
            k++;
        }
    }

    fclose(arquivo);

    FILE *arquivoOut = fopen("output.txt", "wt");

    while (y < k)
    {
        fprintf(arquivoOut, "%d\n", array[y]);
        y++;
    }

    fclose(arquivoOut);
}
void method_0802()
{
    char filename[80];
    int array[100];
    printf("Digite o nome do arquivo: \n");
    scanf("%s", filename);
    method0802(array, filename);
    IO_pause("Aperte ENTER para continuar");
}
void method0803(int n, int x, int y)
{
    int array[n];
    FILE *arquivo = fopen("DADOS.TXT", "wt");

    for (int i = 0; i < n; i++)
    {
        int result = rand() % (y - x + 1) + 1;
        array[i] = result;
    }

    for (int i = 0; i < n; i++)
    {
        fprintf(arquivo, "%d\n", array[i]);
    }
    fclose(arquivo);
}

void method_0803()
{
    int n = 0;
    int x = 0;
    int y = 0;
    printf("Digite o primeiro valor do intervalo:\n");
    scanf("%d", &x);
    getchar();
    printf("\nDigite o segundo valor do intervalo:\n");
    scanf("%d", &y);
    getchar();
    printf("Digite a quantidade de valores a serem gerados: \n");
    scanf("%d", &n);
    getchar();

    method0803(n, x, y);

    IO_pause("Aperte ENTER para continuar");
}

void method0804(const char *filename)
{
    bool j = false;
    int i = 0;
    int x = 0;
    int pImpar = 0;
    int mImpar = 0;
    int contador_linhas = 0;
    char caractere;

    FILE *arquivo = fopen(filename, "rt");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    while ((caractere = fgetc(arquivo)) != EOF)
    {
        if (caractere == '\n')
        {
            contador_linhas++;
        }
    }

    rewind(arquivo);

    int array[contador_linhas];

    while (i < contador_linhas)
    {
        fscanf(arquivo, "%d", &array[i]);

        if (array[i] % 2 != 0 && !j)
        {
            pImpar = array[i];
            j = true;
            i = contador_linhas;
        }
    }
    rewind(arquivo);

    for (int z = 0; z < contador_linhas; z++)
    {
        fscanf(arquivo, "%d", &array[z]);

        if (array[z] % 2 != 0)
        {
            if (array[z] < pImpar)
            {
                pImpar = array[z];
            }
        }
    }
    printf("O menor numero e': %d\n", pImpar);
    fclose(arquivo);
}
void method_0804()
{
    char filename[80];
    printf("Digite o nome do arquivo que deseja abrir:\n");
    scanf("%s", filename);
    getchar();
    method0804(filename);

    IO_pause("Aperte ENTER para continuar");
}

void method0805(const char *filename)
{
    bool j = false;
    int i = 0;
    int x = 0;
    int pPar = 0;
    int mPar = 0;
    int contador_linhas = 0;
    char caractere;

    FILE *arquivo = fopen(filename, "rt");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    while ((caractere = fgetc(arquivo)) != EOF)
    {
        if (caractere == '\n')
        {
            contador_linhas++;
        }
    }

    rewind(arquivo);

    int array[contador_linhas];

    while (i < contador_linhas)
    {
        fscanf(arquivo, "%d", &array[i]);

        if (array[i] % 2 == 0 && !j)
        {
            pPar = array[i];
            j = true;
            i = contador_linhas;
        }
    }
    rewind(arquivo);

    for (int z = 0; z < contador_linhas; z++)
    {
        fscanf(arquivo, "%d", &array[z]);
        if (array[z] % 2 == 0)
        {
            if (array[z] > pPar)
            {
                pPar = array[z];
            }
        }
    }
    printf("O maior numero e': %d\n", pPar);
    fclose(arquivo);
}
void method_0805()
{
    char filename[80];
    printf("Digite o nome do arquivo que deseja abrir:\n");
    scanf("%s", filename);
    getchar();
    method0805(filename);

    IO_pause("Aperte ENTER para continuar");
}

void method0806(const char *filename)
{
    int i = 0;
    int z = 0;
    double media = 0.0;
    int menorMedia = 0;
    int maiorMedia = 0;
    int contador_linhas = 0;
    char caractere;
    int soma = 0;

    FILE *arquivo = fopen(filename, "rt");
    FILE *menor = fopen("menores.txt", "wt");
    FILE *maior = fopen("maiores.txt", "wt");

    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    while ((caractere = fgetc(arquivo)) != EOF)
    {
        if (caractere == '\n')
        {
            contador_linhas++;
        }
    }

    rewind(arquivo);

    int array[contador_linhas];

    for (i = 0; i < contador_linhas; i++)
    {
        if (fscanf(arquivo, "%d", &array[i]) != 1)
        {
            printf("Erro ao ler o número %d.\n", i + 1);
            break;
        }
        soma = soma + array[i];
    }
    i = 0;

    media = (double)soma / contador_linhas;

    for (z = 0; z < contador_linhas; z++)
    {
        fscanf(arquivo, "%d", &array[z]);
        if (array[z] > media)
        {
            fprintf(menor, "%d\n", array[z]);
        }
        else
        {
            fprintf(maior, "%d\n", array[z]);
        }
    }
    printf("Media: %lf", media);
    fclose(arquivo);
    fclose(menor);
    fclose(maior);
}

void method_0806()
{
    method0806("DADOS.TXT");
    IO_pause("Aperte ENTER para continuar");
}

void method007(char array[], int n)
{
    int i;
    bool desordenado = 0;

    for (i = 0; i < n - 1; i++)
    {
        if (array[i] < array[i + 1])
        {
            desordenado = 1;
        }
    }

    if (desordenado == true)
    {
        printf("O array está desordenado.\n");
    }
    else
    {
        printf("O array está em ordem.\n");
    }
}
void method_0807()
{
    int n;
    printf("Digite o tamanho do array: ");
    scanf("%d", &n);
    getchar();

    char array[n];
    printf("Digite os elementos do array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &array[i]);
        getchar();
    }

    method007(array, n);

    IO_pause("Aperte ENTER para continuar");
}

void method0808(const char *filename, int x)
{
    int i = 0;
    int contador_linhas = 0;
    char caractere;
    bool existe = 0;
    bool j = 1;

    FILE *arquivo = fopen(filename, "rt");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    while ((caractere = fgetc(arquivo)) != EOF)
    {
        if (caractere == '\n')
        {
            contador_linhas++;
        }
    }

    rewind(arquivo);
    int array[contador_linhas];

    for (i = 0; i < contador_linhas && j == true; i++)
    {
        fscanf(arquivo, "%d", &array[i]);
        if (array[i] == x)
        {
            existe = true;
            j = false;
        }
    }
    if (existe == true)
    {
        printf("\nO elemento %d foi encontrado no vetor.", x);
    }
    else
    {
        printf("\nElemento %d não foi encontrado no vetor.", x);
    }
}
void method_0808()
{
    int x;
    printf("Digite um numero a ser procurado:\n");
    scanf("%d", &x);
    getchar();

    method0808("DADOS.TXT", x);

    IO_pause("Aperte ENTER para continuar");
}

void method0809(const char *filename, int procurado, int posicaoInicial)
{
    int i = 0;
    int contador_linhas = 0;
    char caractere;
    int posicao = 0;
    bool existe = 0;
    bool j = 1;

    FILE *arquivo = fopen(filename, "rt");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    while ((caractere = fgetc(arquivo)) != EOF)
    {
        if (caractere == '\n')
        {
            contador_linhas++;
        }
    }
    rewind(arquivo);
    int array[contador_linhas];
    for (int i = posicaoInicial; i < contador_linhas && existe == false; i++)
    {
        fscanf(arquivo, "%d ", &array[i]);
        if (array[i] == procurado)
        {
            posicao = i + 1;
            existe = true;
        }
    }

    if (existe == true)
    {
        printf("\nO %d foi encontrado na linha: %d\n", procurado, posicao);
    }
    else
    {
        printf("\nNao ha registros com esse valor!\n");
    }
}
void method_0809()
{
    int procurado;
    int posicaoInicial;
    printf("\nDigite um valor a ser procurado no vetor:\n");
    scanf("%d", &procurado);
    getchar();
    printf("Digite por qual posicao deve comecar a procura:\n");
    scanf("%d", &posicaoInicial);
    getchar();

    method0809("DADOS.TXT", procurado, posicaoInicial);

    IO_pause("Aperte ENTER para continuar");
}

void method0810(const char *filename, int procurado, int posicaoInicial)
{
    int contador_linhas = 0;
    char caractere;
    int vezes = 0;
    bool existe = false;

    FILE *arquivo = fopen(filename, "rt");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    while ((caractere = fgetc(arquivo)) != EOF)
    {
        if (caractere == '\n')
        {
            contador_linhas++;
        }
    }
    rewind(arquivo);

    int array[contador_linhas];
    for (int i = posicaoInicial; i < contador_linhas; i++)
    {
        fscanf(arquivo, "%d ", &array[i]);
        if (array[i] == procurado)
        {
            vezes++;
            existe = true;
        }
    }

    if (existe)
    {
        printf("\nO %d foi encontrado nas seguintes linhas:", procurado);
        for (int i = posicaoInicial; i < contador_linhas; i++)
        {
            if (array[i] == procurado)
            {
                printf(" %d", i + 1); 
            }
        }
        printf("\nTotal de vezes: %dx\n", vezes);
    }
    else
    {
        printf("\nNão há registros com esse valor!\n");
    }

    fclose(arquivo);
}
void method_0810()
{
    int procurado;
    int posicaoInicial;
    printf("\nDigite um valor a ser procurado no vetor:\n");
    scanf("%d", &procurado);
    getchar();
    printf("Digite por qual posicao deve comecar a procura:\n");
    scanf("%d", &posicaoInicial);
    getchar();

    method0810("DADOS.TXT", procurado, posicaoInicial);

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

        x = IO_readint("Entrar com uma opcao: ");
        // testar valor
        switch (x)
        {
        case 0:
            method_00();
            break;
        case 1:
            method_0801();
            break;
        case 2:
            method_0802();
            break;
        case 3:
            method_0803();
            break;
        case 4:
            method_0804();
            break;
        case 5:
            method_0805();
            break;
        case 6:
            method_0806();
            break;
        case 7:
            method_0807();
            break;
        case 8:
            method_0808();
            break;
        case 9:
            method_0809();
            break;
        case 10:
            method_0810();
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