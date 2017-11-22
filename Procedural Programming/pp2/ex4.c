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
    int b2;
    int x;

    while(x)
    return 0;
}
