#include <stdio.h>
#include <string.h>

int f2a(char *text, char c, char d, int y)
{
    for (int x = strlen(text) - 1; x >= 0; x = x - 1)
    {
        if (c == text[x] && y > 0)
        {
            text[x] = d;
            y = y - 1;
            if (y == 0)
            {
                x = 0;
            }
        }
    }
    return y;
}

int main()
{
    char s[10] = "batata";
    int d = f2a(s, 'a', 'A', 2);
    printf("\n%d[%s]", d,s);
}

//saida 0[batAtA]