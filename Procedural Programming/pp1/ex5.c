#include <stdio.h>

int main()
{
    int a;
    int b;

    scanf("%d", &a);
    scanf("%d", &b);

    printf("%d:%d = %d rest %d\n", a, b, a/b, a%b);
    return 0;
}
