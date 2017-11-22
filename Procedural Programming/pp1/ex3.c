#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    printf("%d\n", n<<3);
    printf("%d\n", n>>2);
    n<<2;
    n | 1;
    n<<1;
    printf("%d\n", n); 
    return 0;
}
