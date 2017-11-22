#include <stdio.h>

void afisare(int x)
{
    int i;
    i = sizeof(int) * 8 - 1;
    while(i>=0)
    {
        if(x & (1<<i))
        {   
            printf("1");
            i--;
        }
        else
        {
            printf("0");
            i--;
        }
    }
    printf("\n");
}

int main()
{
    int x, y, n, p;
    x=10;
    y = 61;
    n = 3;
    p = 7;
    printf("x");afisare(x);
    printf("y");afisare(y);

   y = y - 1<<4;
   printf("y");afisare(y);
    return 0;
}
