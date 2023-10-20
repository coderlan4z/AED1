#include <stdio.h>

void mostrar(int x)
{
    int i = 0;
    int j = 0;

    if (x % 2 == 0)
    {
        x = x - 1;
    }

    int z = x / 2;

    for (i = 0; i <= z; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (i = z - 1; i >= 0; i--)
    {
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int x;

    do
    {
        printf("Insira um valor inteiro maior que 2: ");
        scanf("%d", &x);
        getchar();
    } while (x < 2);

    mostrar(x);

    return 0;
}
