#include <stdio.h>
#include <math.h>

int somatorio(int n)
{
    int x = 1;
    int y = 1;
    double total = 0;
    double result = (double)x / y;
    printf("%0.8lf + ", result);
    total = result;

    x = 2;
    y = 3;
    result = (double)x / y;
    total += result;
    
    printf("%.8lf", result);

    for (int i = 2; i <= n - 1; i++)
    {
        x = x + 4;
        y = y * 3;
        result = (double)x / y;
        printf(" + %.8lf", result);
        total += result;
    }
    printf("\n");
    printf("O total e %lf:", total);
}

int main()
{
    int n = 0;
    do
    {
        printf("Digite um valor: \n");
        scanf("%d", &n);
        getchar();
    } while (n <= 0);

    somatorio(n);

    return 0;
}
