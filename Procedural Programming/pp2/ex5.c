#include <stdio.h>

int main()
{
    int n;
    int m;

    scanf("%d",&n);
    while(n!=0)
    {
        scanf("%d", &m);
        int c=0, cn;
        cn = n;
        while(cn!=0)
        {
            c+=cn%10;
            cn/=10;
        }
        if(n%c == m)
            printf("%d,%d", n, m);
        n = m;
    }
    return 0;
}
