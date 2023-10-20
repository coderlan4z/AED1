#include <stdio.h>

int f5a(int x, int y, int z)
{
    if (x > 0)
    {
        z = z + y;
        y = y + 2;
        x = x - 1;
        z = f5a(x, y, z);
    }
    return z;
}

int main(){
    printf("%d", f5a(5,1,0));
    return 0;
}

//saida 25