#include <stdio.h>

int f4a(int x)
{
    int w = 6;
    while (x - 1 > 0)
    {
        w = w + 1;
        if (w % 7 == 0)
        {
            if (w % 10 % 2 != 0)
            {
                printf("%d", w);
                w = w + 13;
            }
            x = x - 1;
        }
    }
    return (w + 1);
}

int main(){
    printf(">%d",f4a(5));
}


//saida 7 21 35 49 > 63