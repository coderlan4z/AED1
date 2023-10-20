#include <stdio.h>
#include <string.h>

int norep(char *palavra)
{
    int result = 1;
    int i = 0;
    int j = 0;

    do
    {
        j = i + 1;
        do
        {
            if (palavra[i] == palavra[j])
            {
                result = 0;
            }
            //           printf("%d %d %d %c %c\n", i, j, result, palavra[i], palavra[j]);

            j = j + 1;

        } while (j < strlen(palavra));
        i = i + 1;
    } while (i < strlen(palavra) - 1);

    return result;
}

int main()
{
    char palavra[100];

    int count = 0;
    do
    {
        printf("Digite uma palavra: ");
        scanf("%s", palavra);
        getchar();

        if (norep(palavra) == 1)
        {
            count = count + 1;
        }
        //   printf("%s %d %d", palavra, norep(palavra), count);

    } while (count < 2);

    return 0;
}