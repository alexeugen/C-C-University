#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int i = sizeof(int)*8 - 1;

    scanf("%d", &x);

    while(i>=0)
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
    return 0;
}
