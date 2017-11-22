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
    int x;
    int n;
    int i;
    scanf("%d", &x);
    scanf("%d", &n);

    if(x & (1<<n-1))
        printf("1\n");
    else
        printf("0\n");

    int x1=x;
    x1 = x1 | (1<<(n));
    afisare(x1);

    int x2=x;
    x2

    return 0;
}
