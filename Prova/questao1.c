#include <stdio.h>

int f1a(int x, int y, int z)
{
    int w = 0;
    while (x < y - 1)
    {
        x = x + 1;
        if (x % 2 == 0 && x % z == 0)
        {
            printf("%d ", x);
            w = w + 1;
        }
    }
    return w;
}

int main(){
    printf(">%d", f1a(12,45,3));
}

//saida 18 24 30 36 42 > 5